/********************************************************************************
** Form generated from reading UI file 'dockaudio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKAUDIO_H
#define UI_DOCKAUDIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_DockAudio
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CPlotter *audioSpectrum;
    QHBoxLayout *horizontalLayout;
    QLabel *audioGainLabel;
    QSlider *audioGainSlider;
    QLabel *audioGainDbLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *audioMuteButton;
    QPushButton *audioStreamButton;
    QPushButton *audioRecButton;
    QPushButton *audioPlayButton;
    QPushButton *audioConfButton;
    QLabel *audioRecLabel;

    void setupUi(QDockWidget *DockAudio)
    {
        if (DockAudio->objectName().isEmpty())
            DockAudio->setObjectName(QString::fromUtf8("DockAudio"));
        DockAudio->resize(270, 200);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockAudio->sizePolicy().hasHeightForWidth());
        DockAudio->setSizePolicy(sizePolicy);
        DockAudio->setMinimumSize(QSize(270, 195));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockAudio->setWindowIcon(icon);
        DockAudio->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        audioSpectrum = new CPlotter(dockWidgetContents);
        audioSpectrum->setObjectName(QString::fromUtf8("audioSpectrum"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(audioSpectrum->sizePolicy().hasHeightForWidth());
        audioSpectrum->setSizePolicy(sizePolicy2);
        audioSpectrum->setMinimumSize(QSize(50, 50));
        audioSpectrum->setMaximumSize(QSize(16777215, 16777215));
        audioSpectrum->setFrameShape(QFrame::StyledPanel);
        audioSpectrum->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(audioSpectrum);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        audioGainLabel = new QLabel(dockWidgetContents);
        audioGainLabel->setObjectName(QString::fromUtf8("audioGainLabel"));
        sizePolicy.setHeightForWidth(audioGainLabel->sizePolicy().hasHeightForWidth());
        audioGainLabel->setSizePolicy(sizePolicy);
        audioGainLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(audioGainLabel);

        audioGainSlider = new QSlider(dockWidgetContents);
        audioGainSlider->setObjectName(QString::fromUtf8("audioGainSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(audioGainSlider->sizePolicy().hasHeightForWidth());
        audioGainSlider->setSizePolicy(sizePolicy3);
        audioGainSlider->setMinimumSize(QSize(0, 22));
        audioGainSlider->setMinimum(-800);
        audioGainSlider->setMaximum(500);
        audioGainSlider->setValue(-60);
        audioGainSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(audioGainSlider);

        audioGainDbLabel = new QLabel(dockWidgetContents);
        audioGainDbLabel->setObjectName(QString::fromUtf8("audioGainDbLabel"));
        sizePolicy.setHeightForWidth(audioGainDbLabel->sizePolicy().hasHeightForWidth());
        audioGainDbLabel->setSizePolicy(sizePolicy);
        audioGainDbLabel->setAlignment(Qt::AlignCenter);
        audioGainDbLabel->setMargin(0);
        audioGainDbLabel->setIndent(1);

        horizontalLayout->addWidget(audioGainDbLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        audioMuteButton = new QPushButton(dockWidgetContents);
        audioMuteButton->setObjectName(QString::fromUtf8("audioMuteButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(audioMuteButton->sizePolicy().hasHeightForWidth());
        audioMuteButton->setSizePolicy(sizePolicy4);
        audioMuteButton->setMinimumSize(QSize(50, 32));
        audioMuteButton->setMaximumSize(QSize(16777215, 16777215));
        audioMuteButton->setCheckable(true);

        horizontalLayout_2->addWidget(audioMuteButton);

        audioStreamButton = new QPushButton(dockWidgetContents);
        audioStreamButton->setObjectName(QString::fromUtf8("audioStreamButton"));
        sizePolicy4.setHeightForWidth(audioStreamButton->sizePolicy().hasHeightForWidth());
        audioStreamButton->setSizePolicy(sizePolicy4);
        audioStreamButton->setMinimumSize(QSize(50, 32));
        audioStreamButton->setMaximumSize(QSize(16777215, 16777215));
        audioStreamButton->setCheckable(true);

        horizontalLayout_2->addWidget(audioStreamButton);

        audioRecButton = new QPushButton(dockWidgetContents);
        audioRecButton->setObjectName(QString::fromUtf8("audioRecButton"));
        sizePolicy4.setHeightForWidth(audioRecButton->sizePolicy().hasHeightForWidth());
        audioRecButton->setSizePolicy(sizePolicy4);
        audioRecButton->setMinimumSize(QSize(50, 32));
        audioRecButton->setMaximumSize(QSize(16777215, 16777215));
        audioRecButton->setIconSize(QSize(16, 16));
        audioRecButton->setCheckable(true);

        horizontalLayout_2->addWidget(audioRecButton);

        audioPlayButton = new QPushButton(dockWidgetContents);
        audioPlayButton->setObjectName(QString::fromUtf8("audioPlayButton"));
        audioPlayButton->setEnabled(false);
        sizePolicy4.setHeightForWidth(audioPlayButton->sizePolicy().hasHeightForWidth());
        audioPlayButton->setSizePolicy(sizePolicy4);
        audioPlayButton->setMinimumSize(QSize(50, 32));
        audioPlayButton->setMaximumSize(QSize(16777215, 16777215));
        audioPlayButton->setIconSize(QSize(16, 16));
        audioPlayButton->setCheckable(true);

        horizontalLayout_2->addWidget(audioPlayButton);

        audioConfButton = new QPushButton(dockWidgetContents);
        audioConfButton->setObjectName(QString::fromUtf8("audioConfButton"));
        audioConfButton->setEnabled(true);
        sizePolicy4.setHeightForWidth(audioConfButton->sizePolicy().hasHeightForWidth());
        audioConfButton->setSizePolicy(sizePolicy4);
        audioConfButton->setMinimumSize(QSize(50, 32));
        audioConfButton->setMaximumSize(QSize(16777215, 16777215));
        audioConfButton->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(audioConfButton);


        verticalLayout->addLayout(horizontalLayout_2);

        audioRecLabel = new QLabel(dockWidgetContents);
        audioRecLabel->setObjectName(QString::fromUtf8("audioRecLabel"));
        sizePolicy3.setHeightForWidth(audioRecLabel->sizePolicy().hasHeightForWidth());
        audioRecLabel->setSizePolicy(sizePolicy3);
        audioRecLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(audioRecLabel);

        DockAudio->setWidget(dockWidgetContents);

        retranslateUi(DockAudio);

        QMetaObject::connectSlotsByName(DockAudio);
    } // setupUi

    void retranslateUi(QDockWidget *DockAudio)
    {
        DockAudio->setWindowTitle(QCoreApplication::translate("DockAudio", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        audioSpectrum->setToolTip(QCoreApplication::translate("DockAudio", "Audio spectrum", nullptr));
#endif // QT_CONFIG(tooltip)
        audioGainLabel->setText(QCoreApplication::translate("DockAudio", "Gain:", nullptr));
#if QT_CONFIG(tooltip)
        audioGainSlider->setToolTip(QCoreApplication::translate("DockAudio", "Audio gain", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioGainSlider->setStatusTip(QCoreApplication::translate("DockAudio", "Audio gain", nullptr));
#endif // QT_CONFIG(statustip)
        audioGainDbLabel->setText(QCoreApplication::translate("DockAudio", "-6.0 dB", nullptr));
#if QT_CONFIG(tooltip)
        audioMuteButton->setToolTip(QCoreApplication::translate("DockAudio", "Mute audio output", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioMuteButton->setStatusTip(QCoreApplication::translate("DockAudio", "Mute audio output", nullptr));
#endif // QT_CONFIG(statustip)
        audioMuteButton->setText(QCoreApplication::translate("DockAudio", "Mute", nullptr));
#if QT_CONFIG(tooltip)
        audioStreamButton->setToolTip(QCoreApplication::translate("DockAudio", "Stream raw audio over UDP", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioStreamButton->setStatusTip(QCoreApplication::translate("DockAudio", "Stream raw audio over UDP", nullptr));
#endif // QT_CONFIG(statustip)
        audioStreamButton->setText(QCoreApplication::translate("DockAudio", "UDP", nullptr));
#if QT_CONFIG(tooltip)
        audioRecButton->setToolTip(QCoreApplication::translate("DockAudio", "Record audio", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioRecButton->setStatusTip(QCoreApplication::translate("DockAudio", "Record audio", nullptr));
#endif // QT_CONFIG(statustip)
        audioRecButton->setText(QCoreApplication::translate("DockAudio", "Rec", nullptr));
#if QT_CONFIG(tooltip)
        audioPlayButton->setToolTip(QCoreApplication::translate("DockAudio", "Playback previously recorded audio", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioPlayButton->setStatusTip(QCoreApplication::translate("DockAudio", "Playback previously recorded audio", nullptr));
#endif // QT_CONFIG(statustip)
        audioPlayButton->setText(QCoreApplication::translate("DockAudio", "Play", nullptr));
#if QT_CONFIG(tooltip)
        audioConfButton->setToolTip(QCoreApplication::translate("DockAudio", "Audio settings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        audioConfButton->setStatusTip(QCoreApplication::translate("DockAudio", "Audio settings", nullptr));
#endif // QT_CONFIG(statustip)
        audioConfButton->setText(QCoreApplication::translate("DockAudio", "...", nullptr));
#if QT_CONFIG(tooltip)
        audioRecLabel->setToolTip(QCoreApplication::translate("DockAudio", "Current audio source (DSP or WAV file)", nullptr));
#endif // QT_CONFIG(tooltip)
        audioRecLabel->setText(QCoreApplication::translate("DockAudio", "<i>DSP</i>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockAudio: public Ui_DockAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKAUDIO_H
