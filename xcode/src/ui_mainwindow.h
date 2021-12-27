/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/freqctrl.h"
#include "qtgui/meter.h"
#include "qtgui/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionDSP;
    QAction *actionAFSK1200;
    QAction *actionSched;
    QAction *actionIoConfig;
    QAction *actionUserGroup;
    QAction *actionFullScreen;
    QAction *actionLoadSettings;
    QAction *actionSaveSettings;
    QAction *actionAddBookmark;
    QAction *actionRemoteControl;
    QAction *actionRemoteConfig;
    QAction *actionIqTool;
    QAction *actionNews;
    QAction *actionRemoteProtocol;
    QAction *actionKbdShortcuts;
    QAction *actionSaveWaterfall;
    QAction *actionDX_Cluster;
    QAction *actionLock_Window;
    QAction *actionStatus_Bar;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    CFreqCtrl *freqCtrl;
    QSpacerItem *horizontalSpacer_2;
    CMeter *sMeter;
    QSpacerItem *horizontalSpacer_1;
    CPlotter *plotter;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_RecentConfig;
    QMenu *menu_View;
    QMenu *menu_Help;
    QMenu *menu_Tools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(521, 350);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/gqrx.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionDSP = new QAction(MainWindow);
        actionDSP->setObjectName(QString::fromUtf8("actionDSP"));
        actionDSP->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDSP->setIcon(icon1);
        actionAFSK1200 = new QAction(MainWindow);
        actionAFSK1200->setObjectName(QString::fromUtf8("actionAFSK1200"));
        actionSched = new QAction(MainWindow);
        actionSched->setObjectName(QString::fromUtf8("actionSched"));
        actionSched->setCheckable(true);
        actionSched->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/clock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSched->setIcon(icon2);
        actionIoConfig = new QAction(MainWindow);
        actionIoConfig->setObjectName(QString::fromUtf8("actionIoConfig"));
        actionIoConfig->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIoConfig->setIcon(icon3);
        actionIoConfig->setVisible(true);
        actionUserGroup = new QAction(MainWindow);
        actionUserGroup->setObjectName(QString::fromUtf8("actionUserGroup"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUserGroup->setIcon(icon4);
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/fullscreen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon5);
        actionLoadSettings = new QAction(MainWindow);
        actionLoadSettings->setObjectName(QString::fromUtf8("actionLoadSettings"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadSettings->setIcon(icon6);
        actionSaveSettings = new QAction(MainWindow);
        actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/floppy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSettings->setIcon(icon7);
        actionAddBookmark = new QAction(MainWindow);
        actionAddBookmark->setObjectName(QString::fromUtf8("actionAddBookmark"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/bookmark-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddBookmark->setIcon(icon8);
        actionRemoteControl = new QAction(MainWindow);
        actionRemoteControl->setObjectName(QString::fromUtf8("actionRemoteControl"));
        actionRemoteControl->setCheckable(true);
        actionRemoteControl->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/tangeo-network-idle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoteControl->setIcon(icon9);
        actionRemoteConfig = new QAction(MainWindow);
        actionRemoteConfig->setObjectName(QString::fromUtf8("actionRemoteConfig"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoteConfig->setIcon(icon10);
        actionIqTool = new QAction(MainWindow);
        actionIqTool->setObjectName(QString::fromUtf8("actionIqTool"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIqTool->setIcon(icon11);
        actionNews = new QAction(MainWindow);
        actionNews->setObjectName(QString::fromUtf8("actionNews"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNews->setIcon(icon12);
        actionRemoteProtocol = new QAction(MainWindow);
        actionRemoteProtocol->setObjectName(QString::fromUtf8("actionRemoteProtocol"));
        actionRemoteProtocol->setIcon(icon12);
        actionKbdShortcuts = new QAction(MainWindow);
        actionKbdShortcuts->setObjectName(QString::fromUtf8("actionKbdShortcuts"));
        actionKbdShortcuts->setIcon(icon12);
        actionSaveWaterfall = new QAction(MainWindow);
        actionSaveWaterfall->setObjectName(QString::fromUtf8("actionSaveWaterfall"));
        actionDX_Cluster = new QAction(MainWindow);
        actionDX_Cluster->setObjectName(QString::fromUtf8("actionDX_Cluster"));
        actionLock_Window = new QAction(MainWindow);
        actionLock_Window->setObjectName(QString::fromUtf8("actionLock_Window"));
        actionLock_Window->setCheckable(true);
        actionStatus_Bar = new QAction(MainWindow);
        actionStatus_Bar->setObjectName(QString::fromUtf8("actionStatus_Bar"));
        actionStatus_Bar->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 29, 29);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 10, 0, 10);
        horizontalSpacer_3 = new QSpacerItem(5, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        freqCtrl = new CFreqCtrl(frame);
        freqCtrl->setObjectName(QString::fromUtf8("freqCtrl"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(freqCtrl->sizePolicy().hasHeightForWidth());
        freqCtrl->setSizePolicy(sizePolicy1);
        freqCtrl->setMinimumSize(QSize(280, 40));
        freqCtrl->setFrameShape(QFrame::StyledPanel);
        freqCtrl->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(freqCtrl);

        horizontalSpacer_2 = new QSpacerItem(5, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sMeter = new CMeter(frame);
        sMeter->setObjectName(QString::fromUtf8("sMeter"));
        sizePolicy1.setHeightForWidth(sMeter->sizePolicy().hasHeightForWidth());
        sMeter->setSizePolicy(sizePolicy1);
        sMeter->setMinimumSize(QSize(150, 40));
        sMeter->setFrameShape(QFrame::StyledPanel);
        sMeter->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(sMeter);

        horizontalSpacer_1 = new QSpacerItem(5, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_1);


        verticalLayout_2->addWidget(frame);

        plotter = new CPlotter(centralWidget);
        plotter->setObjectName(QString::fromUtf8("plotter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plotter->sizePolicy().hasHeightForWidth());
        plotter->setSizePolicy(sizePolicy2);
        plotter->setAutoFillBackground(true);
        plotter->setFrameShape(QFrame::StyledPanel);
        plotter->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(plotter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 521, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_RecentConfig = new QMenu(menu_File);
        menu_RecentConfig->setObjectName(QString::fromUtf8("menu_RecentConfig"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionDSP);
        menu_File->addSeparator();
        menu_File->addAction(actionIoConfig);
        menu_File->addAction(actionLoadSettings);
        menu_File->addAction(actionSaveSettings);
        menu_File->addAction(menu_RecentConfig->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionSaveWaterfall);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_View->addAction(actionLock_Window);
        menu_View->addAction(actionStatus_Bar);
        menu_Help->addAction(actionUserGroup);
        menu_Help->addAction(actionNews);
        menu_Help->addSeparator();
        menu_Help->addAction(actionRemoteProtocol);
        menu_Help->addAction(actionKbdShortcuts);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionAboutQt);
        menu_Tools->addAction(actionRemoteControl);
        menu_Tools->addAction(actionRemoteConfig);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionAddBookmark);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionIqTool);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionAFSK1200);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionDX_Cluster);
        mainToolBar->addAction(actionDSP);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionIoConfig);
        mainToolBar->addAction(actionLoadSettings);
        mainToolBar->addAction(actionSaveSettings);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAddBookmark);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionIqTool);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRemoteControl);
        mainToolBar->addAction(actionRemoteConfig);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFullScreen);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "gqrx", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "Quit application", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About Gqrx", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "Information about Gqrx", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
#if QT_CONFIG(tooltip)
        actionAboutQt->setToolTip(QCoreApplication::translate("MainWindow", "About the Qt toolkit", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDSP->setText(QCoreApplication::translate("MainWindow", "Start DSP", nullptr));
#if QT_CONFIG(tooltip)
        actionDSP->setToolTip(QCoreApplication::translate("MainWindow", "Start DSP", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionDSP->setStatusTip(QCoreApplication::translate("MainWindow", "Start/stop DSP processing", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionDSP->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAFSK1200->setText(QCoreApplication::translate("MainWindow", "AFSK1200 Decoder", nullptr));
#if QT_CONFIG(tooltip)
        actionAFSK1200->setToolTip(QCoreApplication::translate("MainWindow", "Start AFSK1200 decoder", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSched->setText(QCoreApplication::translate("MainWindow", "Scheduler", nullptr));
#if QT_CONFIG(tooltip)
        actionSched->setToolTip(QCoreApplication::translate("MainWindow", "Schedule recordings and other actions", nullptr));
#endif // QT_CONFIG(tooltip)
        actionIoConfig->setText(QCoreApplication::translate("MainWindow", "I/O Devices", nullptr));
#if QT_CONFIG(tooltip)
        actionIoConfig->setToolTip(QCoreApplication::translate("MainWindow", "Configure I/O devices", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionIoConfig->setStatusTip(QCoreApplication::translate("MainWindow", "Opens the hardware configuration dialog", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionIoConfig->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUserGroup->setText(QCoreApplication::translate("MainWindow", "Gqrx user group", nullptr));
#if QT_CONFIG(tooltip)
        actionUserGroup->setToolTip(QCoreApplication::translate("MainWindow", "Discussion group for Gqrx users", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFullScreen->setText(QCoreApplication::translate("MainWindow", "Full screen", nullptr));
#if QT_CONFIG(tooltip)
        actionFullScreen->setToolTip(QCoreApplication::translate("MainWindow", "Toggle full screen mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoadSettings->setText(QCoreApplication::translate("MainWindow", "Load settings", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadSettings->setToolTip(QCoreApplication::translate("MainWindow", "Load previously stored configuration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionLoadSettings->setStatusTip(QCoreApplication::translate("MainWindow", "Load previously stored settings from a file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionLoadSettings->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveSettings->setText(QCoreApplication::translate("MainWindow", "Save settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveSettings->setToolTip(QCoreApplication::translate("MainWindow", "Save current configuration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSaveSettings->setStatusTip(QCoreApplication::translate("MainWindow", "Save current configuration to a file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSaveSettings->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddBookmark->setText(QCoreApplication::translate("MainWindow", "Add bookmark", nullptr));
#if QT_CONFIG(tooltip)
        actionAddBookmark->setToolTip(QCoreApplication::translate("MainWindow", "Bookmark the current frequency and mode (Ctrl+Shift+B)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAddBookmark->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemoteControl->setText(QCoreApplication::translate("MainWindow", "&Remote control", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoteControl->setToolTip(QCoreApplication::translate("MainWindow", "Remote control via TCP", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRemoteControl->setStatusTip(QCoreApplication::translate("MainWindow", "Activate the TCP interface", nullptr));
#endif // QT_CONFIG(statustip)
        actionRemoteConfig->setText(QCoreApplication::translate("MainWindow", "Remote &control settings", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoteConfig->setToolTip(QCoreApplication::translate("MainWindow", "Configure remote control settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionIqTool->setText(QCoreApplication::translate("MainWindow", "I/Q recorder", nullptr));
#if QT_CONFIG(tooltip)
        actionIqTool->setToolTip(QCoreApplication::translate("MainWindow", "Record and play I/Q data", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionIqTool->setStatusTip(QCoreApplication::translate("MainWindow", "Open I/Q recorder dialog", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionIqTool->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNews->setText(QCoreApplication::translate("MainWindow", "News", nullptr));
#if QT_CONFIG(tooltip)
        actionNews->setToolTip(QCoreApplication::translate("MainWindow", "Show news about this release", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoteProtocol->setText(QCoreApplication::translate("MainWindow", "Remote control", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoteProtocol->setToolTip(QCoreApplication::translate("MainWindow", "Remote control protocol", nullptr));
#endif // QT_CONFIG(tooltip)
        actionKbdShortcuts->setText(QCoreApplication::translate("MainWindow", "Keyboard shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        actionKbdShortcuts->setToolTip(QCoreApplication::translate("MainWindow", "Show help on keyboard shortcuts", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveWaterfall->setText(QCoreApplication::translate("MainWindow", "Save waterfall", nullptr));
#if QT_CONFIG(statustip)
        actionSaveWaterfall->setStatusTip(QCoreApplication::translate("MainWindow", "Save the current waterfall to a graphics file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSaveWaterfall->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDX_Cluster->setText(QCoreApplication::translate("MainWindow", "DX Cluster", nullptr));
#if QT_CONFIG(tooltip)
        actionDX_Cluster->setToolTip(QCoreApplication::translate("MainWindow", "Open DX Cluster Dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDX_Cluster->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLock_Window->setText(QCoreApplication::translate("MainWindow", "Lock Window", nullptr));
#if QT_CONFIG(shortcut)
        actionLock_Window->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStatus_Bar->setText(QCoreApplication::translate("MainWindow", "Status Bar", nullptr));
#if QT_CONFIG(tooltip)
        freqCtrl->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
#if QT_CONFIG(tooltip)
        menu_RecentConfig->setToolTip(QCoreApplication::translate("MainWindow", "Load recently used setting", nullptr));
#endif // QT_CONFIG(tooltip)
        menu_RecentConfig->setTitle(QCoreApplication::translate("MainWindow", "&Recent settings", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
