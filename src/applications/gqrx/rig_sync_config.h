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
#ifndef RIG_SYNC_CONFIG_H
#define RIG_SYNC_CONFIG_H

#include <QString>
#include <QtGlobal>

/*! \brief Settings of the TS-890 sync (see RigSync).
 *
 * Kept free of QtSerialPort so that the settings dialog and the remote
 * control compile also when gqrx is built without the sync.
 */
struct RigSyncConfig
{
    bool    enabled = false;
    QString port;                     /*!< Serial device, e.g. /dev/cu.usbserial-83410 */
    int     baud = 115200;
    bool    rtscts = false;           /*!< Hardware flow control */
    QString ssbFilter = "auto";       /*!< auto | cut | width (TS-890 menu 0-06-11/12) */
    bool    linkPower = false;        /*!< gqrx turns the TS-890 on at launch and quits when it is
                                           turned off; else gqrx waits for the radio */
    bool    quickMemoryBookmark = true; /*!< Bookmark "Q" / tag "temp" on Q-M.IN */
    int     catPort = 8888;           /*!< TCP CAT port for loggers (RUMlog), 0 = off */
    QString catHost = "127.0.0.1";    /*!< Address the CAT port listens on */

    bool operator==(const RigSyncConfig &o) const
    {
        return enabled == o.enabled && port == o.port && baud == o.baud &&
               rtscts == o.rtscts && ssbFilter == o.ssbFilter &&
               linkPower == o.linkPower &&
               quickMemoryBookmark == o.quickMemoryBookmark &&
               catPort == o.catPort && catHost == o.catHost;
    }
    bool operator!=(const RigSyncConfig &o) const { return !(*this == o); }
};

/*! \brief What RigSync needs from gqrx (implemented by RemoteControl).
 *
 * RigSync calls these directly; gqrx reports the resulting changes back via
 * RigSync::gqrx*Changed() at once, and RigSync does not forward those.
 */
class RigSyncGqrx
{
public:
    virtual ~RigSyncGqrx() = default;
    virtual void rigTune(qint64 hz) = 0;
    virtual void rigSetMode(int mode, int passband) = 0;   // passband 0: gqrx's default
    virtual void rigQuickMemory() = 0;                     // bookmark "Q" / tag "temp" now
    virtual void rigPoweredOff() = 0;                      // the radio was turned off
};

#endif // RIG_SYNC_CONFIG_H
