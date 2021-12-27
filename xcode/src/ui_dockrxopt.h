/********************************************************************************
** Form generated from reading UI file 'dockrxopt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKRXOPT_H
#define UI_DOCKRXOPT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/freqctrl.h"

QT_BEGIN_NAMESPACE

class Ui_DockRxOpt
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CFreqCtrl *filterFreq;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rxFreqLabel;
    QLabel *hwFreq;
    QGridLayout *gridLayout;
    QLabel *sqlLabel;
    QPushButton *agcButton;
    QComboBox *modeSelector;
    QPushButton *nbOptButton;
    QComboBox *filterCombo;
    QLabel *demodLabel;
    QLabel *label;
    QLabel *filterShapeLabel;
    QPushButton *modeButton;
    QLabel *filterLabel;
    QLabel *agcLabel;
    QComboBox *agcPresetCombo;
    QComboBox *filterShapeCombo;
    QHBoxLayout *horizontalLayout;
    QPushButton *nb1Button;
    QPushButton *nb2Button;
    QLabel *label_2;
    QDoubleSpinBox *freqSpinBox;
    QLabel *label_3;
    QPushButton *resetSquelchButton;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *sqlSpinBox;
    QPushButton *autoSquelchButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockRxOpt)
    {
        if (DockRxOpt->objectName().isEmpty())
            DockRxOpt->setObjectName(QString::fromUtf8("DockRxOpt"));
        DockRxOpt->resize(280, 330);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockRxOpt->sizePolicy().hasHeightForWidth());
        DockRxOpt->setSizePolicy(sizePolicy);
        DockRxOpt->setMinimumSize(QSize(280, 330));
        DockRxOpt->setMaximumSize(QSize(524287, 524287));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockRxOpt->setWindowIcon(icon);
        DockRxOpt->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filterFreq = new CFreqCtrl(dockWidgetContents);
        filterFreq->setObjectName(QString::fromUtf8("filterFreq"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filterFreq->sizePolicy().hasHeightForWidth());
        filterFreq->setSizePolicy(sizePolicy1);
        filterFreq->setMinimumSize(QSize(0, 32));
        filterFreq->setFrameShape(QFrame::StyledPanel);
        filterFreq->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(filterFreq);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        rxFreqLabel = new QLabel(dockWidgetContents);
        rxFreqLabel->setObjectName(QString::fromUtf8("rxFreqLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rxFreqLabel->sizePolicy().hasHeightForWidth());
        rxFreqLabel->setSizePolicy(sizePolicy2);
        rxFreqLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(rxFreqLabel);

        hwFreq = new QLabel(dockWidgetContents);
        hwFreq->setObjectName(QString::fromUtf8("hwFreq"));
        sizePolicy2.setHeightForWidth(hwFreq->sizePolicy().hasHeightForWidth());
        hwFreq->setSizePolicy(sizePolicy2);
        hwFreq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(hwFreq);


        verticalLayout->addLayout(horizontalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 10, -1, -1);
        sqlLabel = new QLabel(dockWidgetContents);
        sqlLabel->setObjectName(QString::fromUtf8("sqlLabel"));
        sizePolicy.setHeightForWidth(sqlLabel->sizePolicy().hasHeightForWidth());
        sqlLabel->setSizePolicy(sizePolicy);
        sqlLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sqlLabel, 5, 0, 1, 1);

        agcButton = new QPushButton(dockWidgetContents);
        agcButton->setObjectName(QString::fromUtf8("agcButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(agcButton->sizePolicy().hasHeightForWidth());
        agcButton->setSizePolicy(sizePolicy3);
        agcButton->setMinimumSize(QSize(50, 30));
        agcButton->setMaximumSize(QSize(16777215, 16777215));
        agcButton->setIconSize(QSize(16, 16));
        agcButton->setChecked(false);

        gridLayout->addWidget(agcButton, 4, 2, 1, 1);

        modeSelector = new QComboBox(dockWidgetContents);
        modeSelector->setObjectName(QString::fromUtf8("modeSelector"));
        sizePolicy2.setHeightForWidth(modeSelector->sizePolicy().hasHeightForWidth());
        modeSelector->setSizePolicy(sizePolicy2);
        modeSelector->setMaxVisibleItems(30);

        gridLayout->addWidget(modeSelector, 3, 1, 1, 1);

        nbOptButton = new QPushButton(dockWidgetContents);
        nbOptButton->setObjectName(QString::fromUtf8("nbOptButton"));
        sizePolicy3.setHeightForWidth(nbOptButton->sizePolicy().hasHeightForWidth());
        nbOptButton->setSizePolicy(sizePolicy3);
        nbOptButton->setMinimumSize(QSize(50, 30));
        nbOptButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(nbOptButton, 6, 2, 1, 1);

        filterCombo = new QComboBox(dockWidgetContents);
        filterCombo->addItem(QString());
        filterCombo->addItem(QString());
        filterCombo->addItem(QString());
        filterCombo->addItem(QString());
        filterCombo->setObjectName(QString::fromUtf8("filterCombo"));
        filterCombo->setEnabled(true);
        sizePolicy1.setHeightForWidth(filterCombo->sizePolicy().hasHeightForWidth());
        filterCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(filterCombo, 1, 1, 1, 1);

        demodLabel = new QLabel(dockWidgetContents);
        demodLabel->setObjectName(QString::fromUtf8("demodLabel"));
        sizePolicy.setHeightForWidth(demodLabel->sizePolicy().hasHeightForWidth());
        demodLabel->setSizePolicy(sizePolicy);
        demodLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        demodLabel->setMargin(0);
        demodLabel->setIndent(-1);

        gridLayout->addWidget(demodLabel, 3, 0, 1, 1);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 6, 0, 1, 1);

        filterShapeLabel = new QLabel(dockWidgetContents);
        filterShapeLabel->setObjectName(QString::fromUtf8("filterShapeLabel"));
        sizePolicy.setHeightForWidth(filterShapeLabel->sizePolicy().hasHeightForWidth());
        filterShapeLabel->setSizePolicy(sizePolicy);
        filterShapeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(filterShapeLabel, 2, 0, 1, 1);

        modeButton = new QPushButton(dockWidgetContents);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        sizePolicy3.setHeightForWidth(modeButton->sizePolicy().hasHeightForWidth());
        modeButton->setSizePolicy(sizePolicy3);
        modeButton->setMinimumSize(QSize(50, 30));
        modeButton->setMaximumSize(QSize(16777215, 16777215));
        modeButton->setIconSize(QSize(16, 16));
        modeButton->setChecked(false);

        gridLayout->addWidget(modeButton, 3, 2, 1, 1);

        filterLabel = new QLabel(dockWidgetContents);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        sizePolicy.setHeightForWidth(filterLabel->sizePolicy().hasHeightForWidth());
        filterLabel->setSizePolicy(sizePolicy);
        filterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(filterLabel, 1, 0, 1, 1);

        agcLabel = new QLabel(dockWidgetContents);
        agcLabel->setObjectName(QString::fromUtf8("agcLabel"));
        sizePolicy.setHeightForWidth(agcLabel->sizePolicy().hasHeightForWidth());
        agcLabel->setSizePolicy(sizePolicy);
        agcLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(agcLabel, 4, 0, 1, 1);

        agcPresetCombo = new QComboBox(dockWidgetContents);
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->setObjectName(QString::fromUtf8("agcPresetCombo"));
        agcPresetCombo->setEnabled(true);
        sizePolicy2.setHeightForWidth(agcPresetCombo->sizePolicy().hasHeightForWidth());
        agcPresetCombo->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(agcPresetCombo, 4, 1, 1, 1);

        filterShapeCombo = new QComboBox(dockWidgetContents);
        filterShapeCombo->addItem(QString());
        filterShapeCombo->addItem(QString());
        filterShapeCombo->addItem(QString());
        filterShapeCombo->setObjectName(QString::fromUtf8("filterShapeCombo"));
        sizePolicy1.setHeightForWidth(filterShapeCombo->sizePolicy().hasHeightForWidth());
        filterShapeCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(filterShapeCombo, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nb1Button = new QPushButton(dockWidgetContents);
        nb1Button->setObjectName(QString::fromUtf8("nb1Button"));
        nb1Button->setEnabled(true);
        sizePolicy2.setHeightForWidth(nb1Button->sizePolicy().hasHeightForWidth());
        nb1Button->setSizePolicy(sizePolicy2);
        nb1Button->setMinimumSize(QSize(50, 30));
        nb1Button->setMaximumSize(QSize(16777215, 16777215));
        nb1Button->setCheckable(true);

        horizontalLayout->addWidget(nb1Button);

        nb2Button = new QPushButton(dockWidgetContents);
        nb2Button->setObjectName(QString::fromUtf8("nb2Button"));
        nb2Button->setEnabled(true);
        sizePolicy2.setHeightForWidth(nb2Button->sizePolicy().hasHeightForWidth());
        nb2Button->setSizePolicy(sizePolicy2);
        nb2Button->setMinimumSize(QSize(50, 30));
        nb2Button->setMaximumSize(QSize(16777215, 16777215));
        nb2Button->setCheckable(true);

        horizontalLayout->addWidget(nb2Button);


        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 1);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        freqSpinBox = new QDoubleSpinBox(dockWidgetContents);
        freqSpinBox->setObjectName(QString::fromUtf8("freqSpinBox"));
        freqSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        freqSpinBox->setDecimals(3);
        freqSpinBox->setMinimum(24000.000000000000000);
        freqSpinBox->setMaximum(2200000.000000000000000);
        freqSpinBox->setValue(144500.000000000000000);

        gridLayout->addWidget(freqSpinBox, 0, 1, 1, 1);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        resetSquelchButton = new QPushButton(dockWidgetContents);
        resetSquelchButton->setObjectName(QString::fromUtf8("resetSquelchButton"));
        sizePolicy3.setHeightForWidth(resetSquelchButton->sizePolicy().hasHeightForWidth());
        resetSquelchButton->setSizePolicy(sizePolicy3);
        resetSquelchButton->setMinimumSize(QSize(50, 30));
        resetSquelchButton->setMaximumSize(QSize(16777215, 16777215));
        resetSquelchButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(resetSquelchButton, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sqlSpinBox = new QDoubleSpinBox(dockWidgetContents);
        sqlSpinBox->setObjectName(QString::fromUtf8("sqlSpinBox"));
        sizePolicy1.setHeightForWidth(sqlSpinBox->sizePolicy().hasHeightForWidth());
        sqlSpinBox->setSizePolicy(sizePolicy1);
        sqlSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sqlSpinBox->setAccelerated(true);
        sqlSpinBox->setDecimals(1);
        sqlSpinBox->setMinimum(-150.000000000000000);
        sqlSpinBox->setMaximum(0.000000000000000);
        sqlSpinBox->setSingleStep(1.000000000000000);
        sqlSpinBox->setValue(-150.000000000000000);

        horizontalLayout_2->addWidget(sqlSpinBox);

        autoSquelchButton = new QPushButton(dockWidgetContents);
        autoSquelchButton->setObjectName(QString::fromUtf8("autoSquelchButton"));
        sizePolicy3.setHeightForWidth(autoSquelchButton->sizePolicy().hasHeightForWidth());
        autoSquelchButton->setSizePolicy(sizePolicy3);
        autoSquelchButton->setMinimumSize(QSize(50, 30));
        autoSquelchButton->setMaximumSize(QSize(16777215, 16777215));
        autoSquelchButton->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(autoSquelchButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DockRxOpt->setWidget(dockWidgetContents);
        QWidget::setTabOrder(freqSpinBox, filterCombo);
        QWidget::setTabOrder(filterCombo, filterShapeCombo);
        QWidget::setTabOrder(filterShapeCombo, modeSelector);
        QWidget::setTabOrder(modeSelector, modeButton);
        QWidget::setTabOrder(modeButton, agcPresetCombo);
        QWidget::setTabOrder(agcPresetCombo, agcButton);
        QWidget::setTabOrder(agcButton, sqlSpinBox);
        QWidget::setTabOrder(sqlSpinBox, autoSquelchButton);
        QWidget::setTabOrder(autoSquelchButton, resetSquelchButton);
        QWidget::setTabOrder(resetSquelchButton, nb1Button);
        QWidget::setTabOrder(nb1Button, nb2Button);
        QWidget::setTabOrder(nb2Button, nbOptButton);

        retranslateUi(DockRxOpt);

        modeSelector->setCurrentIndex(-1);
        filterCombo->setCurrentIndex(1);
        agcPresetCombo->setCurrentIndex(1);
        filterShapeCombo->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DockRxOpt);
    } // setupUi

    void retranslateUi(QDockWidget *DockRxOpt)
    {
        DockRxOpt->setWindowTitle(QCoreApplication::translate("DockRxOpt", "Receiver Options", nullptr));
#if QT_CONFIG(tooltip)
        filterFreq->setToolTip(QCoreApplication::translate("DockRxOpt", "<html><head/><body><p>Channel filter offset.<br/>\n"
"This is an offset from the hardware RF frequency.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rxFreqLabel->setToolTip(QCoreApplication::translate("DockRxOpt", "The frequency of the hardware (not including LNB)", nullptr));
#endif // QT_CONFIG(tooltip)
        rxFreqLabel->setText(QCoreApplication::translate("DockRxOpt", "Hardware freq:", nullptr));
#if QT_CONFIG(tooltip)
        hwFreq->setToolTip(QCoreApplication::translate("DockRxOpt", "The frequency of the hardware (not including LNB)", nullptr));
#endif // QT_CONFIG(tooltip)
        hwFreq->setText(QCoreApplication::translate("DockRxOpt", "144.500000 MHz", nullptr));
#if QT_CONFIG(tooltip)
        sqlLabel->setToolTip(QCoreApplication::translate("DockRxOpt", "Squelch level in dB below full scale", nullptr));
#endif // QT_CONFIG(tooltip)
        sqlLabel->setText(QCoreApplication::translate("DockRxOpt", "Squelch", nullptr));
#if QT_CONFIG(tooltip)
        agcButton->setToolTip(QCoreApplication::translate("DockRxOpt", "AGC options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        agcButton->setAccessibleName(QCoreApplication::translate("DockRxOpt", "AGC options", nullptr));
#endif // QT_CONFIG(accessibility)
        agcButton->setText(QCoreApplication::translate("DockRxOpt", "...", nullptr));
#if QT_CONFIG(tooltip)
        modeSelector->setToolTip(QCoreApplication::translate("DockRxOpt", "Demodulator type (mode)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        modeSelector->setStatusTip(QCoreApplication::translate("DockRxOpt", "Demodulator type (mode)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(accessibility)
        modeSelector->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Mode", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        nbOptButton->setToolTip(QCoreApplication::translate("DockRxOpt", "Noise blanker options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        nbOptButton->setWhatsThis(QCoreApplication::translate("DockRxOpt", "Noise blanker options", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        nbOptButton->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Noise blanker options", nullptr));
#endif // QT_CONFIG(accessibility)
        nbOptButton->setText(QCoreApplication::translate("DockRxOpt", "...", nullptr));
        filterCombo->setItemText(0, QCoreApplication::translate("DockRxOpt", "Wide", nullptr));
        filterCombo->setItemText(1, QCoreApplication::translate("DockRxOpt", "Normal", nullptr));
        filterCombo->setItemText(2, QCoreApplication::translate("DockRxOpt", "Narrow", nullptr));
        filterCombo->setItemText(3, QCoreApplication::translate("DockRxOpt", "User", nullptr));

#if QT_CONFIG(tooltip)
        filterCombo->setToolTip(QCoreApplication::translate("DockRxOpt", "Apply mode dependent filter preset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        filterCombo->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Filter width", nullptr));
#endif // QT_CONFIG(accessibility)
        demodLabel->setText(QCoreApplication::translate("DockRxOpt", "Mode", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("DockRxOpt", "Noise blanker settings", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("DockRxOpt", "Noise blanker", nullptr));
        filterShapeLabel->setText(QCoreApplication::translate("DockRxOpt", "Filter shape", nullptr));
#if QT_CONFIG(tooltip)
        modeButton->setToolTip(QCoreApplication::translate("DockRxOpt", "Demodulator options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        modeButton->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Mode options", nullptr));
#endif // QT_CONFIG(accessibility)
        modeButton->setText(QCoreApplication::translate("DockRxOpt", "...", nullptr));
        filterLabel->setText(QCoreApplication::translate("DockRxOpt", "Filter width", nullptr));
        agcLabel->setText(QCoreApplication::translate("DockRxOpt", "AGC", nullptr));
        agcPresetCombo->setItemText(0, QCoreApplication::translate("DockRxOpt", "Fast", nullptr));
        agcPresetCombo->setItemText(1, QCoreApplication::translate("DockRxOpt", "Medium", nullptr));
        agcPresetCombo->setItemText(2, QCoreApplication::translate("DockRxOpt", "Slow", nullptr));
        agcPresetCombo->setItemText(3, QCoreApplication::translate("DockRxOpt", "User", nullptr));
        agcPresetCombo->setItemText(4, QCoreApplication::translate("DockRxOpt", "Off", nullptr));

#if QT_CONFIG(tooltip)
        agcPresetCombo->setToolTip(QCoreApplication::translate("DockRxOpt", "AGC presets", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        agcPresetCombo->setAccessibleName(QCoreApplication::translate("DockRxOpt", "AGC", nullptr));
#endif // QT_CONFIG(accessibility)
        filterShapeCombo->setItemText(0, QCoreApplication::translate("DockRxOpt", "Soft", nullptr));
        filterShapeCombo->setItemText(1, QCoreApplication::translate("DockRxOpt", "Normal", nullptr));
        filterShapeCombo->setItemText(2, QCoreApplication::translate("DockRxOpt", "Sharp", nullptr));

#if QT_CONFIG(tooltip)
        filterShapeCombo->setToolTip(QCoreApplication::translate("DockRxOpt", "Select the filter shape", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        filterShapeCombo->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Filter shape", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        nb1Button->setToolTip(QCoreApplication::translate("DockRxOpt", "Noise blanker for static type noise", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        nb1Button->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        nb1Button->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Noise blanker 1", nullptr));
#endif // QT_CONFIG(accessibility)
        nb1Button->setText(QCoreApplication::translate("DockRxOpt", "NB1", nullptr));
#if QT_CONFIG(tooltip)
        nb2Button->setToolTip(QCoreApplication::translate("DockRxOpt", "Noise blanker for pulse type noise", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        nb2Button->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        nb2Button->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Noise blanker 2", nullptr));
#endif // QT_CONFIG(accessibility)
        nb2Button->setText(QCoreApplication::translate("DockRxOpt", "NB2", nullptr));
        label_2->setText(QCoreApplication::translate("DockRxOpt", "Frequency", nullptr));
#if QT_CONFIG(tooltip)
        freqSpinBox->setToolTip(QCoreApplication::translate("DockRxOpt", "Receiver frequency", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        freqSpinBox->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Frequency", nullptr));
#endif // QT_CONFIG(accessibility)
        label_3->setText(QCoreApplication::translate("DockRxOpt", "kHz", nullptr));
#if QT_CONFIG(tooltip)
        resetSquelchButton->setToolTip(QCoreApplication::translate("DockRxOpt", "Reset squelch to its default value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSquelchButton->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Auto squelch", nullptr));
#endif // QT_CONFIG(accessibility)
        resetSquelchButton->setText(QCoreApplication::translate("DockRxOpt", "R", nullptr));
#if QT_CONFIG(tooltip)
        sqlSpinBox->setToolTip(QCoreApplication::translate("DockRxOpt", "Squelch level in dB below full scale", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        sqlSpinBox->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Squelch", nullptr));
#endif // QT_CONFIG(accessibility)
        sqlSpinBox->setSuffix(QCoreApplication::translate("DockRxOpt", " dB", nullptr));
#if QT_CONFIG(tooltip)
        autoSquelchButton->setToolTip(QCoreApplication::translate("DockRxOpt", "Set squelch to the current signal or noise level", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        autoSquelchButton->setAccessibleName(QCoreApplication::translate("DockRxOpt", "Auto squelch", nullptr));
#endif // QT_CONFIG(accessibility)
        autoSquelchButton->setText(QCoreApplication::translate("DockRxOpt", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockRxOpt: public Ui_DockRxOpt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKRXOPT_H
