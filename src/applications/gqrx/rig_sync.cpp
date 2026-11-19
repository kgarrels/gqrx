/* -*- c++ -*- */
/*
 * Gqrx SDR: Software defined radio receiver powered by GNU Radio and Qt
 *           https://gqrx.dk/
 *
 * Gqrx is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * Gqrx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gqrx; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
#include <algorithm>
#include <cstdlib>
#include <vector>

#include <QHostAddress>
#include <QLoggingCategory>
#include <QRegularExpression>
#include <QTcpSocket>

#include "rig_sync.h"

/* Info and up by default; traffic with QT_LOGGING_RULES="rigsync.debug=true" */
Q_LOGGING_CATEGORY(rigsync, "rigsync", QtInfoMsg)

namespace {

constexpr int    TICK_MS          = 20;     // housekeeping resolution
constexpr int    RETRY_MS         = 5000;   // reopen the port while the radio is off
constexpr int    START_TIMEOUT_MS = 4000;   // radio must answer the initial query
constexpr int    POWER_ON_TIMEOUT_MS = 20000; // radio must have booted after PS1;
constexpr int    POWER_ON_RETRY_MS = 3000;  // still PS0 after this long: send PS1; again
constexpr int    POWER_ON_ATTEMPTS = 3;
constexpr int    POLL_MS          = 1000;   // slow status poll / power watchdog
constexpr int    SILENCE_MS       = 3500;   // no data for this long -> radio is off
constexpr int    ECHO_TTL_MS      = 1500;   // an echo of our write may take this long
constexpr int    SETTLE_MS        = 120;    // radio reports its new filter after a mode change
constexpr int    GQ_SETTLE_MS     = 30;     // coalesce bursts of gqrx changes
constexpr int    POWER_ON_WAKE_MS = 200;    // between waking the radio and PS1;
constexpr qint64 CAT_MAX_BACKLOG  = 64 * 1024;  // a CAT client not reading is dropped

/* ---- TS-890 / gqrx lookup tables (from the PC control command reference) ---- */

const char *tsModeName(int om)
{
    switch (om)
    {
    case '1': return "LSB";   case '2': return "USB";   case '3': return "CW";
    case '4': return "FM";    case '5': return "AM";    case '6': return "FSK";
    case '7': return "CW-R";  case '9': return "FSK-R"; case 'A': return "PSK";
    case 'B': return "PSK-R"; case 'C': return "LSB-D"; case 'D': return "USB-D";
    case 'E': return "FM-D";  case 'F': return "AM-D";
    default:  return "?";
    }
}

int tsToGqrxMode(int om)
{
    switch (om)
    {
    case '1': case '6': case 'B': case 'C': return RigSync::GQ_LSB;
    case '2': case '9': case 'A': case 'D': return RigSync::GQ_USB;
    case '3': return RigSync::GQ_CWU;
    case '7': return RigSync::GQ_CWL;
    case '4': case 'E': return RigSync::GQ_NFM;
    case '5': case 'F': return RigSync::GQ_AM;
    default:  return -1;
    }
}

int gqrxToTsMode(int mode)      // modes the radio cannot do (WFM, ...) give 0
{
    switch (mode)
    {
    case RigSync::GQ_LSB:     return '1';
    case RigSync::GQ_USB:     return '2';
    case RigSync::GQ_CWU:     return '3';
    case RigSync::GQ_CWL:     return '7';
    case RigSync::GQ_NFM:     return '4';
    case RigSync::GQ_AM:
    case RigSync::GQ_AM_SYNC: return '5';
    default:                  return 0;
    }
}

const char *gqrxModeName(int mode)
{
    static const char *names[] = { "OFF", "RAW", "AM", "AMS", "LSB", "USB", "CWL",
                                   "CWU", "FM", "WFM", "WFM_ST", "WFM_ST_OIRT" };
    return (mode >= 0 && mode < 12) ? names[mode] : "?";
}

/* SL / SH ID -> Hz. The vector index is the ID. */
std::vector<int> range(int start, int step, int count, std::vector<int> tail = {})
{
    std::vector<int> v;
    for (int i = 0; i < count; i++)
        v.push_back(start + step * i);
    v.insert(v.end(), tail.begin(), tail.end());
    return v;
}

const std::vector<int> &ssbLow()            // SL 00..21
{
    static const std::vector<int> t = [] {
        std::vector<int> v = { 0, 50 };
        for (int n = 2; n < 22; n++)
            v.push_back((n - 1) * 100);
        return v;
    }();
    return t;
}
const std::vector<int> &ssbHigh()  { static const auto t = range(600, 100, 25, { 3400, 4000, 5000 }); return t; }
const std::vector<int> &amHigh()   { static const auto t = range(2000, 100, 11, { 3500, 4000, 5000 }); return t; }
const std::vector<int> &fmHigh()   { static const auto t = range(1000, 100, 21, { 3400, 4000, 5000 }); return t; }
const std::vector<int> &ssbWidth()
{
    static const std::vector<int> t = [] {
        std::vector<int> v = { 50, 80, 100, 150, 200, 250, 300, 350, 400, 450, 500 };
        auto tail = range(600, 100, 25);
        v.insert(v.end(), tail.begin(), tail.end());
        return v;
    }();
    return t;
}
const std::vector<int> &cwWidth()
{
    static const std::vector<int> t = { 50, 80, 100, 150, 200, 250, 300, 350, 400, 450, 500,
                                        600, 700, 800, 900, 1000, 1500, 2000, 2500 };
    return t;
}
const std::vector<int> &fskWidth()
{
    static const std::vector<int> t = { 250, 300, 350, 400, 450, 500, 1000, 1500 };
    return t;
}
const std::vector<int> &pskWidth()
{
    static const std::vector<int> t = { 50, 80, 100, 150, 200, 250, 300, 350, 400, 450, 500,
                                        600, 700, 800, 900, 1000, 1200, 1400, 1500, 1600,
                                        1800, 2000, 2200, 2400, 2600, 2800, 3000 };
    return t;
}

const std::vector<int> *widthTable(const QString &kind)
{
    if (kind == "ssbwidth") return &ssbWidth();
    if (kind == "cw")       return &cwWidth();
    if (kind == "fsk")      return &fskWidth();
    if (kind == "psk")      return &pskWidth();
    return nullptr;
}

const std::vector<int> *highcutTable(const QString &kind)
{
    if (kind == "am") return &amHigh();
    if (kind == "fm") return &fmHigh();
    return nullptr;
}

/* table[idx], or -1 if idx is unknown / out of range */
int lookup(const std::vector<int> &table, int idx)
{
    return (idx >= 0 && idx < (int)table.size()) ? table[idx] : -1;
}

/* index of the entry closest to value */
int nearestId(const std::vector<int> &table, double value)
{
    int best = 0;
    for (int i = 1; i < (int)table.size(); i++)
        if (std::abs(table[i] - value) < std::abs(table[best] - value))
            best = i;
    return best;
}

QString fmtHz(qint64 hz)
{
    return hz < 0 ? QString("-") : QString::asprintf("%.6f MHz", hz / 1e6);
}

} // namespace


RigSync::RigSync(RigSyncGqrx &gqrx, QObject *parent) : QObject(parent), m_gqrx(gqrx)
{
    m_clock.start();
    for (const char *key : { "FA", "FB", "OM", "SL", "SH" })
        m_pending.insert(key, {});

    m_tick.setInterval(TICK_MS);
    connect(&m_tick, &QTimer::timeout, this, &RigSync::onTick);
    connect(&m_serial, &QSerialPort::readyRead, this, &RigSync::onSerialData);
    connect(&m_serial, &QSerialPort::errorOccurred, this, [this](QSerialPort::SerialPortError error) {
        if (error != QSerialPort::NoError && error != QSerialPort::TimeoutError)
            m_serialError = "serial error: " + m_serial.errorString();   // handled on the next tick
    });
    connect(&m_catServer, &QTcpServer::newConnection, this, &RigSync::onCatConnection);
}

RigSync::~RigSync()
{
    if (m_state != State::Off)
        stopRadio("gqrx is closing", false);
    stopCatServer();
}

/* ======================================================================= lifecycle */

void RigSync::setConfig(const RigSyncConfig &config)
{
    if (config == m_cfg && (m_state != State::Off) == config.enabled)
        return;

    if (m_state != State::Off)
        stopRadio("settings changed", false);
    stopCatServer();
    m_cfg = config;
    m_originalAi = -1;                      // possibly another radio now
    m_powerOnAllowed = true;                // like a new launch

    if (!m_cfg.enabled || m_cfg.port.isEmpty())
    {
        setState(State::Off, m_cfg.enabled ? "no serial port configured" : QString());
        return;
    }
    startCatServer();
    m_tick.start();
    startRadio();
}

QString RigSync::statusText() const
{
    static const char *names[] = { "off", "waiting for the TS-890", "starting",
                                   "turning the TS-890 on", "running" };
    QString text = names[(int)m_state];
    if (!m_detail.isEmpty())
        text += " (" + m_detail + ")";
    if (m_state == State::Running)
        text += QString(", %1, %2").arg(fmtHz(rxFreq()), tsModeName(m_om));
    if (m_catServer.isListening())
        text += QString(", CAT port %1 with %2 client(s)").arg(m_catServer.serverPort())
                                                           .arg(m_catClients.size());
    return text;
}

quint16 RigSync::catServerPort() const
{
    return m_catServer.isListening() ? m_catServer.serverPort() : 0;
}

void RigSync::setState(State state, const QString &detail)
{
    m_state = state;
    m_detail = detail;
    if (state == State::Off)
        m_tick.stop();
}

/* Open the serial port and query the radio; Waiting (and retry) on failure. */
void RigSync::startRadio()
{
    m_serial.setPortName(m_cfg.port);
    m_serial.setBaudRate(m_cfg.baud);
    m_serial.setDataBits(QSerialPort::Data8);
    m_serial.setParity(QSerialPort::NoParity);
    m_serial.setStopBits(QSerialPort::OneStop);
    m_serial.setFlowControl(m_cfg.rtscts ? QSerialPort::HardwareControl : QSerialPort::NoFlowControl);
    if (!m_serial.open(QIODevice::ReadWrite))
    {
        const QString reason = "cannot open " + m_cfg.port + ": " + m_serial.errorString();
        if (reason != m_lastWaitReason)
            qCWarning(rigsync).noquote() << reason << "- retrying every" << RETRY_MS / 1000 << "s";
        m_lastWaitReason = reason;
        setState(State::Waiting, reason);
        m_retryDue = now() + RETRY_MS;
        return;
    }

    /* forget everything we knew about the radio */
    m_rxBuf.clear();
    m_serialError.clear();
    m_fa = m_fb = -1;
    m_fr = m_sl = m_sh = m_ai = -1;
    m_om = 0;
    m_ssbMenuKnown = m_dataMenuKnown = (m_cfg.ssbFilter != "auto");
    if (m_cfg.ssbFilter != "auto")
        m_ssbMenu = m_dataMenu = (m_cfg.ssbFilter == "cut") ? 0 : 1;
    for (auto &queue : m_pending)
        queue.clear();
    m_gqDue = m_bwPushDue = m_tsRefreshDue = m_nextPoll = 0;
    m_gqFreqChanged = m_gqModeChanged = m_gqBwChanged = false;
    m_memoryWarned = false;

    setState(State::Starting);
    send(";");
    send(statusQuery(false));
    m_startDue = now() + START_TIMEOUT_MS;
    m_lastRx = now();
}

/* Close the port. After a power-off we wait for the radio to come back. */
void RigSync::stopRadio(const QString &reason, bool poweredOff)
{
    const bool wasRunning = (m_state == State::Running);
    if (m_serial.isOpen())
    {
        if (!poweredOff && m_originalAi == 0)
        {
            send("AI0;");                    // leave the radio as we found it
            m_serial.waitForBytesWritten(200);
        }
        m_serial.close();
    }
    if (wasRunning)
        qCInfo(rigsync).noquote() << "TS-890 sync stopped:" << reason;
    else if (poweredOff && reason != m_lastWaitReason)
        qCInfo(rigsync).noquote() << "TS-890 not available:" << reason << "- retrying every"
                                  << RETRY_MS / 1000 << "s";

    if (poweredOff && m_cfg.enabled)
    {
        m_lastWaitReason = reason;
        setState(State::Waiting, reason);
        m_retryDue = now() + RETRY_MS;
        if (wasRunning)
            m_gqrx.rigPoweredOff();         // may quit gqrx: last thing we do
    }
    else
    {
        setState(State::Off);
    }
}

/* Every 20 ms while enabled: all time-outs and delayed actions. */
void RigSync::onTick()
{
    const qint64 t = now();
    auto due = [t](qint64 &deadline) {
        if (!deadline || t < deadline)
            return false;
        deadline = 0;
        return true;
    };

    if (!m_serialError.isEmpty() && m_state != State::Off && m_state != State::Waiting)
    {
        const QString reason = m_serialError;
        m_serialError.clear();
        m_serial.clearError();
        stopRadio(reason, true);
        return;
    }

    switch (m_state)
    {
    case State::Off:
        return;

    case State::Waiting:
        if (due(m_retryDue))
            startRadio();
        return;

    case State::Starting:
        if (due(m_startDue))
            stopRadio("the TS-890 did not answer (is it on? are port and baud rate right?)", true);
        return;

    case State::PoweringOn:
        if (t - m_powerOnStart >= POWER_ON_TIMEOUT_MS)
            stopRadio(QString("the TS-890 did not turn on within %1 s").arg(POWER_ON_TIMEOUT_MS / 1000), true);
        else if (due(m_powerOnSendDue))
            sendPowerOn();
        else if (t >= m_nextPowerProbe)
        {
            m_nextPowerProbe = t + 1000;
            send("PS;");                    // PS1; once booted; still PS0; -> PS1; again
        }
        return;

    case State::Running:
        break;
    }

    if (due(m_gqDue))
        flushGqrxChanges();
    if (due(m_tsRefreshDue))
        send("SL0;SH0;");
    if (due(m_bwPushDue))
        pushBwToGq();
    if (t >= m_nextPoll)
    {
        m_nextPoll = t + POLL_MS;
        if (t - m_lastRx > SILENCE_MS)
            stopRadio(QString("no answer from the TS-890 for %1 s").arg(SILENCE_MS / 1000.0), true);
        else
            send(statusQuery(true));
    }
}

/* ==================================================================== TS-890 link */

void RigSync::send(const QByteArray &cmd)
{
    if (!m_serial.isOpen())
        return;
    qCDebug(rigsync) << "TS-890 <-" << cmd;
    m_serial.write(cmd);
}

QByteArray RigSync::statusQuery(bool pollOnly) const
{
    QByteArray query = pollOnly ? "PS;" : "AI;PS;";
    query += "FR;FA;FB;OM0;SL0;SH0;";
    if (m_cfg.ssbFilter == "auto")
        query += "EX00611;EX00612;";
    return query;
}

void RigSync::onSerialData()
{
    m_rxBuf += m_serial.readAll();
    int end;
    while (m_serial.isOpen() && (end = m_rxBuf.indexOf(';')) >= 0)
    {
        QByteArray msg = m_rxBuf.left(end);
        m_rxBuf.remove(0, end + 1);
        while (!msg.isEmpty() && (msg[0] == '\r' || msg[0] == '\n' || msg[0] == ' ' || msg[0] == '\0'))
            msg.remove(0, 1);
        if (msg.isEmpty())
            continue;
        qCDebug(rigsync) << "TS-890 ->" << msg + ';';

        for (auto it = m_catClients.begin(); it != m_catClients.end(); ++it)
            it.key()->write(msg + ';');

        handleTsMessage(msg);
        if (m_state == State::Starting && initialStateComplete())
            finishStartup();
    }
}

/* One message from the radio: update our copy and, while running, forward it to gqrx. */
void RigSync::handleTsMessage(const QByteArray &msgBytes)
{
    static const QRegularExpression reVfo("^F([AB])(\\d{11})$");
    static const QRegularExpression reFr("^FR(\\d)$");
    static const QRegularExpression reOm("^OM([01])([0-9A-F])$");
    static const QRegularExpression reFilter("^S([LH])([01])(\\d+)$");
    static const QRegularExpression reMenu("^EX006(\\d\\d) ?(\\d+)$");
    static const QRegularExpression rePs("^PS(\\d)$");
    static const QRegularExpression reAi("^AI(\\d)$");

    m_lastRx = now();
    const bool running = (m_state == State::Running);
    const QString msg = QString::fromLatin1(msgBytes);
    QRegularExpressionMatch m;

    if ((m = reVfo.match(msg)).hasMatch())
    {
        const QByteArray key = "F" + m.captured(1).toLatin1();
        const qint64 hz = m.captured(2).toLongLong();
        qint64 &field = (key == "FA") ? m_fa : m_fb;
        if (isEcho(key, hz) || field == hz)
            return;
        field = hz;
        const bool isRx = m_fr == (key == "FA" ? 0 : 1);
        qCInfo(rigsync).noquote() << "TS-890: VFO" << m.captured(1) << "frequency" << fmtHz(hz)
                                  << (isRx ? "" : "(not the RX VFO)");
        if (running && isRx)
            pushFreqToGq();
    }
    else if ((m = reFr.match(msg)).hasMatch())
    {
        const int fr = m.captured(1).toInt();
        if (fr == m_fr)
            return;
        m_fr = fr;
        qCInfo(rigsync).noquote() << "TS-890: receiver function"
                                  << (fr == 0 ? "VFO A" : fr == 1 ? "VFO B" : fr == 3 ? "memory" : QString::number(fr));
        if (running)
            pushFreqToGq();
    }
    else if ((m = reOm.match(msg)).hasMatch())
    {
        const int code = m.captured(2).at(0).toLatin1();
        if (m.captured(1) != "0" || isEcho("OM", code) || code == m_om)
            return;
        m_om = code;
        qCInfo(rigsync) << "TS-890: mode" << tsModeName(code);
        if (running)
            pushModeToGq();
    }
    else if ((m = reFilter.match(msg)).hasMatch())
    {
        const QByteArray key = "S" + m.captured(1).toLatin1();
        const int value = m.captured(3).toInt();
        int &field = (key == "SL") ? m_sl : m_sh;
        if (m.captured(2) != "0" || isEcho(key, value) || field == value)
            return;
        field = value;
        qCInfo(rigsync) << "TS-890: filter" << key.constData() << "ID" << value;
        if (running && !m_bwPushDue)        // after a mode change the width follows on its own
            pushBwToGq();
    }
    else if ((m = reMenu.match(msg)).hasMatch())
    {
        const QString item = m.captured(1);
        if (item != "11" && item != "12")
            return;
        const bool ssb = (item == "11");
        (ssb ? m_ssbMenuKnown : m_dataMenuKnown) = true;
        const int value = m.captured(2).toInt();
        int &menu = ssb ? m_ssbMenu : m_dataMenu;
        if (m_cfg.ssbFilter != "auto" || menu == value)
            return;
        qCInfo(rigsync).noquote() << "TS-890:" << (ssb ? "SSB" : "DATA") << "filter control is"
                                  << (value ? "shift/width" : "high/low cut");
        menu = value;
        if (running && !m_bwPushDue)
            pushBwToGq();
    }
    else if ((m = rePs.match(msg)).hasMatch())
    {
        handlePower(m.captured(1).toInt());
    }
    else if ((m = reAi.match(msg)).hasMatch())
    {
        m_ai = m.captured(1).toInt();
    }
    else if (msg == "QI")
    {
        if (running && m_cfg.quickMemoryBookmark)
        {
            pushFreqToGq();                 // gqrx bookmarks what it is tuned to
            m_gqrx.rigQuickMemory();
            qCInfo(rigsync).noquote() << "TS-890: quick memory stored - bookmarked at" << fmtHz(m_gFreq);
        }
    }
    else if (msg == "?" || msg == "E" || msg == "O")
    {
        if (running)
            qCWarning(rigsync).noquote() << "TS-890 reported an error (" + msg + ";) - a command was rejected";
        else
            qCDebug(rigsync).noquote() << "TS-890:" << msg + ";" << "(not running yet)";
    }
    else
    {
        qCDebug(rigsync) << "TS-890: ignoring" << msg;
    }
}

/* PSn; from the radio: off, on, or the answer while we are turning it on. */
void RigSync::handlePower(int ps)
{
    const bool off = (ps == 0 || ps == 2);
    if (m_state == State::PoweringOn)
    {
        if (ps == 1)                        // booted: read its state as usual
        {
            qCInfo(rigsync) << "TS-890 turned on after" << (now() - m_powerOnStart) / 1000.0 << "s";
            setState(State::Starting);
            send(statusQuery(false));
            m_startDue = now() + START_TIMEOUT_MS;
        }
        else if (off && !m_powerOnSendDue && m_powerOnAttempts < POWER_ON_ATTEMPTS &&
                 now() - m_powerOnSentAt >= POWER_ON_RETRY_MS)
            sendPowerOn();                  // still off: our PS1; got lost
    }
    else if (off && m_state == State::Starting && m_cfg.linkPower && m_powerOnAllowed)
        beginPowerOn();
    else if (off)
        stopRadio(QString("TS-890 turned off (PS%1;)").arg(ps), true);
}

bool RigSync::initialStateComplete() const
{
    return m_fr >= 0 && m_fa >= 0 && m_fb >= 0 && m_om && m_sl >= 0 && m_sh >= 0 &&
           m_ssbMenuKnown && m_dataMenuKnown;
}

void RigSync::finishStartup()
{
    qCInfo(rigsync).noquote() << "TS-890 initial state:" << fmtHz(rxFreq()) << "mode"
                              << tsModeName(m_om) << "bandwidth" << tsWidth() << "Hz";
    /* After a reconnect without a power cycle the radio still has the AI2 we set:
     * keep what we found the first time. A power-cycled radio reports AI0 again. */
    if (m_originalAi < 0 || m_ai <= 0)
        m_originalAi = m_ai;
    if (m_ai <= 0)
        send("AI2;");                       // Auto Information, not backed up
    m_nextPoll = now() + POLL_MS;
    m_lastRx = now();
    m_lastWaitReason.clear();
    m_powerOnAllowed = false;               // never turn it back on after it ran
    setState(State::Running);
    pushFreqToGq();
    pushBwToGq();                           // mode and width
}

/* The radio answered PS0; at launch: turn it on (linkPower), once. */
void RigSync::beginPowerOn()
{
    m_powerOnAllowed = false;
    m_powerOnAttempts = 0;
    m_powerOnStart = now();
    m_powerOnSendDue = now() + POWER_ON_WAKE_MS;
    m_nextPowerProbe = now() + POWER_ON_RETRY_MS;
    qCInfo(rigsync) << "TS-890 is off - turning it on";
    setState(State::PoweringOn);
    send(";");                              // wake up the radio's CPU first
}

void RigSync::sendPowerOn()
{
    m_powerOnAttempts++;
    m_powerOnSentAt = now();
    send("PS1;");
}

/* ================================================================= echo handling */

qint64 RigSync::tsField(const QByteArray &key) const
{
    if (key == "FA") return m_fa;
    if (key == "FB") return m_fb;
    if (key == "OM") return m_om;
    if (key == "SL") return m_sl;
    return m_sh;
}

/* Call before updating our copy of key: remembers the value it replaces too. */
void RigSync::expectEcho(const QByteArray &key, qint64 value)
{
    m_pending[key].push_back({ value, tsField(key), now() + ECHO_TTL_MS });
}

/* True if value is the (possibly delayed) echo of something we wrote, or a stale
 * report of the value one of those writes replaced: the radio answers in order,
 * so a query sent just before our write is answered with the old value.
 * Forwarding that would make gqrx jump back. */
bool RigSync::isEcho(const QByteArray &key, qint64 value)
{
    auto &queue = m_pending[key];
    const qint64 t = now();
    while (!queue.empty() && queue.front().expiry < t)
        queue.pop_front();
    for (size_t i = 0; i < queue.size(); i++)
    {
        if (queue[i].value == value)
        {
            queue.erase(queue.begin(), queue.begin() + i + 1);
            qCDebug(rigsync) << "ignoring echo of our own write:" << key << value;
            return true;
        }
    }
    for (const auto &p : queue)
    {
        if (p.previous == value)
        {
            qCDebug(rigsync) << "ignoring stale report from before our write:" << key << value;
            return true;
        }
    }
    return false;
}

/* ============================================================== TS state helpers */

qint64 RigSync::rxFreq() const
{
    return m_fr == 0 ? m_fa : m_fr == 1 ? m_fb : -1;
}

int RigSync::tsGqrxMode() const
{
    return tsToGqrxMode(m_om);
}

/* How SL/SH are to be read in this mode */
QString RigSync::filterKind(int om) const
{
    switch (om)
    {
    case '1': case '2': return m_ssbMenu == 0 ? "cut" : "ssbwidth";
    case 'C': case 'D': return m_dataMenu == 0 ? "cut" : "ssbwidth";
    case '3': case '7': return "cw";
    case '6': case '9': return "fsk";
    case 'A': case 'B': return "psk";
    case '5': case 'F': return "am";
    case '4': case 'E': return "fm";
    default:            return QString();
    }
}

/* Passband width [Hz] of the radio's current filter, -1 if unknown */
int RigSync::tsWidth() const
{
    const QString kind = filterKind(m_om);
    if (kind == "cut")
    {
        const int lo = lookup(ssbLow(), m_sl), hi = lookup(ssbHigh(), m_sh);
        return (lo < 0 || hi < 0) ? -1 : hi - lo;
    }
    if (auto table = highcutTable(kind))
    {
        const int hi = lookup(*table, m_sh);
        return hi < 0 ? -1 : 2 * hi;
    }
    if (auto table = widthTable(kind))
        return lookup(*table, m_sl);
    return -1;
}

/* The (sl, sh) IDs that best give width. The ID not involved is kept. */
void RigSync::idsForWidth(int om, int width, int &sl, int &sh) const
{
    const QString kind = filterKind(om);
    if (kind == "cut")
    {
        const int lo = lookup(ssbLow(), sl);
        if (lo >= 0)
            sh = nearestId(ssbHigh(), lo + width);
    }
    else if (auto table = highcutTable(kind))
        sh = nearestId(*table, width / 2.0);
    else if (auto table = widthTable(kind))
        sl = nearestId(*table, width);
}

/* ================================================================ TS-890 -> gqrx */

/* Change gqrx. gqrx reports the result back at once; m_applying keeps it from
 * being sent to the radio again. hz / mode < 0: leave as is. */
void RigSync::applyToGqrx(qint64 hz, int mode, int passband)
{
    m_applying = true;
    if (hz >= 0)
    {
        m_gFreq = hz;
        m_gqrx.rigTune(hz);
    }
    if (mode >= 0)
    {
        m_gMode = mode;
        if (passband > 0)
            m_gBw = passband;
        m_gqrx.rigSetMode(mode, passband);
    }
    m_applying = false;
}

void RigSync::pushFreqToGq()
{
    m_gqFreqChanged = false;                // the TS-890 wins
    const qint64 hz = rxFreq();
    if (hz < 0)
    {
        warnMemoryMode();
        return;
    }
    m_memoryWarned = false;
    if (hz != m_gFreq)
    {
        applyToGqrx(hz, -1, 0);
        qCInfo(rigsync).noquote() << "sync TS-890 -> gqrx: frequency" << fmtHz(hz);
    }
}

/* Mode only; gqrx then shows its default passband, the radio's width follows after SETTLE. */
void RigSync::pushModeToGq()
{
    m_gqModeChanged = m_gqBwChanged = false;
    const int mode = tsGqrxMode();
    if (mode >= 0 && mode != m_gMode)
    {
        applyToGqrx(-1, mode, 0);
        qCInfo(rigsync) << "sync TS-890 -> gqrx: mode" << gqrxModeName(mode)
                        << "( TS-890" << tsModeName(m_om) << ")";
    }
    m_tsRefreshDue = now() + 50;            // the radio reports the mode's filter
    m_bwPushDue = now() + SETTLE_MS;
}

/* Mode and width, unless gqrx's width already maps to the radio's filter. */
void RigSync::pushBwToGq()
{
    m_gqBwChanged = false;
    const int mode = tsGqrxMode(), width = tsWidth();
    if (mode < 0)
        return;
    if (width < 0)
    {
        if (mode != m_gMode)
            applyToGqrx(-1, mode, 0);
        return;
    }
    int sl = m_sl, sh = m_sh;
    if (mode == m_gMode && m_gBw > 0)
    {
        idsForWidth(m_om, m_gBw, sl, sh);
        if (sl == m_sl && sh == m_sh)
        {
            qCDebug(rigsync) << "gqrx bandwidth" << m_gBw << "Hz is equivalent to the radio's" << width << "Hz";
            return;
        }
    }
    applyToGqrx(-1, mode, width);
    qCInfo(rigsync) << "sync TS-890 -> gqrx: mode" << gqrxModeName(mode) << "bandwidth" << width << "Hz";
}

/* ================================================================ gqrx -> TS-890 */

void RigSync::gqrxFrequencyChanged(qint64 hz)
{
    if (hz == m_gFreq)
        return;
    m_gFreq = hz;
    if (m_applying || m_state != State::Running)
        return;
    qCInfo(rigsync).noquote() << "gqrx: frequency" << fmtHz(hz);
    m_gqFreqChanged = true;
    m_gqDue = now() + GQ_SETTLE_MS;
}

void RigSync::gqrxModeChanged(int mode)
{
    if (mode == m_gMode)
        return;
    m_gMode = mode;
    if (m_applying || m_state != State::Running)
        return;
    qCInfo(rigsync) << "gqrx: mode" << gqrxModeName(mode);
    m_gqModeChanged = true;
    m_gqDue = now() + GQ_SETTLE_MS;
}

void RigSync::gqrxPassbandChanged(int width)
{
    if (width == m_gBw)
        return;
    m_gBw = width;
    if (m_applying || m_state != State::Running)
        return;
    qCInfo(rigsync) << "gqrx: bandwidth" << width << "Hz";
    m_gqBwChanged = true;
    m_gqDue = now() + GQ_SETTLE_MS;
}

/* 30 ms after the last gqrx change */
void RigSync::flushGqrxChanges()
{
    if (m_gqFreqChanged)
        pushFreqToTs();
    if (m_gqModeChanged)
        pushModeToTs();             // the filter then comes back from the radio on its own
    else if (m_gqBwChanged)
        pushBwToTs();
    m_gqFreqChanged = m_gqModeChanged = m_gqBwChanged = false;
}

void RigSync::pushFreqToTs()
{
    if (m_fr != 0 && m_fr != 1)
    {
        warnMemoryMode();
        return;
    }
    if (m_gFreq < 0 || m_gFreq == rxFreq())
        return;
    const QByteArray key = (m_fr == 0) ? "FA" : "FB";
    expectEcho(key, m_gFreq);
    (m_fr == 0 ? m_fa : m_fb) = m_gFreq;
    send(key + QByteArray::number(m_gFreq).rightJustified(11, '0') + ';');
    qCInfo(rigsync).noquote() << "sync gqrx -> TS-890: frequency" << fmtHz(m_gFreq);
}

void RigSync::pushModeToTs()
{
    const int code = gqrxToTsMode(m_gMode);
    if (!code)
    {
        qCInfo(rigsync) << "gqrx mode" << gqrxModeName(m_gMode) << "has no TS-890 equivalent - not synchronised";
    }
    else if (tsGqrxMode() != m_gMode)       // e.g. radio in USB-D, gqrx in USB: nothing to do
    {
        expectEcho("OM", code);
        m_om = code;
        send(QByteArray("OM0") + char(code) + ';');
        qCInfo(rigsync) << "sync gqrx -> TS-890: mode" << tsModeName(code);
        m_tsRefreshDue = now() + 50;            // the radio picks the mode's filter
        m_bwPushDue = now() + SETTLE_MS;
    }
}

void RigSync::pushBwToTs()
{
    if (!m_om || m_sl < 0 || m_sh < 0 || m_gBw <= 0)
        return;
    int sl = m_sl, sh = m_sh;
    idsForWidth(m_om, m_gBw, sl, sh);
    QByteArray commands;
    if (sl != m_sl)
    {
        expectEcho("SL", sl);
        commands += "SL0" + QByteArray::number(sl).rightJustified(2, '0') + ';';
    }
    if (sh != m_sh)
    {
        expectEcho("SH", sh);
        commands += "SH0" + QByteArray::number(sh).rightJustified(3, '0') + ';';
    }
    if (commands.isEmpty())
    {
        qCDebug(rigsync) << "gqrx bandwidth" << m_gBw << "Hz maps to the radio's current filter";
        return;
    }
    m_sl = sl;
    m_sh = sh;
    send(commands);
    qCInfo(rigsync).noquote() << "sync gqrx -> TS-890: bandwidth" << m_gBw << "Hz (" + commands + ")";
}

void RigSync::warnMemoryMode()
{
    if (!m_memoryWarned)
    {
        qCWarning(rigsync) << "TS-890 is in memory-channel mode: frequency sync paused";
        m_memoryWarned = true;
    }
}

/* ===================================================================== CAT server */
/*
 * Lets other programs (RUMlog, ...) share the radio. Their commands go to the
 * radio one whole command at a time, and they receive everything the radio
 * sends: Auto Information output and the replies to our polls are all real
 * radio state. AI set commands are dropped: the sync needs Auto Information.
 */

void RigSync::startCatServer()
{
    if (m_cfg.catPort <= 0)
        return;
    QHostAddress address(m_cfg.catHost);
    if (address.isNull())
        address = QHostAddress::LocalHost;
    if (m_catServer.listen(address, m_cfg.catPort))
        qCInfo(rigsync).noquote() << "CAT server listening on" << address.toString() + ":"
                                  + QString::number(m_catServer.serverPort());
    else
        qCWarning(rigsync).noquote() << "cannot open the CAT port" << m_cfg.catHost + ":"
                                     + QString::number(m_cfg.catPort) << "-"
                                     << m_catServer.errorString();
}

void RigSync::stopCatServer()
{
    m_catServer.close();
    const auto clients = m_catClients.keys();
    m_catClients.clear();
    for (auto socket : clients)
    {
        socket->disconnect(this);
        socket->abort();
        socket->deleteLater();
    }
}

void RigSync::onCatConnection()
{
    while (QTcpSocket *socket = m_catServer.nextPendingConnection())
    {
        socket->setSocketOption(QAbstractSocket::LowDelayOption, 1);
        m_catClients.insert(socket, QByteArray());
        connect(socket, &QTcpSocket::readyRead, this, [this, socket] { onCatData(socket); });
        connect(socket, &QTcpSocket::disconnected, this, [this, socket] {
            if (m_catClients.remove(socket))
                qCInfo(rigsync) << "CAT client disconnected";
            socket->deleteLater();
        });
        connect(socket, &QTcpSocket::bytesWritten, this, [socket] {
            if (socket->bytesToWrite() > CAT_MAX_BACKLOG)
            {
                qCWarning(rigsync) << "CAT client not reading - disconnected";
                socket->abort();
            }
        });
        qCInfo(rigsync).noquote() << "CAT client connected from" << socket->peerAddress().toString()
                                  + ":" + QString::number(socket->peerPort());
    }
}

void RigSync::onCatData(QTcpSocket *socket)
{
    static const QRegularExpression reAiSet("^AI\\d$");
    if (!m_catClients.contains(socket))
        return;
    QByteArray &buf = m_catClients[socket];
    buf += socket->readAll();
    int end;
    while ((end = buf.indexOf(';')) >= 0)
    {
        QByteArray cmd = buf.left(end).trimmed();
        buf.remove(0, end + 1);
        cmd.replace('\0', "");
        if (cmd.isEmpty())
            continue;
        if (reAiSet.match(QString::fromLatin1(cmd)).hasMatch())
        {
            qCDebug(rigsync) << "CAT client: dropped" << cmd << "(the sync needs Auto Information on)";
            continue;
        }
        qCDebug(rigsync) << "CAT client -> TS-890:" << cmd + ';';
        send(cmd + ';');
    }
    if (buf.size() > 4096)                  // garbage without ';'
        buf.clear();
}
