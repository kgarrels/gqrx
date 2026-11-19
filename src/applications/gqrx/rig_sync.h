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
#ifndef RIG_SYNC_H
#define RIG_SYNC_H

#include <deque>
#include <QByteArray>
#include <QElapsedTimer>
#include <QHash>
#include <QObject>
#include <QSerialPort>
#include <QTcpServer>
#include <QTimer>

#include "rig_sync_config.h"

class QTcpSocket;

/*! \brief Bidirectional frequency / mode / bandwidth sync with a Kenwood TS-890S.
 *
 * - The radio runs in Auto Information mode (AI2;) and reports its changes;
 *   each message is applied to gqrx as it arrives. A slow status poll (1 s)
 *   is the safety net and the power-off watchdog.
 * - gqrx reports its changes through the gqrx*Changed() calls. They are sent
 *   to the radio 30 ms after the last one, so bursts are coalesced. If both
 *   sides change at once, the TS-890 wins.
 * - Echoes of our own writes, and stale reports of the value a pending write
 *   replaced, are never forwarded back.
 * - With linkPower the radio is turned on when gqrx starts (PS1;), and
 *   rigPoweredOff() lets gqrx quit when it is turned off.
 * - Also: a TCP CAT port that lets loggers (RUMlog) share the radio, and a gqrx
 *   bookmark for every quick memory stored on the radio (QI;).
 *
 * Everything runs on one 20 ms timer; time-outs are deadlines checked there.
 * Mode numbers are gqrx's DockRxOpt::rxopt_mode_idx values.
 */
class RigSync : public QObject
{
    Q_OBJECT
public:
    enum class State { Off, Waiting, Starting, PoweringOn, Running };

    // Mode numbers (equal to DockRxOpt::rxopt_mode_idx)
    enum GqMode { GQ_OFF = 0, GQ_RAW, GQ_AM, GQ_AM_SYNC, GQ_LSB, GQ_USB, GQ_CWL,
                  GQ_CWU, GQ_NFM, GQ_WFM_MONO, GQ_WFM_STEREO, GQ_WFM_STEREO_OIRT };

    explicit RigSync(RigSyncGqrx &gqrx, QObject *parent = nullptr);
    ~RigSync() override;

    void          setConfig(const RigSyncConfig &config);   // (re)starts as needed
    RigSyncConfig config() const { return m_cfg; }
    State         state() const { return m_state; }
    QString       statusText() const;
    quint16       catServerPort() const;                    // 0 if not listening

    /* What gqrx is doing; call on every change (also while the sync is off). */
    void gqrxFrequencyChanged(qint64 hz);
    void gqrxModeChanged(int mode);
    void gqrxPassbandChanged(int width);

private:
    struct Pending { qint64 value; qint64 previous; qint64 expiry; };

    /* lifecycle */
    void   setState(State state, const QString &detail = QString());
    void   startRadio();
    void   stopRadio(const QString &reason, bool poweredOff);
    void   onTick();

    /* TS-890 link */
    void   send(const QByteArray &cmd);
    QByteArray statusQuery(bool pollOnly) const;
    void   onSerialData();
    void   handleTsMessage(const QByteArray &msg);
    void   handlePower(int ps);
    bool   initialStateComplete() const;
    void   finishStartup();
    void   beginPowerOn();
    void   sendPowerOn();

    /* echo handling */
    qint64 tsField(const QByteArray &key) const;
    void   expectEcho(const QByteArray &key, qint64 value);
    bool   isEcho(const QByteArray &key, qint64 value);

    /* TS state helpers */
    qint64 rxFreq() const;
    int    tsGqrxMode() const;
    QString filterKind(int om) const;
    int    tsWidth() const;
    void   idsForWidth(int om, int width, int &sl, int &sh) const;

    /* TS-890 -> gqrx */
    void   pushFreqToGq();
    void   pushModeToGq();
    void   pushBwToGq();
    void   applyToGqrx(qint64 hz, int mode, int passband);

    /* gqrx -> TS-890 */
    void   flushGqrxChanges();
    void   pushFreqToTs();
    void   pushModeToTs();
    void   pushBwToTs();

    void   warnMemoryMode();
    qint64 now() const { return m_clock.elapsed(); }

    /* CAT server */
    void   startCatServer();
    void   stopCatServer();
    void   onCatConnection();
    void   onCatData(QTcpSocket *socket);

    RigSyncGqrx  &m_gqrx;
    RigSyncConfig m_cfg;
    State         m_state = State::Off;
    QString       m_detail;
    QString       m_lastWaitReason;  // logged once, not on every retry

    QSerialPort   m_serial;
    QByteArray    m_rxBuf;
    QString       m_serialError;     // set by the error signal, handled on the next tick
    QTimer        m_tick;            // 20 ms, runs while the sync is enabled
    QElapsedTimer m_clock;

    QTcpServer    m_catServer;
    QHash<QTcpSocket *, QByteArray> m_catClients;

    /* what we believe the TS-890 is doing (-1 / 0 = unknown) */
    qint64 m_fa = -1, m_fb = -1;
    int    m_fr = -1, m_om = 0, m_sl = -1, m_sh = -1, m_ai = -1;
    int    m_ssbMenu = 0, m_dataMenu = 0;         // 0 = high/low cut, 1 = shift/width
    bool   m_ssbMenuKnown = false, m_dataMenuKnown = false;
    int    m_originalAi = -1;

    /* what we believe gqrx is doing */
    qint64 m_gFreq = -1;
    int    m_gMode = -1, m_gBw = -1;
    bool   m_applying = false;                    // we are changing gqrx right now
    bool   m_gqFreqChanged = false, m_gqModeChanged = false, m_gqBwChanged = false;

    QHash<QByteArray, std::deque<Pending>> m_pending;

    /* deadlines (ms on m_clock, 0 = none) */
    qint64 m_retryDue = 0;           // reopen the port (Waiting)
    qint64 m_startDue = 0;           // the radio must have answered (Starting)
    qint64 m_gqDue = 0;              // send coalesced gqrx changes
    qint64 m_tsRefreshDue = 0;       // re-read SL/SH after a mode change
    qint64 m_bwPushDue = 0;          // push the radio's width once it has settled
    qint64 m_nextPoll = 0;           // status poll / watchdog
    qint64 m_lastRx = 0;
    bool   m_memoryWarned = false;

    /* power-on at launch: only before the radio has been running once */
    bool   m_powerOnAllowed = true;
    int    m_powerOnAttempts = 0;
    qint64 m_powerOnStart = 0, m_powerOnSendDue = 0, m_powerOnSentAt = 0, m_nextPowerProbe = 0;
};

#endif // RIG_SYNC_H
