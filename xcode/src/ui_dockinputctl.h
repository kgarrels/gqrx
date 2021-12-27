/********************************************************************************
** Form generated from reading UI file 'dockinputctl.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKINPUTCTL_H
#define UI_DOCKINPUTCTL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockInputCtl
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lnbLabel;
    QDoubleSpinBox *lnbSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *agcButton;
    QGridLayout *gridLayout;
    QCheckBox *iqSwapButton;
    QCheckBox *ignoreButton;
    QCheckBox *dcCancelButton;
    QCheckBox *iqBalanceButton;
    QFormLayout *formLayout;
    QLabel *freqCorrLabel;
    QDoubleSpinBox *freqCorrSpinBox;
    QLabel *antSelectorLabel;
    QComboBox *antSelector;
    QFrame *line;
    QCheckBox *freqCtrlResetButton;
    QCheckBox *invertScrollingButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockInputCtl)
    {
        if (DockInputCtl->objectName().isEmpty())
            DockInputCtl->setObjectName(QString::fromUtf8("DockInputCtl"));
        DockInputCtl->resize(240, 240);
        DockInputCtl->setMinimumSize(QSize(240, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockInputCtl->setWindowIcon(icon);
        DockInputCtl->setFloating(false);
        DockInputCtl->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lnbLabel = new QLabel(dockWidgetContents);
        lnbLabel->setObjectName(QString::fromUtf8("lnbLabel"));
        lnbLabel->setIndent(-1);

        horizontalLayout->addWidget(lnbLabel);

        lnbSpinBox = new QDoubleSpinBox(dockWidgetContents);
        lnbSpinBox->setObjectName(QString::fromUtf8("lnbSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lnbSpinBox->sizePolicy().hasHeightForWidth());
        lnbSpinBox->setSizePolicy(sizePolicy);
        lnbSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lnbSpinBox->setDecimals(6);
        lnbSpinBox->setMinimum(-500000.000000000000000);
        lnbSpinBox->setMaximum(500000.000000000000000);

        horizontalLayout->addWidget(lnbSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        agcButton = new QCheckBox(dockWidgetContents);
        agcButton->setObjectName(QString::fromUtf8("agcButton"));

        horizontalLayout_2->addWidget(agcButton);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iqSwapButton = new QCheckBox(dockWidgetContents);
        iqSwapButton->setObjectName(QString::fromUtf8("iqSwapButton"));
        iqSwapButton->setTristate(false);

        gridLayout->addWidget(iqSwapButton, 0, 0, 1, 1);

        ignoreButton = new QCheckBox(dockWidgetContents);
        ignoreButton->setObjectName(QString::fromUtf8("ignoreButton"));

        gridLayout->addWidget(ignoreButton, 0, 1, 1, 1);

        dcCancelButton = new QCheckBox(dockWidgetContents);
        dcCancelButton->setObjectName(QString::fromUtf8("dcCancelButton"));

        gridLayout->addWidget(dcCancelButton, 1, 0, 1, 1);

        iqBalanceButton = new QCheckBox(dockWidgetContents);
        iqBalanceButton->setObjectName(QString::fromUtf8("iqBalanceButton"));

        gridLayout->addWidget(iqBalanceButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        freqCorrLabel = new QLabel(dockWidgetContents);
        freqCorrLabel->setObjectName(QString::fromUtf8("freqCorrLabel"));
        freqCorrLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, freqCorrLabel);

        freqCorrSpinBox = new QDoubleSpinBox(dockWidgetContents);
        freqCorrSpinBox->setObjectName(QString::fromUtf8("freqCorrSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(freqCorrSpinBox->sizePolicy().hasHeightForWidth());
        freqCorrSpinBox->setSizePolicy(sizePolicy1);
        freqCorrSpinBox->setDecimals(1);
        freqCorrSpinBox->setMinimum(-500.000000000000000);
        freqCorrSpinBox->setMaximum(500.000000000000000);
        freqCorrSpinBox->setValue(0.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, freqCorrSpinBox);

        antSelectorLabel = new QLabel(dockWidgetContents);
        antSelectorLabel->setObjectName(QString::fromUtf8("antSelectorLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, antSelectorLabel);

        antSelector = new QComboBox(dockWidgetContents);
        antSelector->setObjectName(QString::fromUtf8("antSelector"));
        sizePolicy1.setHeightForWidth(antSelector->sizePolicy().hasHeightForWidth());
        antSelector->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, antSelector);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(dockWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        freqCtrlResetButton = new QCheckBox(dockWidgetContents);
        freqCtrlResetButton->setObjectName(QString::fromUtf8("freqCtrlResetButton"));

        verticalLayout->addWidget(freqCtrlResetButton);

        invertScrollingButton = new QCheckBox(dockWidgetContents);
        invertScrollingButton->setObjectName(QString::fromUtf8("invertScrollingButton"));

        verticalLayout->addWidget(invertScrollingButton);

        verticalSpacer = new QSpacerItem(5, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DockInputCtl->setWidget(dockWidgetContents);

        retranslateUi(DockInputCtl);

        QMetaObject::connectSlotsByName(DockInputCtl);
    } // setupUi

    void retranslateUi(QDockWidget *DockInputCtl)
    {
        DockInputCtl->setWindowTitle(QCoreApplication::translate("DockInputCtl", "Input controls", nullptr));
        lnbLabel->setText(QCoreApplication::translate("DockInputCtl", "LNB LO", nullptr));
#if QT_CONFIG(tooltip)
        lnbSpinBox->setToolTip(QCoreApplication::translate("DockInputCtl", "Local oscillator of up or down converter", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lnbSpinBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lnbSpinBox->setSuffix(QCoreApplication::translate("DockInputCtl", " MHz", nullptr));
#if QT_CONFIG(tooltip)
        agcButton->setToolTip(QCoreApplication::translate("DockInputCtl", "<html><head/><body><p>Toggle hardware-based automatic gain control.</p><p>This feature requires hardware that supports it. It is known to work with RTL-SDR devices.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        agcButton->setText(QCoreApplication::translate("DockInputCtl", "Hardware AGC", nullptr));
#if QT_CONFIG(tooltip)
        iqSwapButton->setToolTip(QCoreApplication::translate("DockInputCtl", "<html><head/><body><p>Swap the the I/Q channels. This can be useful with audio-based input or when dealing with inverted IF.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        iqSwapButton->setText(QCoreApplication::translate("DockInputCtl", "Swap I/Q", nullptr));
#if QT_CONFIG(tooltip)
        ignoreButton->setToolTip(QCoreApplication::translate("DockInputCtl", "<html><head/><body><p>Ignore hardware limits such as frequency range. This allows experimenting with out-of-spec settings.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ignoreButton->setText(QCoreApplication::translate("DockInputCtl", "No limits", nullptr));
#if QT_CONFIG(tooltip)
        dcCancelButton->setToolTip(QCoreApplication::translate("DockInputCtl", "Enable automatic DC removal", nullptr));
#endif // QT_CONFIG(tooltip)
        dcCancelButton->setText(QCoreApplication::translate("DockInputCtl", "DC remove", nullptr));
#if QT_CONFIG(tooltip)
        iqBalanceButton->setToolTip(QCoreApplication::translate("DockInputCtl", "Enable automatic I/Q balance (requires gr-iqbal component)", nullptr));
#endif // QT_CONFIG(tooltip)
        iqBalanceButton->setText(QCoreApplication::translate("DockInputCtl", "IQ balance", nullptr));
        freqCorrLabel->setText(QCoreApplication::translate("DockInputCtl", "Freq. correction", nullptr));
        freqCorrSpinBox->setSuffix(QCoreApplication::translate("DockInputCtl", " ppm", nullptr));
#if QT_CONFIG(tooltip)
        antSelectorLabel->setToolTip(QCoreApplication::translate("DockInputCtl", "Select active antenna connector", nullptr));
#endif // QT_CONFIG(tooltip)
        antSelectorLabel->setText(QCoreApplication::translate("DockInputCtl", "Antenna", nullptr));
#if QT_CONFIG(tooltip)
        antSelector->setToolTip(QCoreApplication::translate("DockInputCtl", "Select active antenna connector", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        freqCtrlResetButton->setToolTip(QCoreApplication::translate("DockInputCtl", "<html><head/><body><p>Reset subordinate digits in main frequency control widget</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        freqCtrlResetButton->setText(QCoreApplication::translate("DockInputCtl", "Reset frequency controller digits", nullptr));
        invertScrollingButton->setText(QCoreApplication::translate("DockInputCtl", "Invert scroll wheel direction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockInputCtl: public Ui_DockInputCtl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKINPUTCTL_H
