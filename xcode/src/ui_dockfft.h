/********************************************************************************
** Form generated from reading UI file 'dockfft.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKFFT_H
#define UI_DOCKFFT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/ctk/ctkRangeSlider.h"
#include "qtgui/qtcolorpicker.h"

QT_BEGIN_NAMESPACE

class Ui_DockFft
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *wfRangeLabel;
    QLabel *wfResLabel;
    QSlider *fftAvgSlider;
    QLabel *pandLabel;
    QtColorPicker *colorPicker;
    QLabel *fftRbwLabel;
    QLabel *zoomLAbel;
    QSlider *fftZoomSlider;
    QComboBox *cmapComboBox;
    QPushButton *fillButton;
    QLabel *fftOvrLabel;
    QCheckBox *fftNbCheckbox;
    QComboBox *fftRateComboBox;
    ctkRangeSlider *pandRangeSlider;
    QSlider *fftSplitSlider;
    QComboBox *wfSpanComboBox;
    QLabel *colorLabel;
    QLabel *pandRangeLabel;
    QLabel *wfLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetButton;
    QPushButton *centerButton;
    QPushButton *demodButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *peakLabel;
    QLabel *zoomLevelLabel;
    QLabel *fftAvgLabel;
    QComboBox *fftWinComboBox;
    QLabel *fftSizeLabel;
    QComboBox *fftSizeComboBox;
    ctkRangeSlider *wfRangeSlider;
    QPushButton *lockButton;
    QCheckBox *bandPlanCheckbox;
    QLabel *fftRateLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *peakDetectionButton;
    QPushButton *peakHoldButton;
    QPushButton *autoButton;
    QSlider *fftNbSlider;

    void setupUi(QDockWidget *DockFft)
    {
        if (DockFft->objectName().isEmpty())
            DockFft->setObjectName(QString::fromUtf8("DockFft"));
        DockFft->resize(623, 506);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockFft->sizePolicy().hasHeightForWidth());
        DockFft->setSizePolicy(sizePolicy);
        DockFft->setMinimumSize(QSize(327, 200));
        DockFft->setMaximumSize(QSize(524287, 524287));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockFft->setWindowIcon(icon);
        DockFft->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 599, 460));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wfRangeLabel = new QLabel(scrollAreaWidgetContents);
        wfRangeLabel->setObjectName(QString::fromUtf8("wfRangeLabel"));
        wfRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(wfRangeLabel, 8, 0, 1, 1);

        wfResLabel = new QLabel(scrollAreaWidgetContents);
        wfResLabel->setObjectName(QString::fromUtf8("wfResLabel"));

        gridLayout->addWidget(wfResLabel, 2, 2, 1, 2);

        fftAvgSlider = new QSlider(scrollAreaWidgetContents);
        fftAvgSlider->setObjectName(QString::fromUtf8("fftAvgSlider"));
        sizePolicy.setHeightForWidth(fftAvgSlider->sizePolicy().hasHeightForWidth());
        fftAvgSlider->setSizePolicy(sizePolicy);
        fftAvgSlider->setMinimumSize(QSize(0, 22));
        fftAvgSlider->setMaximum(100);
        fftAvgSlider->setValue(75);
        fftAvgSlider->setOrientation(Qt::Horizontal);
        fftAvgSlider->setInvertedAppearance(false);
        fftAvgSlider->setInvertedControls(false);

        gridLayout->addWidget(fftAvgSlider, 4, 1, 1, 2);

        pandLabel = new QLabel(scrollAreaWidgetContents);
        pandLabel->setObjectName(QString::fromUtf8("pandLabel"));
        sizePolicy1.setHeightForWidth(pandLabel->sizePolicy().hasHeightForWidth());
        pandLabel->setSizePolicy(sizePolicy1);
        pandLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pandLabel, 5, 0, 1, 1);

        colorPicker = new QtColorPicker(scrollAreaWidgetContents);
        colorPicker->setObjectName(QString::fromUtf8("colorPicker"));
        sizePolicy.setHeightForWidth(colorPicker->sizePolicy().hasHeightForWidth());
        colorPicker->setSizePolicy(sizePolicy);
        colorPicker->setMinimumSize(QSize(50, 32));
        colorPicker->setFlat(true);

        gridLayout->addWidget(colorPicker, 12, 1, 1, 1);

        fftRbwLabel = new QLabel(scrollAreaWidgetContents);
        fftRbwLabel->setObjectName(QString::fromUtf8("fftRbwLabel"));

        gridLayout->addWidget(fftRbwLabel, 0, 2, 1, 2);

        zoomLAbel = new QLabel(scrollAreaWidgetContents);
        zoomLAbel->setObjectName(QString::fromUtf8("zoomLAbel"));
        zoomLAbel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(zoomLAbel, 9, 0, 2, 1);

        fftZoomSlider = new QSlider(scrollAreaWidgetContents);
        fftZoomSlider->setObjectName(QString::fromUtf8("fftZoomSlider"));
        sizePolicy.setHeightForWidth(fftZoomSlider->sizePolicy().hasHeightForWidth());
        fftZoomSlider->setSizePolicy(sizePolicy);
        fftZoomSlider->setMinimumSize(QSize(0, 22));
        fftZoomSlider->setMinimum(1);
        fftZoomSlider->setMaximum(50);
        fftZoomSlider->setPageStep(5);
        fftZoomSlider->setOrientation(Qt::Horizontal);
        fftZoomSlider->setInvertedAppearance(false);
        fftZoomSlider->setInvertedControls(false);
        fftZoomSlider->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(fftZoomSlider, 9, 1, 2, 2);

        cmapComboBox = new QComboBox(scrollAreaWidgetContents);
        cmapComboBox->setObjectName(QString::fromUtf8("cmapComboBox"));

        gridLayout->addWidget(cmapComboBox, 13, 1, 1, 2);

        fillButton = new QPushButton(scrollAreaWidgetContents);
        fillButton->setObjectName(QString::fromUtf8("fillButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fillButton->sizePolicy().hasHeightForWidth());
        fillButton->setSizePolicy(sizePolicy2);
        fillButton->setMinimumSize(QSize(50, 32));
        fillButton->setMaximumSize(QSize(16777215, 16777215));
        fillButton->setCheckable(true);

        gridLayout->addWidget(fillButton, 12, 2, 1, 1);

        fftOvrLabel = new QLabel(scrollAreaWidgetContents);
        fftOvrLabel->setObjectName(QString::fromUtf8("fftOvrLabel"));
        fftOvrLabel->setMargin(0);

        gridLayout->addWidget(fftOvrLabel, 1, 2, 1, 2);

        fftNbCheckbox = new QCheckBox(scrollAreaWidgetContents);
        fftNbCheckbox->setObjectName(QString::fromUtf8("fftNbCheckbox"));

        gridLayout->addWidget(fftNbCheckbox, 15, 0, 1, 2);

        fftRateComboBox = new QComboBox(scrollAreaWidgetContents);
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->setObjectName(QString::fromUtf8("fftRateComboBox"));
        sizePolicy.setHeightForWidth(fftRateComboBox->sizePolicy().hasHeightForWidth());
        fftRateComboBox->setSizePolicy(sizePolicy);
        fftRateComboBox->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(fftRateComboBox, 1, 1, 1, 1);

        pandRangeSlider = new ctkRangeSlider(scrollAreaWidgetContents);
        pandRangeSlider->setObjectName(QString::fromUtf8("pandRangeSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pandRangeSlider->sizePolicy().hasHeightForWidth());
        pandRangeSlider->setSizePolicy(sizePolicy3);
        pandRangeSlider->setMinimumSize(QSize(0, 0));
        pandRangeSlider->setMinimum(-160);
        pandRangeSlider->setMaximum(0);
        pandRangeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(pandRangeSlider, 7, 1, 1, 2);

        fftSplitSlider = new QSlider(scrollAreaWidgetContents);
        fftSplitSlider->setObjectName(QString::fromUtf8("fftSplitSlider"));
        sizePolicy.setHeightForWidth(fftSplitSlider->sizePolicy().hasHeightForWidth());
        fftSplitSlider->setSizePolicy(sizePolicy);
        fftSplitSlider->setMinimumSize(QSize(0, 22));
        fftSplitSlider->setMinimum(0);
        fftSplitSlider->setMaximum(100);
        fftSplitSlider->setValue(35);
        fftSplitSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(fftSplitSlider, 5, 1, 1, 2);

        wfSpanComboBox = new QComboBox(scrollAreaWidgetContents);
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->setObjectName(QString::fromUtf8("wfSpanComboBox"));
        sizePolicy.setHeightForWidth(wfSpanComboBox->sizePolicy().hasHeightForWidth());
        wfSpanComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(wfSpanComboBox, 2, 1, 1, 1);

        colorLabel = new QLabel(scrollAreaWidgetContents);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(colorLabel, 12, 0, 1, 1);

        pandRangeLabel = new QLabel(scrollAreaWidgetContents);
        pandRangeLabel->setObjectName(QString::fromUtf8("pandRangeLabel"));
        pandRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pandRangeLabel, 7, 0, 1, 1);

        wfLabel = new QLabel(scrollAreaWidgetContents);
        wfLabel->setObjectName(QString::fromUtf8("wfLabel"));
        sizePolicy.setHeightForWidth(wfLabel->sizePolicy().hasHeightForWidth());
        wfLabel->setSizePolicy(sizePolicy);
        wfLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(wfLabel, 5, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetButton = new QPushButton(scrollAreaWidgetContents);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        sizePolicy.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy);
        resetButton->setMinimumSize(QSize(50, 32));
        resetButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(resetButton);

        centerButton = new QPushButton(scrollAreaWidgetContents);
        centerButton->setObjectName(QString::fromUtf8("centerButton"));
        sizePolicy.setHeightForWidth(centerButton->sizePolicy().hasHeightForWidth());
        centerButton->setSizePolicy(sizePolicy);
        centerButton->setMinimumSize(QSize(50, 32));
        centerButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(centerButton);

        demodButton = new QPushButton(scrollAreaWidgetContents);
        demodButton->setObjectName(QString::fromUtf8("demodButton"));
        sizePolicy.setHeightForWidth(demodButton->sizePolicy().hasHeightForWidth());
        demodButton->setSizePolicy(sizePolicy);
        demodButton->setMinimumSize(QSize(50, 32));
        demodButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(demodButton);


        gridLayout->addLayout(horizontalLayout, 11, 0, 1, 4);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 13, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(253, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 4);

        peakLabel = new QLabel(scrollAreaWidgetContents);
        peakLabel->setObjectName(QString::fromUtf8("peakLabel"));
        peakLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(peakLabel, 6, 0, 1, 1);

        zoomLevelLabel = new QLabel(scrollAreaWidgetContents);
        zoomLevelLabel->setObjectName(QString::fromUtf8("zoomLevelLabel"));
        sizePolicy.setHeightForWidth(zoomLevelLabel->sizePolicy().hasHeightForWidth());
        zoomLevelLabel->setSizePolicy(sizePolicy);
        zoomLevelLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(zoomLevelLabel, 9, 3, 2, 1);

        fftAvgLabel = new QLabel(scrollAreaWidgetContents);
        fftAvgLabel->setObjectName(QString::fromUtf8("fftAvgLabel"));
        sizePolicy1.setHeightForWidth(fftAvgLabel->sizePolicy().hasHeightForWidth());
        fftAvgLabel->setSizePolicy(sizePolicy1);
        fftAvgLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fftAvgLabel, 4, 0, 1, 1);

        fftWinComboBox = new QComboBox(scrollAreaWidgetContents);
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->setObjectName(QString::fromUtf8("fftWinComboBox"));

        gridLayout->addWidget(fftWinComboBox, 3, 1, 1, 2);

        fftSizeLabel = new QLabel(scrollAreaWidgetContents);
        fftSizeLabel->setObjectName(QString::fromUtf8("fftSizeLabel"));
        fftSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fftSizeLabel, 0, 0, 1, 1);

        fftSizeComboBox = new QComboBox(scrollAreaWidgetContents);
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->setObjectName(QString::fromUtf8("fftSizeComboBox"));
        fftSizeComboBox->setEnabled(true);
        sizePolicy.setHeightForWidth(fftSizeComboBox->sizePolicy().hasHeightForWidth());
        fftSizeComboBox->setSizePolicy(sizePolicy);
        fftSizeComboBox->setMinimumSize(QSize(0, 0));
        fftSizeComboBox->setEditable(false);
        fftSizeComboBox->setMaxVisibleItems(15);
        fftSizeComboBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        gridLayout->addWidget(fftSizeComboBox, 0, 1, 1, 1);

        wfRangeSlider = new ctkRangeSlider(scrollAreaWidgetContents);
        wfRangeSlider->setObjectName(QString::fromUtf8("wfRangeSlider"));
        wfRangeSlider->setMinimum(-160);
        wfRangeSlider->setMaximum(0);
        wfRangeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(wfRangeSlider, 8, 1, 1, 2);

        lockButton = new QPushButton(scrollAreaWidgetContents);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));
        lockButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(lockButton->sizePolicy().hasHeightForWidth());
        lockButton->setSizePolicy(sizePolicy2);
        lockButton->setMinimumSize(QSize(50, 32));
        lockButton->setCheckable(true);

        gridLayout->addWidget(lockButton, 7, 3, 1, 1);

        bandPlanCheckbox = new QCheckBox(scrollAreaWidgetContents);
        bandPlanCheckbox->setObjectName(QString::fromUtf8("bandPlanCheckbox"));

        gridLayout->addWidget(bandPlanCheckbox, 14, 0, 1, 4);

        fftRateLabel = new QLabel(scrollAreaWidgetContents);
        fftRateLabel->setObjectName(QString::fromUtf8("fftRateLabel"));
        fftRateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fftRateLabel, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(-1, 1, -1, 0);
        peakDetectionButton = new QPushButton(scrollAreaWidgetContents);
        peakDetectionButton->setObjectName(QString::fromUtf8("peakDetectionButton"));
        sizePolicy.setHeightForWidth(peakDetectionButton->sizePolicy().hasHeightForWidth());
        peakDetectionButton->setSizePolicy(sizePolicy);
        peakDetectionButton->setMinimumSize(QSize(50, 32));
        peakDetectionButton->setMaximumSize(QSize(16777215, 16777215));
        peakDetectionButton->setCheckable(true);

        horizontalLayout_2->addWidget(peakDetectionButton);

        peakHoldButton = new QPushButton(scrollAreaWidgetContents);
        peakHoldButton->setObjectName(QString::fromUtf8("peakHoldButton"));
        sizePolicy.setHeightForWidth(peakHoldButton->sizePolicy().hasHeightForWidth());
        peakHoldButton->setSizePolicy(sizePolicy);
        peakHoldButton->setMinimumSize(QSize(50, 32));
        peakHoldButton->setMaximumSize(QSize(16777215, 16777215));
        peakHoldButton->setCheckable(true);

        horizontalLayout_2->addWidget(peakHoldButton);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 3);

        autoButton = new QPushButton(scrollAreaWidgetContents);
        autoButton->setObjectName(QString::fromUtf8("autoButton"));
        sizePolicy2.setHeightForWidth(autoButton->sizePolicy().hasHeightForWidth());
        autoButton->setSizePolicy(sizePolicy2);
        autoButton->setMinimumSize(QSize(50, 32));
        autoButton->setCheckable(true);

        gridLayout->addWidget(autoButton, 8, 3, 1, 1);

        fftNbSlider = new QSlider(scrollAreaWidgetContents);
        fftNbSlider->setObjectName(QString::fromUtf8("fftNbSlider"));
        fftNbSlider->setMinimum(2);
        fftNbSlider->setMaximum(10);
        fftNbSlider->setPageStep(3);
        fftNbSlider->setValue(5);
        fftNbSlider->setOrientation(Qt::Horizontal);
        fftNbSlider->setTickPosition(QSlider::TicksBelow);
        fftNbSlider->setTickInterval(1);

        gridLayout->addWidget(fftNbSlider, 15, 2, 1, 2);


        verticalLayout->addLayout(gridLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        DockFft->setWidget(dockWidgetContents);

        retranslateUi(DockFft);

        fftRateComboBox->setCurrentIndex(3);
        fftSizeComboBox->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(DockFft);
    } // setupUi

    void retranslateUi(QDockWidget *DockFft)
    {
#if QT_CONFIG(tooltip)
        DockFft->setToolTip(QCoreApplication::translate("DockFft", "FFT performance and display settings", nullptr));
#endif // QT_CONFIG(tooltip)
        DockFft->setWindowTitle(QCoreApplication::translate("DockFft", "FFT Settings", nullptr));
#if QT_CONFIG(tooltip)
        wfRangeLabel->setToolTip(QCoreApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        wfRangeLabel->setStatusTip(QCoreApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_CONFIG(statustip)
        wfRangeLabel->setText(QCoreApplication::translate("DockFft", "Wf. dB", nullptr));
#if QT_CONFIG(tooltip)
        wfResLabel->setToolTip(QCoreApplication::translate("DockFft", "Waterfall time resolution.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        wfResLabel->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        wfResLabel->setText(QCoreApplication::translate("DockFft", "Res: - s", nullptr));
#if QT_CONFIG(tooltip)
        fftAvgSlider->setToolTip(QCoreApplication::translate("DockFft", "FFT averaging gain", nullptr));
#endif // QT_CONFIG(tooltip)
        pandLabel->setText(QCoreApplication::translate("DockFft", "Panadapter", nullptr));
#if QT_CONFIG(tooltip)
        colorPicker->setToolTip(QCoreApplication::translate("DockFft", "Click to select color for the FFT plot", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        colorPicker->setStatusTip(QCoreApplication::translate("DockFft", "Click to select color for the FFT plot", nullptr));
#endif // QT_CONFIG(statustip)
        colorPicker->setText(QString());
#if QT_CONFIG(tooltip)
        fftRbwLabel->setToolTip(QCoreApplication::translate("DockFft", "Resolution bandwidth", nullptr));
#endif // QT_CONFIG(tooltip)
        fftRbwLabel->setText(QCoreApplication::translate("DockFft", "RBW: 0 kHz", nullptr));
#if QT_CONFIG(tooltip)
        zoomLAbel->setToolTip(QCoreApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        zoomLAbel->setStatusTip(QCoreApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_CONFIG(statustip)
        zoomLAbel->setText(QCoreApplication::translate("DockFft", "Freq zoom", nullptr));
#if QT_CONFIG(tooltip)
        fftZoomSlider->setToolTip(QCoreApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fftZoomSlider->setStatusTip(QCoreApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        cmapComboBox->setToolTip(QCoreApplication::translate("DockFft", "Select waterfall color map", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fillButton->setToolTip(QCoreApplication::translate("DockFft", "Fill the area below the FFT plot with a gradient", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fillButton->setStatusTip(QCoreApplication::translate("DockFft", "Fill the area below the FFT plot with a gradient", nullptr));
#endif // QT_CONFIG(statustip)
        fillButton->setText(QCoreApplication::translate("DockFft", "Fill", nullptr));
#if QT_CONFIG(tooltip)
        fftOvrLabel->setToolTip(QCoreApplication::translate("DockFft", "FFT buffer overlap between two consecutive FFT calculations.", nullptr));
#endif // QT_CONFIG(tooltip)
        fftOvrLabel->setText(QCoreApplication::translate("DockFft", "Overlap: 0%", nullptr));
#if QT_CONFIG(tooltip)
        fftNbCheckbox->setToolTip(QCoreApplication::translate("DockFft", "enable a noisblanker for panadapter and waterfall", nullptr));
#endif // QT_CONFIG(tooltip)
        fftNbCheckbox->setText(QCoreApplication::translate("DockFft", "Noise Blanker (FFT)", nullptr));
        fftRateComboBox->setItemText(0, QCoreApplication::translate("DockFft", "60 fps", nullptr));
        fftRateComboBox->setItemText(1, QCoreApplication::translate("DockFft", "50 fps", nullptr));
        fftRateComboBox->setItemText(2, QCoreApplication::translate("DockFft", "30 fps", nullptr));
        fftRateComboBox->setItemText(3, QCoreApplication::translate("DockFft", "25 fps", nullptr));
        fftRateComboBox->setItemText(4, QCoreApplication::translate("DockFft", "20 fps", nullptr));
        fftRateComboBox->setItemText(5, QCoreApplication::translate("DockFft", "17 fps", nullptr));
        fftRateComboBox->setItemText(6, QCoreApplication::translate("DockFft", "15 fps", nullptr));
        fftRateComboBox->setItemText(7, QCoreApplication::translate("DockFft", "10 fps", nullptr));
        fftRateComboBox->setItemText(8, QCoreApplication::translate("DockFft", "5 fps", nullptr));
        fftRateComboBox->setItemText(9, QCoreApplication::translate("DockFft", "1 fps", nullptr));
        fftRateComboBox->setItemText(10, QCoreApplication::translate("DockFft", "0 fps", nullptr));

#if QT_CONFIG(tooltip)
        fftRateComboBox->setToolTip(QCoreApplication::translate("DockFft", "FFT refresh rate", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pandRangeSlider->setToolTip(QCoreApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pandRangeSlider->setStatusTip(QCoreApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        fftSplitSlider->setToolTip(QCoreApplication::translate("DockFft", "Spatial distribution between pandapter and waterfall", nullptr));
#endif // QT_CONFIG(tooltip)
        wfSpanComboBox->setItemText(0, QCoreApplication::translate("DockFft", "Auto", nullptr));
        wfSpanComboBox->setItemText(1, QCoreApplication::translate("DockFft", "1 min", nullptr));
        wfSpanComboBox->setItemText(2, QCoreApplication::translate("DockFft", "2 min", nullptr));
        wfSpanComboBox->setItemText(3, QCoreApplication::translate("DockFft", "5 min", nullptr));
        wfSpanComboBox->setItemText(4, QCoreApplication::translate("DockFft", "10 min", nullptr));
        wfSpanComboBox->setItemText(5, QCoreApplication::translate("DockFft", "15 min", nullptr));
        wfSpanComboBox->setItemText(6, QCoreApplication::translate("DockFft", "20 min", nullptr));
        wfSpanComboBox->setItemText(7, QCoreApplication::translate("DockFft", "30 min", nullptr));
        wfSpanComboBox->setItemText(8, QCoreApplication::translate("DockFft", "1 hour", nullptr));
        wfSpanComboBox->setItemText(9, QCoreApplication::translate("DockFft", "2 hours", nullptr));
        wfSpanComboBox->setItemText(10, QCoreApplication::translate("DockFft", "5 hours", nullptr));
        wfSpanComboBox->setItemText(11, QCoreApplication::translate("DockFft", "10 hours", nullptr));
        wfSpanComboBox->setItemText(12, QCoreApplication::translate("DockFft", "16 hours", nullptr));
        wfSpanComboBox->setItemText(13, QCoreApplication::translate("DockFft", "24 hours", nullptr));
        wfSpanComboBox->setItemText(14, QCoreApplication::translate("DockFft", "48 hours", nullptr));

#if QT_CONFIG(tooltip)
        wfSpanComboBox->setToolTip(QCoreApplication::translate("DockFft", "The vertical time span on the waterfall.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        colorLabel->setToolTip(QCoreApplication::translate("DockFft", "Color for the FFT plot", nullptr));
#endif // QT_CONFIG(tooltip)
        colorLabel->setText(QCoreApplication::translate("DockFft", "Color", nullptr));
#if QT_CONFIG(tooltip)
        pandRangeLabel->setToolTip(QCoreApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pandRangeLabel->setStatusTip(QCoreApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_CONFIG(statustip)
        pandRangeLabel->setText(QCoreApplication::translate("DockFft", "Pand. dB", nullptr));
        wfLabel->setText(QCoreApplication::translate("DockFft", "Waterfall", nullptr));
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("DockFft", "Reset zoom level to 1x", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("DockFft", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        centerButton->setToolTip(QCoreApplication::translate("DockFft", "Center FFT around original center frequency", nullptr));
#endif // QT_CONFIG(tooltip)
        centerButton->setText(QCoreApplication::translate("DockFft", "Center", nullptr));
#if QT_CONFIG(tooltip)
        demodButton->setToolTip(QCoreApplication::translate("DockFft", "Center FFT around demodulator frequency", nullptr));
#endif // QT_CONFIG(tooltip)
        demodButton->setText(QCoreApplication::translate("DockFft", "Demod", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("DockFft", "FFT window", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("DockFft", "Window", nullptr));
        label_3->setText(QCoreApplication::translate("DockFft", "Colormap", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("DockFft", "The vertical time span on the waterfall.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("DockFft", "Time span", nullptr));
        peakLabel->setText(QCoreApplication::translate("DockFft", "Peak", nullptr));
#if QT_CONFIG(tooltip)
        zoomLevelLabel->setToolTip(QCoreApplication::translate("DockFft", "Current zoom level on the frequency axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        zoomLevelLabel->setStatusTip(QCoreApplication::translate("DockFft", "Current zoom level on the frequency axis", nullptr));
#endif // QT_CONFIG(statustip)
        zoomLevelLabel->setText(QCoreApplication::translate("DockFft", "1x", nullptr));
#if QT_CONFIG(tooltip)
        fftAvgLabel->setToolTip(QCoreApplication::translate("DockFft", "FFT averaging gain", nullptr));
#endif // QT_CONFIG(tooltip)
        fftAvgLabel->setText(QCoreApplication::translate("DockFft", "Averaging", nullptr));
        fftWinComboBox->setItemText(0, QCoreApplication::translate("DockFft", "Hamming", nullptr));
        fftWinComboBox->setItemText(1, QCoreApplication::translate("DockFft", "Hann", nullptr));
        fftWinComboBox->setItemText(2, QCoreApplication::translate("DockFft", "Blackman", nullptr));
        fftWinComboBox->setItemText(3, QCoreApplication::translate("DockFft", "Rectangular", nullptr));
        fftWinComboBox->setItemText(4, QCoreApplication::translate("DockFft", "Kaiser", nullptr));
        fftWinComboBox->setItemText(5, QCoreApplication::translate("DockFft", "Blackman-Harris", nullptr));
        fftWinComboBox->setItemText(6, QCoreApplication::translate("DockFft", "Bartlett", nullptr));
        fftWinComboBox->setItemText(7, QCoreApplication::translate("DockFft", "Flattop", nullptr));

#if QT_CONFIG(tooltip)
        fftWinComboBox->setToolTip(QCoreApplication::translate("DockFft", "FFT window", nullptr));
#endif // QT_CONFIG(tooltip)
        fftSizeLabel->setText(QCoreApplication::translate("DockFft", "FFT size", nullptr));
        fftSizeComboBox->setItemText(0, QCoreApplication::translate("DockFft", "1048576", nullptr));
        fftSizeComboBox->setItemText(1, QCoreApplication::translate("DockFft", "524288", nullptr));
        fftSizeComboBox->setItemText(2, QCoreApplication::translate("DockFft", "262144", nullptr));
        fftSizeComboBox->setItemText(3, QCoreApplication::translate("DockFft", "131072", nullptr));
        fftSizeComboBox->setItemText(4, QCoreApplication::translate("DockFft", "65536", nullptr));
        fftSizeComboBox->setItemText(5, QCoreApplication::translate("DockFft", "32768", nullptr));
        fftSizeComboBox->setItemText(6, QCoreApplication::translate("DockFft", "16384", nullptr));
        fftSizeComboBox->setItemText(7, QCoreApplication::translate("DockFft", "8192", nullptr));
        fftSizeComboBox->setItemText(8, QCoreApplication::translate("DockFft", "4096", nullptr));
        fftSizeComboBox->setItemText(9, QCoreApplication::translate("DockFft", "3840", nullptr));
        fftSizeComboBox->setItemText(10, QCoreApplication::translate("DockFft", "2048", nullptr));
        fftSizeComboBox->setItemText(11, QCoreApplication::translate("DockFft", "1024", nullptr));
        fftSizeComboBox->setItemText(12, QCoreApplication::translate("DockFft", "768", nullptr));
        fftSizeComboBox->setItemText(13, QCoreApplication::translate("DockFft", "512", nullptr));

#if QT_CONFIG(tooltip)
        fftSizeComboBox->setToolTip(QCoreApplication::translate("DockFft", "<html>Number of FFT points to calculate. Higher values will require more CPU time. This will not influence the number of points on the display since that parameter is adjusted automatically according to the display size.</html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        wfRangeSlider->setToolTip(QCoreApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        wfRangeSlider->setStatusTip(QCoreApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        lockButton->setToolTip(QCoreApplication::translate("DockFft", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lockButton->setStatusTip(QCoreApplication::translate("DockFft", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_CONFIG(statustip)
        lockButton->setText(QCoreApplication::translate("DockFft", "Lock", nullptr));
#if QT_CONFIG(tooltip)
        bandPlanCheckbox->setToolTip(QCoreApplication::translate("DockFft", "Enable Band Plan on bottom of spectrum", nullptr));
#endif // QT_CONFIG(tooltip)
        bandPlanCheckbox->setText(QCoreApplication::translate("DockFft", "Enable Band Plan", nullptr));
        fftRateLabel->setText(QCoreApplication::translate("DockFft", "Rate", nullptr));
#if QT_CONFIG(tooltip)
        peakDetectionButton->setToolTip(QCoreApplication::translate("DockFft", "Enable peak detection in FFT", nullptr));
#endif // QT_CONFIG(tooltip)
        peakDetectionButton->setText(QCoreApplication::translate("DockFft", "Detect", nullptr));
#if QT_CONFIG(tooltip)
        peakHoldButton->setToolTip(QCoreApplication::translate("DockFft", "Toggle peak hold in FFT", nullptr));
#endif // QT_CONFIG(tooltip)
        peakHoldButton->setText(QCoreApplication::translate("DockFft", "Hold", nullptr));
#if QT_CONFIG(tooltip)
        autoButton->setToolTip(QCoreApplication::translate("DockFft", "Automatic range setting for waterfall and FFT", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        autoButton->setStatusTip(QCoreApplication::translate("DockFft", "Automatic range setting for waterfall and FFT", nullptr));
#endif // QT_CONFIG(statustip)
        autoButton->setText(QCoreApplication::translate("DockFft", "Auto", nullptr));
#if QT_CONFIG(tooltip)
        fftNbSlider->setToolTip(QCoreApplication::translate("DockFft", "FFT noise blanker threshold", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class DockFft: public Ui_DockFft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKFFT_H
