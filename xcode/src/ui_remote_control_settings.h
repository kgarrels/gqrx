/********************************************************************************
** Form generated from reading UI file 'remote_control_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTE_CONTROL_SETTINGS_H
#define UI_REMOTE_CONTROL_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteControlSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *portLabel;
    QSpinBox *portSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *hostLabel;
    QListWidget *hostListWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *hostAddButton;
    QPushButton *hostDelButton;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoteControlSettings)
    {
        if (RemoteControlSettings->objectName().isEmpty())
            RemoteControlSettings->setObjectName(QString::fromUtf8("RemoteControlSettings"));
        RemoteControlSettings->resize(314, 269);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RemoteControlSettings->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(RemoteControlSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        portLabel = new QLabel(RemoteControlSettings);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        gridLayout->addWidget(portLabel, 0, 0, 1, 1);

        portSpinBox = new QSpinBox(RemoteControlSettings);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMinimumSize(QSize(75, 0));
        portSpinBox->setMinimum(0);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(7356);

        gridLayout->addWidget(portSpinBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        hostLabel = new QLabel(RemoteControlSettings);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));

        gridLayout->addWidget(hostLabel, 1, 0, 1, 1);

        hostListWidget = new QListWidget(RemoteControlSettings);
        hostListWidget->setObjectName(QString::fromUtf8("hostListWidget"));
        hostListWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        hostListWidget->setResizeMode(QListView::Fixed);

        gridLayout->addWidget(hostListWidget, 1, 1, 3, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hostAddButton = new QPushButton(RemoteControlSettings);
        hostAddButton->setObjectName(QString::fromUtf8("hostAddButton"));
        hostAddButton->setMaximumSize(QSize(56, 16777215));

        horizontalLayout->addWidget(hostAddButton);

        hostDelButton = new QPushButton(RemoteControlSettings);
        hostDelButton->setObjectName(QString::fromUtf8("hostDelButton"));
        hostDelButton->setMaximumSize(QSize(56, 16777215));

        horizontalLayout->addWidget(hostDelButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(RemoteControlSettings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(RemoteControlSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RemoteControlSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoteControlSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoteControlSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoteControlSettings);
    } // setupUi

    void retranslateUi(QDialog *RemoteControlSettings)
    {
        RemoteControlSettings->setWindowTitle(QCoreApplication::translate("RemoteControlSettings", "Gqrx remote control settings", nullptr));
#if QT_CONFIG(tooltip)
        portLabel->setToolTip(QCoreApplication::translate("RemoteControlSettings", "<html><head/><body><p>Select which port to listen on</p><p>(0 selects a random port)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        portLabel->setText(QCoreApplication::translate("RemoteControlSettings", "Listen on port", nullptr));
#if QT_CONFIG(tooltip)
        portSpinBox->setToolTip(QCoreApplication::translate("RemoteControlSettings", "<html><head/><body><p>Select which port to listen on</p><p>(0 selects a random port)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        hostLabel->setToolTip(QCoreApplication::translate("RemoteControlSettings", "List of IP addresses where gqrx should accept connections from", nullptr));
#endif // QT_CONFIG(tooltip)
        hostLabel->setText(QCoreApplication::translate("RemoteControlSettings", "Allowed hosts", nullptr));
#if QT_CONFIG(tooltip)
        hostListWidget->setToolTip(QCoreApplication::translate("RemoteControlSettings", "List of IP addresses where gqrx should accept connections from", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        hostAddButton->setToolTip(QCoreApplication::translate("RemoteControlSettings", "Add a new host to the list", nullptr));
#endif // QT_CONFIG(tooltip)
        hostAddButton->setText(QCoreApplication::translate("RemoteControlSettings", "Add", nullptr));
#if QT_CONFIG(tooltip)
        hostDelButton->setToolTip(QCoreApplication::translate("RemoteControlSettings", "Delete the selected host from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        hostDelButton->setText(QCoreApplication::translate("RemoteControlSettings", "Del", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoteControlSettings: public Ui_RemoteControlSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTE_CONTROL_SETTINGS_H
