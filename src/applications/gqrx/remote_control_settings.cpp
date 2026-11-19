/* -*- c++ -*- */
/*
 * Gqrx SDR: Software defined radio receiver powered by GNU Radio and Qt
 *           https://gqrx.dk/
 *
 * Copyright 2013 Alexandru Csete OZ9AEC.
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
#include <QList>
#include <QListWidgetItem>

#include "remote_control_settings.h"
#include "ui_remote_control_settings.h"

#ifdef WITH_RIG_SYNC
#include <QSerialPortInfo>
#endif

static const QStringList SSB_FILTER_VALUES = { "auto", "cut", "width" };  // rigSsbFilterCombo order

RemoteControlSettings::RemoteControlSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoteControlSettings)
{
    ui->setupUi(this);
}

RemoteControlSettings::~RemoteControlSettings()
{
    delete ui;
}

/*! \brief Set new network port.
 *  \param port The new network port.
 */
void RemoteControlSettings::setPort(int port)
{
    ui->portSpinBox->setValue(port);
}

/*! \brief Get current value from the port spin box.
 *  \return The current port value.
 */
int RemoteControlSettings::getPort(void) const
{
    return ui->portSpinBox->value();
}

/*! \brief Add items to the list of allowed hosts.
 *  \param hosts A list with the IP addresses of the allowed hosts.
 *
 * Note that setting the list will clear the current contents of the
 * list widget.
 */
void RemoteControlSettings::setHosts(QStringList hosts)
{
    ui->hostListWidget->clear();
    ui->hostListWidget->addItems(hosts);
}

/*! \brief Get list of allowed hosts. */
QStringList RemoteControlSettings::getHosts(void) const
{
    QStringList list;

    for (int i = 0; i < ui->hostListWidget->count(); i++)
    {
        list << ui->hostListWidget->item(i)->text();
    }

    return list;
}


/*! \brief Add a new entry to the list of allowed hosts.
 *
 * The function inserts a  new entry at the end of the list and enables
 * editing.
 */
void RemoteControlSettings::on_hostAddButton_clicked(void)
{
    ui->hostListWidget->addItem(tr("Enter IP"));

    QListWidgetItem *item = ui->hostListWidget->item(ui->hostListWidget->count()-1);
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ui->hostListWidget->setCurrentItem(item, QItemSelectionModel::ClearAndSelect);
    ui->hostListWidget->editItem(item);
}

/*! \brief Delete the selected entries from the list of allowed hosts. */
void RemoteControlSettings::on_hostDelButton_clicked(void)
{
    // wondering WTF?
    // see http://stackoverflow.com/questions/7008423/how-do-i-remove-all-the-selected-items-in-a-qlistwidget
    qDeleteAll(ui->hostListWidget->selectedItems());
}



/*! \brief Show the TS-890 sync settings.
 *  \param available False if gqrx was built without the sync: the group is hidden.
 *  \param status    Current state of the sync, shown below the settings.
 */
void RemoteControlSettings::setRigSyncConfig(const RigSyncConfig &config, bool available,
                                             const QString &status)
{
    ui->rigSyncGroup->setVisible(available);
    ui->rigSyncGroup->setChecked(config.enabled);

    ui->rigPortCombo->clear();
#ifdef WITH_RIG_SYNC
    for (const auto &info : QSerialPortInfo::availablePorts())
        ui->rigPortCombo->addItem(info.systemLocation());
#endif
    ui->rigPortCombo->setCurrentText(config.port);

    ui->rigBaudCombo->setCurrentText(QString::number(config.baud));
    ui->rigRtsctsCheck->setChecked(config.rtscts);
    ui->rigSsbFilterCombo->setCurrentIndex(std::max(0, (int)SSB_FILTER_VALUES.indexOf(config.ssbFilter)));
    ui->rigPowerCombo->setCurrentIndex(config.linkPower ? 1 : 0);
    ui->rigQmBookmarkCheck->setChecked(config.quickMemoryBookmark);
    ui->rigCatPortSpinBox->setValue(config.catPort);
    ui->rigCatHostEdit->setText(config.catHost);
    ui->rigStatusLabel->setText(tr("Status: %1").arg(status));
}

RigSyncConfig RemoteControlSettings::getRigSyncConfig(void) const
{
    RigSyncConfig config;
    config.enabled = ui->rigSyncGroup->isChecked();
    config.port = ui->rigPortCombo->currentText().trimmed();
    bool ok;
    const int baud = ui->rigBaudCombo->currentText().toInt(&ok);
    if (ok && baud > 0)
        config.baud = baud;
    config.rtscts = ui->rigRtsctsCheck->isChecked();
    config.ssbFilter = SSB_FILTER_VALUES.value(ui->rigSsbFilterCombo->currentIndex(), "auto");
    config.linkPower = ui->rigPowerCombo->currentIndex() == 1;
    config.quickMemoryBookmark = ui->rigQmBookmarkCheck->isChecked();
    config.catPort = ui->rigCatPortSpinBox->value();
    const QString host = ui->rigCatHostEdit->text().trimmed();
    if (!host.isEmpty())
        config.catHost = host;
    return config;
}
