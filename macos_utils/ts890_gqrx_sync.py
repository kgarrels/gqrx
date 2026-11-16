#!/usr/bin/env python3
"""
ts890_gqrx_sync - bidirectional frequency / mode / bandwidth sync between a
Kenwood TS-890S (serial "PC control" commands) and gqrx (remote control, TCP).

How it works
------------
* The initial state is read from the TS-890 and pushed to gqrx.
* The TS-890 is switched to Auto Information (AI2;) and reports changes by
  itself. gqrx cannot push, so it is polled (default ~33 Hz).
* Bursts of changes (tuning knob, dragging in gqrx) are coalesced: only the
  newest value is forwarded. Echoes of our own writes are recognised and never
  forwarded back, so there is no ping-pong.
* If both sides change at the same instant, the TS-890 wins.
* The program exits (code 0) when the TS-890 is turned off: PS0;, a serial
  error, or no answer for a few seconds.

What is synchronised
--------------------
frequency  RX VFO (FA/FB, chosen by FR). Paused in memory-channel mode.
mode       OM0 <-> gqrx mode, see the *_MODE tables (USB-D <-> USB, ...).
bandwidth  Passband *width* in Hz. The TS-890 describes filters by IDs (SL/SH):
             SSB / SSB-DATA  low-cut + high-cut, or shift/width (menu 0-06-11/12)
             CW / FSK / PSK  width (SL)
             AM / FM         high-cut (SH); width = 2 * high-cut
           When gqrx changes the width, only the high-cut (or width) is changed
           on the radio; the low-cut is left alone.

Log levels (--log-level)
------------------------
INFO   every change on either side and what is forwarded
DEBUG  everything, including all serial / TCP traffic
NONE   errors only

Usage
-----
  pip install pyserial
  python3 ts890_gqrx_sync.py --ts-port /dev/ttyUSB0 --baud 115200 --log-level INFO
"""

import argparse
import collections
import logging
import queue
import re
import select
import socket
import sys
import threading
import time

log = logging.getLogger("ts890-gqrx")


# ==========================================================================
# TS-890 / gqrx lookup tables (from the PC control command reference)
# ==========================================================================
TS_MODE_NAME = {
    "1": "LSB", "2": "USB", "3": "CW", "4": "FM", "5": "AM", "6": "FSK",
    "7": "CW-R", "9": "FSK-R", "A": "PSK", "B": "PSK-R", "C": "LSB-D",
    "D": "USB-D", "E": "FM-D", "F": "AM-D",
}
TS_TO_GQRX_MODE = {
    "1": "LSB", "2": "USB", "3": "CWU", "4": "FM", "5": "AM", "6": "LSB",
    "7": "CWL", "9": "USB", "A": "USB", "B": "LSB", "C": "LSB", "D": "USB",
    "E": "FM", "F": "AM",
}
GQRX_TO_TS_MODE = {   # modes the radio cannot do (WFM, ...) are simply absent
    "LSB": "1", "USB": "2", "CWU": "3", "CW": "3", "CWL": "7", "FM": "4",
    "AM": "5", "AMS": "5",
}

# SL / SH ID -> Hz.  The list index is the ID.
SSB_LOW   = [0, 50] + [(n - 1) * 100 for n in range(2, 22)]          # SL 00..21
SSB_HIGH  = [600 + 100 * i for i in range(25)] + [3400, 4000, 5000]  # SH 000..027
AM_HIGH   = [2000 + 100 * i for i in range(11)] + [3500, 4000, 5000]  # SH 000..013
FM_HIGH   = [1000 + 100 * i for i in range(21)] + [3400, 4000, 5000]  # SH 000..023
SSB_WIDTH = [50, 80, 100, 150, 200, 250, 300, 350, 400, 450, 500] + \
            [600 + 100 * i for i in range(25)]                        # SL 00..35
CW_WIDTH  = [50, 80, 100, 150, 200, 250, 300, 350, 400, 450, 500, 600, 700,
             800, 900, 1000, 1500, 2000, 2500]                        # SL 00..18
FSK_WIDTH = [250, 300, 350, 400, 450, 500, 1000, 1500]                # SL 00..07
PSK_WIDTH = [50, 80, 100, 150, 200, 250, 300, 350, 400, 450, 500, 600, 700,
             800, 900, 1000, 1200, 1400, 1500, 1600, 1800, 2000, 2200, 2400,
             2600, 2800, 3000]                                        # SL 00..26

WIDTH_TABLES = {"ssbwidth": SSB_WIDTH, "cw": CW_WIDTH, "fsk": FSK_WIDTH, "psk": PSK_WIDTH}
HIGHCUT_TABLES = {"am": AM_HIGH, "fm": FM_HIGH}


def nearest_id(table, value):
    """Index of the table entry closest to `value`."""
    return min(range(len(table)), key=lambda i: abs(table[i] - value))


def lookup(table, idx):
    """table[idx], or None if idx is unknown / out of range."""
    return table[idx] if idx is not None and 0 <= idx < len(table) else None


class TsFilter:
    """Translates between TS-890 SL/SH filter IDs and a passband width in Hz."""

    def __init__(self):
        self.ssb_menu = 0     # menu 0-06-11: 0 = high/low cut, 1 = shift/width
        self.data_menu = 0    # menu 0-06-12: same, for SSB-DATA

    def kind(self, mode):
        """How SL/SH are to be read in this mode: cut / ssbwidth / cw / fsk / psk / am / fm."""
        if mode in "12":
            return "cut" if self.ssb_menu == 0 else "ssbwidth"
        if mode in "CD":
            return "cut" if self.data_menu == 0 else "ssbwidth"
        return {"3": "cw", "7": "cw", "6": "fsk", "9": "fsk", "A": "psk", "B": "psk",
                "5": "am", "F": "am", "4": "fm", "E": "fm"}.get(mode)

    def width(self, mode, sl, sh):
        """Passband width [Hz] for the given IDs, or None if unknown."""
        kind = self.kind(mode)
        if kind == "cut":
            lo, hi = lookup(SSB_LOW, sl), lookup(SSB_HIGH, sh)
            return None if lo is None or hi is None else hi - lo
        if kind in HIGHCUT_TABLES:
            hi = lookup(HIGHCUT_TABLES[kind], sh)
            return None if hi is None else 2 * hi
        if kind in WIDTH_TABLES:
            return lookup(WIDTH_TABLES[kind], sl)
        return None

    def ids_for_width(self, mode, width, sl, sh):
        """The (sl, sh) IDs that best give `width`. The ID not involved is kept."""
        kind = self.kind(mode)
        if kind == "cut":
            lo = lookup(SSB_LOW, sl)
            return (sl, sh) if lo is None else (sl, nearest_id(SSB_HIGH, lo + width))
        if kind in HIGHCUT_TABLES:
            return sl, nearest_id(HIGHCUT_TABLES[kind], width / 2)
        if kind in WIDTH_TABLES:
            return nearest_id(WIDTH_TABLES[kind], width), sh
        return sl, sh


# ==========================================================================
# Small helpers
# ==========================================================================
class PowerOff(Exception):
    """The TS-890 was turned off (or vanished)."""


class GqrxError(Exception):
    pass


def fmt_hz(hz):
    return "-" if hz is None else "%.6f MHz" % (hz / 1e6)


# ==========================================================================
# TS-890 serial link
# ==========================================================================
class Ts890Link:
    """Serial link. A reader thread splits the byte stream at ';' and queues messages."""

    def __init__(self, port, events):
        self.port = port                 # pyserial-like object: read(n), write(bytes)
        self.events = events
        self._write_lock = threading.Lock()
        self._stop = threading.Event()
        self._thread = threading.Thread(target=self._reader, name="ts-reader", daemon=True)

    def start(self):
        self._thread.start()

    def stop(self):
        self._stop.set()

    def send(self, cmd):
        log.debug("TS-890 <- %s", cmd)
        try:
            with self._write_lock:
                self.port.write(cmd.encode("ascii"))
        except Exception as exc:                                # noqa: BLE001
            self.events.put(("ts_error", exc))

    def _reader(self):
        buf = b""
        try:
            while not self._stop.is_set():
                buf += self.port.read(256)
                while b";" in buf:
                    msg, buf = buf.split(b";", 1)
                    text = msg.decode("latin-1").strip("\r\n \x00")
                    log.debug("TS-890 -> %s;", text)
                    self.events.put(("ts", text))
        except Exception as exc:                                # noqa: BLE001
            if not self._stop.is_set():
                self.events.put(("ts_error", exc))


# ==========================================================================
# gqrx remote-control link
# ==========================================================================
class GqrxLink:
    """
    TCP client for gqrx. All traffic is one command per exchange (gqrx
    mishandles several commands in one packet). A background thread polls
    frequency/mode/passband and queues ("gq", ...) events when something changes.
    """

    def __init__(self, host, port, events, poll_interval=0.03):
        self.host, self.port = host, port
        self.events = events
        self.poll_interval = poll_interval
        self.lock = threading.Lock()     # serialises request/reply pairs
        self.gen = 0                     # bumped on every write; lets us drop stale polls
        self.sock = None
        self.buf = b""
        self.modes = set()
        self._stop = threading.Event()
        self._thread = threading.Thread(target=self._poller, name="gqrx-poll", daemon=True)

    @property
    def connected(self):
        return self.sock is not None

    # ---- connection ------------------------------------------------------
    def connect(self):
        self.close()
        self.sock = socket.create_connection((self.host, self.port), timeout=2.0)
        self.sock.setsockopt(socket.IPPROTO_TCP, socket.TCP_NODELAY, 1)
        self.buf = b""
        log.debug("gqrx: connected to %s:%d", self.host, self.port)

    def close(self):
        if self.sock:
            try:
                self.sock.close()
            except OSError:
                pass
        self.sock = None

    def start(self):
        self._thread.start()

    def stop(self):
        self._stop.set()

    # ---- low level -----------------------------------------------------------
    def _drain(self):
        """Throw away unread data (late/stray replies) so requests and replies stay paired."""
        stale, self.buf = self.buf, b""
        while select.select([self.sock], [], [], 0)[0]:
            chunk = self.sock.recv(4096)
            if not chunk:
                raise GqrxError("connection closed")
            stale += chunk
        if stale.strip():
            log.debug("gqrx: discarded stale data %r", stale)

    def _readline(self):
        while b"\n" not in self.buf:
            if not select.select([self.sock], [], [], 2.0)[0]:
                raise GqrxError("timeout waiting for gqrx")
            chunk = self.sock.recv(4096)
            if not chunk:
                raise GqrxError("connection closed")
            self.buf += chunk
        line, self.buf = self.buf.split(b"\n", 1)
        return line.decode("ascii", "replace").strip()

    def _command(self, text, reply_lines=1):
        """Send one command and return its reply lines. Caller holds self.lock.
        reply_lines=None means a set command: read up to its 'RPRT n' line."""
        if not self.connected:
            raise GqrxError("not connected")
        try:
            self._drain()
            log.debug("gqrx <- %s", text)
            self.sock.sendall(text.encode() + b"\n")
            if reply_lines is None:
                lines = []
                while not lines or not lines[-1].startswith("RPRT"):
                    lines.append(self._readline())
                    if len(lines) > 8:
                        raise GqrxError("no RPRT reply")
                if len(lines) > 1:
                    log.debug("gqrx: skipped stray lines %r", lines[:-1])
                lines = lines[-1:]
            else:
                lines = [self._readline() for _ in range(reply_lines)]
            log.debug("gqrx -> %s", " | ".join(lines))
            return lines
        except (OSError, GqrxError) as exc:
            self.close()
            raise GqrxError(str(exc)) from exc

    def _set(self, text):
        with self.lock:
            self.gen += 1
            (reply,) = self._command(text, reply_lines=None)
        if reply != "RPRT 0":
            raise GqrxError("command %r failed: %s" % (text, reply))

    # ---- API ---------------------------------------------------------------------
    def read_state(self):
        """(gen, freq, mode, passband), or None if gqrx sent something unparsable."""
        with self.lock:
            (freq,) = self._command("f")
            mode, passband = self._command("m", 2)
            gen = self.gen
        try:
            return gen, int(float(freq)), mode, int(float(passband))
        except ValueError:
            log.debug("gqrx: unparsable state reply %r", (freq, mode, passband))
            return None

    def read_supported_modes(self):
        with self.lock:
            (line,) = self._command("M ?")
        self.modes = set(line.split())

    def set_freq(self, hz):
        self._set("F %d" % hz)

    def set_mode(self, mode, passband=None):
        if mode == "CWU" and self.modes and "CWU" not in self.modes and "CW" in self.modes:
            mode = "CW"                  # older gqrx versions
        self._set("M %s %d" % (mode, passband) if passband else "M %s" % mode)

    # ---- polling thread --------------------------------------------------------------
    def _poller(self):
        last, down_reported = None, False
        while not self._stop.is_set():
            started = time.monotonic()
            try:
                if not self.connected:
                    self.connect()
                    last = None
                    self.events.put(("gq_up",))
                state = self.read_state()
                if state is None:
                    self._stop.wait(0.1)
                    continue
                gen, freq, mode, passband = state
                if (freq, mode, passband) != last:
                    last = (freq, mode, passband)
                    self.events.put(("gq", gen, freq, mode, passband))
                down_reported = False
            except (OSError, GqrxError) as exc:
                if not down_reported:
                    log.error("gqrx unavailable (%s) - retrying", exc)
                    down_reported = True
                    self.events.put(("gq_down",))
                self._stop.wait(1.0)
                continue
            self._stop.wait(max(0.0, self.poll_interval - (time.monotonic() - started)))


# ==========================================================================
# The synchroniser
# ==========================================================================
class Synchroniser:
    TS_POLL_INTERVAL = 1.0    # slow poll of the radio: safety net and power watchdog
    TS_SILENCE_LIMIT = 3.5    # seconds without any data from the radio -> "off"
    ECHO_TTL = 1.5            # seconds an echo of our own write may take to arrive
    SETTLE = 0.12             # seconds to let the radio report its new filter after a mode change

    def __init__(self, ts, gq, events, ssb_filter="auto"):
        self.ts, self.gq, self.events = ts, gq, events
        self.ssb_filter = ssb_filter                  # auto | cut | width
        self.flt = TsFilter()

        # What we believe the TS-890 is doing (None = not yet known)
        self.fa = self.fb = self.fr = self.om = self.sl = self.sh = self.ai = None
        self.menu_known = {"ssb": False, "data": False}

        # What we believe gqrx is doing
        self.g_up = False
        self.g_freq = self.g_mode = self.g_bw = None
        self.g_bw_hold = False       # gqrx reset its passband after a mode change; ignore it

        # Writes we made to the radio whose echo has not arrived yet: key -> [(value, expiry)]
        self.pending = {k: collections.deque() for k in ("FA", "FB", "OM", "SL", "SH")}

        # Timers (monotonic deadlines)
        self.bw_push_due = None      # push the radio's width to gqrx
        self.ts_refresh_due = None   # ask the radio for SL/SH again
        self.next_ts_poll = 0.0
        self.last_ts_rx = time.monotonic()
        self.memory_warned = False

    # ---------------------------------------------------------------- TS state
    @property
    def rx_freq(self):
        return {0: self.fa, 1: self.fb}.get(self.fr)

    @property
    def ts_width(self):
        return self.flt.width(self.om, self.sl, self.sh) if self.om else None

    @property
    def ts_gqrx_mode(self):
        return TS_TO_GQRX_MODE.get(self.om)

    def ts_snapshot(self):
        return (self.rx_freq, self.om, self.sl, self.sh, self.flt.ssb_menu, self.flt.data_menu)

    # ------------------------------------------------------------ echo handling
    def expect_echo(self, key, value):
        self.pending[key].append((value, time.monotonic() + self.ECHO_TTL))

    def is_echo(self, key, value):
        """True if `value` is the (possibly delayed) echo of something we wrote.
        Older, never-echoed writes up to that point are forgotten as well."""
        queue_, now = self.pending[key], time.monotonic()
        while queue_ and queue_[0][1] < now:
            queue_.popleft()
        for i, (expected, _) in enumerate(queue_):
            if expected == value:
                for _ in range(i + 1):
                    queue_.popleft()
                log.debug("ignoring echo of our own write: %s=%s", key, value)
                return True
        return False

    # ---------------------------------------------------- incoming TS-890 messages
    def on_ts(self, msg):
        self.last_ts_rx = time.monotonic()
        for pattern, handler in self.TS_MESSAGES:
            match = pattern.fullmatch(msg)
            if match:
                handler(self, *match.groups())
                return
        if msg in ("?", "E", "O"):
            log.warning("TS-890 reported an error (%s;) - a command was rejected", msg)
        else:
            log.debug("TS-890: ignoring %r", msg)

    def _on_vfo_freq(self, vfo, digits):
        key, hz = "F" + vfo, int(digits)
        if self.is_echo(key, hz):
            return
        attr = key.lower()
        if getattr(self, attr) != hz:
            setattr(self, attr, hz)
            is_rx = self.fr == (0 if vfo == "A" else 1)
            log.info("TS-890: VFO %s frequency %s%s", vfo, fmt_hz(hz), "" if is_rx else " (not the RX VFO)")

    def _on_rx_vfo(self, digit):
        fr = int(digit)
        if fr != self.fr:
            self.fr = fr
            log.info("TS-890: receiver function %s", {0: "VFO A", 1: "VFO B", 3: "memory"}.get(fr, fr))

    def _on_mode(self, display, code):
        if display != "0" or self.is_echo("OM", code) or code == self.om:
            return
        self.om = code
        log.info("TS-890: mode %s", TS_MODE_NAME.get(code, code))
        self.schedule_filter_refresh()

    def _on_filter_id(self, which, kind, digits):
        key, value = "S" + which, int(digits)
        if kind != "0" or self.is_echo(key, value):
            return
        if getattr(self, key.lower()) != value:
            setattr(self, key.lower(), value)
            log.info("TS-890: filter %s ID %d", key, value)

    def _on_menu(self, item, value):
        name = {"11": "ssb", "12": "data"}.get(item)
        if name is None:
            return
        self.menu_known[name] = True
        if self.ssb_filter != "auto":
            return
        value = int(value)
        if getattr(self.flt, name + "_menu") != value:
            log.info("TS-890: %s filter control is %s", name.upper(), "shift/width" if value else "high/low cut")
            setattr(self.flt, name + "_menu", value)

    def _on_power(self, state):
        if state in "02":
            raise PowerOff("PS%s;" % state)

    def _on_ai(self, state):
        self.ai = int(state)

    TS_MESSAGES = [
        (re.compile(r"F([AB])(\d{11})"), _on_vfo_freq),
        (re.compile(r"FR(\d)"), _on_rx_vfo),
        (re.compile(r"OM([01])([0-9A-F])"), _on_mode),
        (re.compile(r"S([LH])([01])(\d+)"), _on_filter_id),
        (re.compile(r"EX006(\d\d) ?(\d+)"), _on_menu),
        (re.compile(r"PS(\d)"), _on_power),
        (re.compile(r"AI(\d)"), _on_ai),
    ]

    # --------------------------------------------------------- incoming gqrx state
    def on_gq(self, freq, mode, bw):
        """Record a gqrx poll result; return which items changed since last time."""
        changed = set()
        if freq != self.g_freq:
            log.info("gqrx: frequency %s", fmt_hz(freq))
            changed.add("freq")
        if mode != self.g_mode:
            log.info("gqrx: mode %s", mode)
            changed.add("mode")
        if bw != self.g_bw:
            if self.g_bw_hold:
                log.debug("gqrx: bandwidth %d Hz (reset by our mode change - not forwarded)", bw)
            else:
                log.info("gqrx: bandwidth %d Hz", bw)
                changed.add("bw")
        self.g_freq, self.g_mode, self.g_bw = freq, mode, bw
        return changed

    # ------------------------------------------------------------- the sync step
    def process(self, events):
        """Apply a batch of events, then forward what changed to the other side."""
        before = self.ts_snapshot()
        gq_changed, first_gq_sample = set(), self.g_freq is None
        for event in events:
            kind = event[0]
            if kind == "ts":
                self.on_ts(event[1])
            elif kind == "gq":
                _, gen, freq, mode, bw = event
                if gen < self.gq.gen:
                    log.debug("gqrx: dropped a poll result older than our last write")
                else:
                    gq_changed |= self.on_gq(freq, mode, bw)
            elif kind == "gq_up":
                log.info("gqrx: connected - pushing TS-890 state")
                self.g_up = True
                self.g_freq = self.g_mode = self.g_bw = None
                self.push_all_to_gq()
            elif kind == "gq_down":
                self.g_up = False
            elif kind == "ts_error":
                raise PowerOff("serial error: %s" % (event[1],))
        after = self.ts_snapshot()

        if first_gq_sample:
            gq_changed.clear()                    # the first sample is not a change
        ts_freq = after[0] is not None and before[0] != after[0]
        ts_mode = before[1] != after[1]
        ts_bw = before[2:] != after[2:] and not ts_mode
        if not self.g_up:
            return

        # TS-890 wins if both sides changed at once.
        if ts_freq:
            self.push_freq_to_gq()
        elif "freq" in gq_changed:
            self.push_freq_to_ts()

        if ts_mode:
            self.push_mode_to_gq()
        elif "mode" in gq_changed:
            self.push_mode_to_ts()      # filter then comes back from the radio on its own
        elif ts_bw:
            self.push_bw_to_gq()
        elif "bw" in gq_changed:
            self.push_bw_to_ts()

    # ------------------------------------------------------------ TS-890 -> gqrx
    def gq_call(self, what, func, *args):
        try:
            func(*args)
            return True
        except GqrxError as exc:
            log.error("gqrx: %s failed: %s", what, exc)
            return False

    def push_freq_to_gq(self):
        hz = self.rx_freq
        if hz is None:
            self.warn_memory_mode()
            return
        self.memory_warned = False
        if hz != self.g_freq and self.gq_call("set frequency", self.gq.set_freq, hz):
            self.g_freq = hz
            log.info("sync TS-890 -> gqrx: frequency %s", fmt_hz(hz))

    def push_mode_to_gq(self):
        mode = self.ts_gqrx_mode
        if mode and mode != self.g_mode and self.gq_call("set mode", self.gq.set_mode, mode):
            self.g_mode = mode
            self.g_bw, self.g_bw_hold = None, True       # gqrx now shows its default passband
            log.info("sync TS-890 -> gqrx: mode %s (TS-890 %s)", mode, TS_MODE_NAME[self.om])
        self.schedule_filter_refresh()                    # width follows after SETTLE

    def push_bw_to_gq(self):
        mode, width = self.ts_gqrx_mode, self.ts_width
        if mode is None or width is None:
            return
        already_equal = (mode == self.g_mode and self.g_bw is not None and
                         self.flt.ids_for_width(self.om, self.g_bw, self.sl, self.sh) == (self.sl, self.sh))
        if already_equal:
            log.debug("gqrx bandwidth %s Hz is equivalent to the radio's %s Hz", self.g_bw, width)
        elif self.gq_call("set bandwidth", self.gq.set_mode, mode, width):
            self.g_mode, self.g_bw = mode, width
            log.info("sync TS-890 -> gqrx: bandwidth %d Hz", width)

    def push_all_to_gq(self):
        self.push_freq_to_gq()
        mode, width = self.ts_gqrx_mode, self.ts_width
        if mode and self.gq_call("set mode", self.gq.set_mode, mode, width):
            self.g_mode, self.g_bw = mode, width
            log.info("sync TS-890 -> gqrx: mode %s, bandwidth %s Hz", mode, width)

    # ------------------------------------------------------------ gqrx -> TS-890
    def push_freq_to_ts(self):
        if self.fr not in (0, 1):
            self.warn_memory_mode()
            return
        if self.g_freq == self.rx_freq:
            return
        key = "FA" if self.fr == 0 else "FB"
        self.expect_echo(key, self.g_freq)
        setattr(self, key.lower(), self.g_freq)
        self.ts.send("%s%011d;" % (key, self.g_freq))
        log.info("sync gqrx -> TS-890: frequency %s", fmt_hz(self.g_freq))

    def push_mode_to_ts(self):
        code = GQRX_TO_TS_MODE.get(self.g_mode)
        if code is None:
            log.info("gqrx mode %s has no TS-890 equivalent - not synchronised", self.g_mode)
        elif self.ts_gqrx_mode != self.g_mode:            # e.g. radio in USB-D, gqrx in USB: nothing to do
            self.expect_echo("OM", code)
            self.om = code
            self.ts.send("OM0%s;" % code)
            log.info("sync gqrx -> TS-890: mode %s", TS_MODE_NAME[code])
            self.schedule_filter_refresh()

    def push_bw_to_ts(self):
        if None in (self.om, self.sl, self.sh) or not self.g_bw:
            return
        sl, sh = self.flt.ids_for_width(self.om, self.g_bw, self.sl, self.sh)
        commands = []
        if sl != self.sl:
            self.expect_echo("SL", sl)
            commands.append("SL0%02d;" % sl)
        if sh != self.sh:
            self.expect_echo("SH", sh)
            commands.append("SH0%03d;" % sh)
        if not commands:
            log.debug("gqrx bandwidth %d Hz maps to the radio's current filter", self.g_bw)
            return
        self.sl, self.sh = sl, sh
        for command in commands:
            self.ts.send(command)
        log.info("sync gqrx -> TS-890: bandwidth %d Hz (%s)", self.g_bw, " ".join(commands))

    # ------------------------------------------------------------------- timers
    def schedule_filter_refresh(self):
        """After a mode change: re-read SL/SH soon, and push the width to gqrx once settled."""
        now = time.monotonic()
        self.ts_refresh_due = now + 0.05
        self.bw_push_due = now + self.SETTLE

    def warn_memory_mode(self):
        if not self.memory_warned:
            log.warning("TS-890 is in memory-channel mode: frequency sync paused")
            self.memory_warned = True

    def next_timeout(self):
        deadlines = [t for t in (self.next_ts_poll, self.bw_push_due, self.ts_refresh_due) if t]
        return max(0.0, min(deadlines) - time.monotonic())

    def run_timers(self):
        now = time.monotonic()
        if self.ts_refresh_due and now >= self.ts_refresh_due:
            self.ts_refresh_due = None
            self.ts.send("SL0;SH0;")
        if self.bw_push_due and now >= self.bw_push_due:
            self.bw_push_due, self.g_bw_hold = None, False
            mode, width = self.ts_gqrx_mode, self.ts_width
            if self.g_up and mode and width and (mode, width) != (self.g_mode, self.g_bw):
                if self.gq_call("set bandwidth", self.gq.set_mode, mode, width):
                    self.g_mode, self.g_bw = mode, width
                    log.info("sync TS-890 -> gqrx: bandwidth %d Hz", width)
        if now >= self.next_ts_poll:
            self.next_ts_poll = now + self.TS_POLL_INTERVAL
            if now - self.last_ts_rx > self.TS_SILENCE_LIMIT:
                raise PowerOff("no answer from the TS-890 for %.1f s" % self.TS_SILENCE_LIMIT)
            self.ts.send(self.status_query(power=True))

    # ------------------------------------------------------------------ start-up
    def status_query(self, power=False):
        """Everything we track, as one string of read commands."""
        query = ("PS;" if power else "AI;PS;") + "FR;FA;FB;OM0;SL0;SH0;"
        return query + ("EX00611;EX00612;" if self.ssb_filter == "auto" else "")

    def read_initial_ts_state(self, timeout=4.0):
        """Query the radio and wait until everything we need has been reported."""
        if self.ssb_filter != "auto":
            self.flt.ssb_menu = self.flt.data_menu = 0 if self.ssb_filter == "cut" else 1
            self.menu_known = dict.fromkeys(self.menu_known, True)
        self.ts.send(";")
        self.ts.send(self.status_query())
        deadline = time.monotonic() + timeout
        while time.monotonic() < deadline and not self.initial_state_complete():
            try:
                event = self.events.get(timeout=0.1)
            except queue.Empty:
                continue
            if event[0] == "ts":
                self.on_ts(event[1])
            elif event[0] == "ts_error":
                raise OSError("serial error: %s" % (event[1],))
        if None in (self.fr, self.fa, self.fb, self.om, self.sl, self.sh):
            raise OSError("TS-890 did not answer (is it on? are port and baud rate right?)")
        self.last_ts_rx = time.monotonic()
        log.info("TS-890 initial state: %s, mode %s, bandwidth %s Hz",
                 fmt_hz(self.rx_freq), TS_MODE_NAME.get(self.om), self.ts_width)

    def initial_state_complete(self):
        return None not in (self.fr, self.fa, self.fb, self.om, self.sl, self.sh) \
            and all(self.menu_known.values())

    def run(self):
        """Main loop. Call after read_initial_ts_state() and the first push to gqrx."""
        original_ai = self.ai
        if original_ai in (None, 0):
            self.ts.send("AI2;")              # Auto Information, not backed up
        self.next_ts_poll = time.monotonic() + self.TS_POLL_INTERVAL
        try:
            while True:
                batch = []
                try:
                    batch.append(self.events.get(timeout=self.next_timeout()))
                    while True:                # coalesce: take everything that is waiting
                        batch.append(self.events.get_nowait())
                except queue.Empty:
                    pass
                if batch:
                    self.process(batch)
                self.run_timers()
        except PowerOff as exc:
            log.info("TS-890 turned off (%s) - exiting", exc)
            return 0
        finally:
            if original_ai == 0:
                self.ts.send("AI0;")          # leave the radio as we found it


# ==========================================================================
# main
# ==========================================================================
def setup_logging(level):
    levels = {"DEBUG": logging.DEBUG, "INFO": logging.INFO, "NONE": logging.ERROR}
    logging.basicConfig(level=levels[level], stream=sys.stderr, datefmt="%H:%M:%S",
                        format="%(asctime)s.%(msecs)03d %(levelname)-7s %(message)s")


def open_serial(port, baud, rtscts):
    try:
        import serial                          # pyserial
    except ImportError:
        raise SystemExit("pyserial is required:  pip install pyserial")
    return serial.serial_for_url(port, baudrate=baud, bytesize=8, parity="N",
                                 stopbits=1, timeout=0.05, rtscts=rtscts)


def main(argv=None, serial_port=None):
    ap = argparse.ArgumentParser(description="Sync TS-890S <-> gqrx (frequency, mode, bandwidth)")
    ap.add_argument("--ts-port", default="/dev/ttyUSB0", help="serial port of the TS-890 (or pyserial URL)")
    ap.add_argument("--baud", type=int, default=115200)
    ap.add_argument("--rtscts", action="store_true", help="hardware flow control")
    ap.add_argument("--gqrx-host", default="127.0.0.1")
    ap.add_argument("--gqrx-port", type=int, default=7356)
    ap.add_argument("--poll-interval", type=float, default=0.03, help="gqrx polling interval [s]")
    ap.add_argument("--ssb-filter", choices=("auto", "cut", "width"), default="auto",
                    help="TS-890 SSB filter control (menu 0-06-11/12); default: detect")
    ap.add_argument("--log-level", choices=("INFO", "DEBUG", "NONE"), default="INFO")
    args = ap.parse_args(argv)
    setup_logging(args.log_level)

    events = queue.Queue()
    ts = gq = None
    try:
        ts = Ts890Link(serial_port or open_serial(args.ts_port, args.baud, args.rtscts), events)
        ts.start()

        gq = GqrxLink(args.gqrx_host, args.gqrx_port, events, args.poll_interval)
        try:
            gq.connect()
            gq.read_supported_modes()
        except (OSError, GqrxError) as exc:
            log.error("cannot reach gqrx at %s:%d (%s) - is remote control enabled?",
                      args.gqrx_host, args.gqrx_port, exc)
            return 1

        sync = Synchroniser(ts, gq, events, args.ssb_filter)
        sync.read_initial_ts_state()
        sync.g_up = True
        sync.push_all_to_gq()
        gq.start()
        return sync.run()
    except OSError as exc:
        log.error("%s", exc)
        return 1
    except KeyboardInterrupt:
        log.info("interrupted")
        return 0
    finally:
        for link in (ts, gq):
            if link:
                link.stop()
        if gq:
            gq.close()


if __name__ == "__main__":
    sys.exit(main())
