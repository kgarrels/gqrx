#!/bin/bash
# sdr-session.sh — launch Gqrx, Audio Hijack and a Python script together;
# when Gqrx quits, stop the Python script and quit Audio Hijack.

# ---- Edit these ----------------------------------------------------------
PYTHON_BIN="/usr/bin/python3"              # or /opt/homebrew/bin/python3, or a venv's bin/python
PYTHON_SCRIPT="ts890_gqrx_sync.py"
PYTHON_ARGS="--ts-port /dev/tty.usbserial-83410 --baud 115200 --gqrx-host 127.0.0.1 --poll 0.1 --log-level INFO --poll 0.1"

GQRX_APP="Gqrx"                            # name of the app in /Applications
AUDIO_HIJACK_APP="Audio Hijack"
LOG="$HOME/Library/Logs/sdr-session.log"
# -------------------------------------------------------------------------

exec >>"$LOG" 2>&1
echo "=== $(date) starting session ==="

is_gqrx_running() { pgrep -xi gqrx >/dev/null; }

cleanup() {
  echo "$(date) cleaning up"
  if [[ -n "$PY_PID" ]] && kill -0 "$PY_PID" 2>/dev/null; then
    pkill -TERM -P "$PY_PID" 2>/dev/null   # children of the script, if any
    kill -TERM "$PY_PID" 2>/dev/null
    for _ in {1..10}; do kill -0 "$PY_PID" 2>/dev/null || break; sleep 0.5; done
    kill -KILL "$PY_PID" 2>/dev/null       # force it if it ignored SIGTERM
  fi
  osascript -e "tell application \"$AUDIO_HIJACK_APP\" to quit" 2>/dev/null
  echo "$(date) session ended"
}
trap cleanup EXIT

# Start everything
open -a "$GQRX_APP"
open -a "$AUDIO_HIJACK_APP"
sleep 3
"$PYTHON_BIN" -u "$PYTHON_SCRIPT" $PYTHON_ARGS &
PY_PID=$!
echo "python pid $PY_PID"

# Wait up to 30 s for Gqrx to show up
for _ in {1..30}; do is_gqrx_running && break; sleep 1; done
if ! is_gqrx_running; then
  echo "Gqrx never started — aborting"
  exit 1
fi

# Wait until Gqrx quits (exit early too if the Python script dies on its own)
while is_gqrx_running; do sleep 2; done
echo "$(date) Gqrx quit"
exit 0   # trap runs cleanup
