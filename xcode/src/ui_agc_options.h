/********************************************************************************
** Form generated from reading UI file 'agc_options.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGC_OPTIONS_H
#define UI_AGC_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_CAgcOptions
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label3;
    QLabel *label2;
    QSlider *slopeSlider;
    QLabel *thresholdLabel;
    QLabel *label4;
    QPushButton *hangButton;
    QLabel *gainLabel;
    QSlider *decaySlider;
    QLabel *decayLabel;
    QSlider *gainSlider;
    QLabel *label1;
    QLabel *slopeLabel;
    QLabel *label5;
    QSlider *thresholdSlider;

    void setupUi(QDialog *CAgcOptions)
    {
        if (CAgcOptions->objectName().isEmpty())
            CAgcOptions->setObjectName(QString::fromUtf8("CAgcOptions"));
        CAgcOptions->resize(263, 197);
        CAgcOptions->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CAgcOptions->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(CAgcOptions);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(CAgcOptions);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(5);
        label3 = new QLabel(groupBox);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setEnabled(false);
        label3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label3, 4, 0, 1, 1);

        label2 = new QLabel(groupBox);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label2, 2, 0, 1, 1);

        slopeSlider = new QSlider(groupBox);
        slopeSlider->setObjectName(QString::fromUtf8("slopeSlider"));
        slopeSlider->setEnabled(false);
        slopeSlider->setFocusPolicy(Qt::StrongFocus);
        slopeSlider->setMaximum(10);
        slopeSlider->setPageStep(1);
        slopeSlider->setValue(0);
        slopeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slopeSlider, 4, 1, 1, 1);

        thresholdLabel = new QLabel(groupBox);
        thresholdLabel->setObjectName(QString::fromUtf8("thresholdLabel"));
        thresholdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(thresholdLabel, 2, 2, 1, 1);

        label4 = new QLabel(groupBox);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setEnabled(false);
        label4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label4, 5, 0, 1, 1);

        hangButton = new QPushButton(groupBox);
        hangButton->setObjectName(QString::fromUtf8("hangButton"));
        hangButton->setCheckable(true);
        hangButton->setAutoDefault(false);
        hangButton->setFlat(false);

        gridLayout->addWidget(hangButton, 6, 1, 1, 1);

        gainLabel = new QLabel(groupBox);
        gainLabel->setObjectName(QString::fromUtf8("gainLabel"));
        gainLabel->setEnabled(false);
        gainLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(gainLabel, 0, 2, 1, 1);

        decaySlider = new QSlider(groupBox);
        decaySlider->setObjectName(QString::fromUtf8("decaySlider"));
        decaySlider->setEnabled(false);
        decaySlider->setFocusPolicy(Qt::StrongFocus);
        decaySlider->setMinimum(50);
        decaySlider->setMaximum(5000);
        decaySlider->setSingleStep(10);
        decaySlider->setPageStep(50);
        decaySlider->setValue(500);
        decaySlider->setSliderPosition(500);
        decaySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(decaySlider, 5, 1, 1, 1);

        decayLabel = new QLabel(groupBox);
        decayLabel->setObjectName(QString::fromUtf8("decayLabel"));
        decayLabel->setEnabled(false);
        decayLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(decayLabel, 5, 2, 1, 1);

        gainSlider = new QSlider(groupBox);
        gainSlider->setObjectName(QString::fromUtf8("gainSlider"));
        gainSlider->setEnabled(false);
        gainSlider->setFocusPolicy(Qt::StrongFocus);
        gainSlider->setMaximum(100);
        gainSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gainSlider, 0, 1, 1, 1);

        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setEnabled(false);
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        slopeLabel = new QLabel(groupBox);
        slopeLabel->setObjectName(QString::fromUtf8("slopeLabel"));
        slopeLabel->setEnabled(false);
        slopeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(slopeLabel, 4, 2, 1, 1);

        label5 = new QLabel(groupBox);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label5, 6, 0, 1, 1);

        thresholdSlider = new QSlider(groupBox);
        thresholdSlider->setObjectName(QString::fromUtf8("thresholdSlider"));
        thresholdSlider->setFocusPolicy(Qt::StrongFocus);
        thresholdSlider->setMinimum(-160);
        thresholdSlider->setMaximum(0);
        thresholdSlider->setValue(-100);
        thresholdSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(thresholdSlider, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        QWidget::setTabOrder(gainSlider, thresholdSlider);
        QWidget::setTabOrder(thresholdSlider, slopeSlider);
        QWidget::setTabOrder(slopeSlider, decaySlider);
        QWidget::setTabOrder(decaySlider, hangButton);

        retranslateUi(CAgcOptions);

        QMetaObject::connectSlotsByName(CAgcOptions);
    } // setupUi

    void retranslateUi(QDialog *CAgcOptions)
    {
        CAgcOptions->setWindowTitle(QCoreApplication::translate("CAgcOptions", "AGC Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CAgcOptions", "AGC settings", nullptr));
        label3->setText(QCoreApplication::translate("CAgcOptions", "Slope", nullptr));
        label2->setText(QCoreApplication::translate("CAgcOptions", "Threshold", nullptr));
#if QT_CONFIG(tooltip)
        slopeSlider->setToolTip(QCoreApplication::translate("CAgcOptions", "AGC slope", nullptr));
#endif // QT_CONFIG(tooltip)
        thresholdLabel->setText(QCoreApplication::translate("CAgcOptions", "-100 dB", nullptr));
        label4->setText(QCoreApplication::translate("CAgcOptions", "Decay", nullptr));
#if QT_CONFIG(tooltip)
        hangButton->setToolTip(QCoreApplication::translate("CAgcOptions", "Enable / disable AGC hang", nullptr));
#endif // QT_CONFIG(tooltip)
        hangButton->setText(QCoreApplication::translate("CAgcOptions", "Disabled", nullptr));
#if QT_CONFIG(tooltip)
        gainLabel->setToolTip(QCoreApplication::translate("CAgcOptions", "Manual gain. Used when AGC is switched off", nullptr));
#endif // QT_CONFIG(tooltip)
        gainLabel->setText(QCoreApplication::translate("CAgcOptions", "0 dB", nullptr));
#if QT_CONFIG(tooltip)
        decaySlider->setToolTip(QCoreApplication::translate("CAgcOptions", "AGC decay time", nullptr));
#endif // QT_CONFIG(tooltip)
        decayLabel->setText(QCoreApplication::translate("CAgcOptions", "500 ms", nullptr));
#if QT_CONFIG(tooltip)
        gainSlider->setToolTip(QCoreApplication::translate("CAgcOptions", "Manual gain. Used when AGC is switched off", nullptr));
#endif // QT_CONFIG(tooltip)
        label1->setText(QCoreApplication::translate("CAgcOptions", "Gain", nullptr));
        slopeLabel->setText(QCoreApplication::translate("CAgcOptions", "0 dB", nullptr));
        label5->setText(QCoreApplication::translate("CAgcOptions", "Hang", nullptr));
#if QT_CONFIG(tooltip)
        thresholdSlider->setToolTip(QCoreApplication::translate("CAgcOptions", "AGC threshold (aka. knee)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class CAgcOptions: public Ui_CAgcOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGC_OPTIONS_H
