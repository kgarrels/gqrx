/********************************************************************************
** Form generated from reading UI file 'demod_options.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOD_OPTIONS_H
#define UI_DEMOD_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDemodOptions
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *demodOptions;
    QWidget *demodNoOpt;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *demodFmOpt;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *pagedemodFormLayout2;
    QLabel *maxdevLabel;
    QComboBox *maxdevSelector;
    QLabel *emphLabel;
    QComboBox *emphSelector;
    QWidget *demodAmOpt;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *dcrCheckBox;
    QWidget *page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *cwOffsetSpin;
    QWidget *demodAmSyncOpt;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *pagedemodFormLayout3;
    QLabel *pllBwLabel;
    QComboBox *pllBwSelector;
    QCheckBox *syncdcrCheckBox;

    void setupUi(QDialog *CDemodOptions)
    {
        if (CDemodOptions->objectName().isEmpty())
            CDemodOptions->setObjectName(QString::fromUtf8("CDemodOptions"));
        CDemodOptions->resize(228, 110);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CDemodOptions->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CDemodOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        demodOptions = new QStackedWidget(CDemodOptions);
        demodOptions->setObjectName(QString::fromUtf8("demodOptions"));
        demodOptions->setMinimumSize(QSize(0, 72));
        demodNoOpt = new QWidget();
        demodNoOpt->setObjectName(QString::fromUtf8("demodNoOpt"));
        horizontalLayout = new QHBoxLayout(demodNoOpt);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(demodNoOpt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        demodOptions->addWidget(demodNoOpt);
        demodFmOpt = new QWidget();
        demodFmOpt->setObjectName(QString::fromUtf8("demodFmOpt"));
        verticalLayout_2 = new QVBoxLayout(demodFmOpt);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pagedemodFormLayout2 = new QFormLayout();
        pagedemodFormLayout2->setObjectName(QString::fromUtf8("pagedemodFormLayout2"));
        pagedemodFormLayout2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pagedemodFormLayout2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pagedemodFormLayout2->setHorizontalSpacing(10);
        pagedemodFormLayout2->setVerticalSpacing(5);
        pagedemodFormLayout2->setContentsMargins(5, -1, 5, 5);
        maxdevLabel = new QLabel(demodFmOpt);
        maxdevLabel->setObjectName(QString::fromUtf8("maxdevLabel"));
        maxdevLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pagedemodFormLayout2->setWidget(0, QFormLayout::LabelRole, maxdevLabel);

        maxdevSelector = new QComboBox(demodFmOpt);
        maxdevSelector->addItem(QString());
        maxdevSelector->addItem(QString());
        maxdevSelector->addItem(QString());
        maxdevSelector->addItem(QString());
        maxdevSelector->setObjectName(QString::fromUtf8("maxdevSelector"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxdevSelector->sizePolicy().hasHeightForWidth());
        maxdevSelector->setSizePolicy(sizePolicy);
        maxdevSelector->setMinimumSize(QSize(0, 24));

        pagedemodFormLayout2->setWidget(0, QFormLayout::FieldRole, maxdevSelector);

        emphLabel = new QLabel(demodFmOpt);
        emphLabel->setObjectName(QString::fromUtf8("emphLabel"));
        emphLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pagedemodFormLayout2->setWidget(1, QFormLayout::LabelRole, emphLabel);

        emphSelector = new QComboBox(demodFmOpt);
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->addItem(QString());
        emphSelector->setObjectName(QString::fromUtf8("emphSelector"));
        sizePolicy.setHeightForWidth(emphSelector->sizePolicy().hasHeightForWidth());
        emphSelector->setSizePolicy(sizePolicy);
        emphSelector->setMinimumSize(QSize(0, 24));
        emphSelector->setEditable(false);

        pagedemodFormLayout2->setWidget(1, QFormLayout::FieldRole, emphSelector);


        verticalLayout_2->addLayout(pagedemodFormLayout2);

        demodOptions->addWidget(demodFmOpt);
        demodAmOpt = new QWidget();
        demodAmOpt->setObjectName(QString::fromUtf8("demodAmOpt"));
        verticalLayout_3 = new QVBoxLayout(demodAmOpt);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dcrCheckBox = new QCheckBox(demodAmOpt);
        dcrCheckBox->setObjectName(QString::fromUtf8("dcrCheckBox"));
        dcrCheckBox->setChecked(true);

        verticalLayout_3->addWidget(dcrCheckBox);

        demodOptions->addWidget(demodAmOpt);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 161, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cwOffsetSpin = new QSpinBox(layoutWidget);
        cwOffsetSpin->setObjectName(QString::fromUtf8("cwOffsetSpin"));
        cwOffsetSpin->setMaximum(2000);
        cwOffsetSpin->setValue(700);

        horizontalLayout_2->addWidget(cwOffsetSpin);

        demodOptions->addWidget(page);
        demodAmSyncOpt = new QWidget();
        demodAmSyncOpt->setObjectName(QString::fromUtf8("demodAmSyncOpt"));
        verticalLayout_4 = new QVBoxLayout(demodAmSyncOpt);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pagedemodFormLayout3 = new QFormLayout();
        pagedemodFormLayout3->setObjectName(QString::fromUtf8("pagedemodFormLayout3"));
        pagedemodFormLayout3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pagedemodFormLayout3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pagedemodFormLayout3->setHorizontalSpacing(10);
        pagedemodFormLayout3->setVerticalSpacing(5);
        pagedemodFormLayout3->setContentsMargins(5, -1, 5, 5);
        pllBwLabel = new QLabel(demodAmSyncOpt);
        pllBwLabel->setObjectName(QString::fromUtf8("pllBwLabel"));
        pllBwLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        pagedemodFormLayout3->setWidget(0, QFormLayout::LabelRole, pllBwLabel);

        pllBwSelector = new QComboBox(demodAmSyncOpt);
        pllBwSelector->addItem(QString());
        pllBwSelector->addItem(QString());
        pllBwSelector->addItem(QString());
        pllBwSelector->setObjectName(QString::fromUtf8("pllBwSelector"));
        sizePolicy.setHeightForWidth(pllBwSelector->sizePolicy().hasHeightForWidth());
        pllBwSelector->setSizePolicy(sizePolicy);
        pllBwSelector->setMinimumSize(QSize(0, 24));

        pagedemodFormLayout3->setWidget(0, QFormLayout::FieldRole, pllBwSelector);

        syncdcrCheckBox = new QCheckBox(demodAmSyncOpt);
        syncdcrCheckBox->setObjectName(QString::fromUtf8("syncdcrCheckBox"));
        syncdcrCheckBox->setChecked(true);

        pagedemodFormLayout3->setWidget(1, QFormLayout::LabelRole, syncdcrCheckBox);


        verticalLayout_4->addLayout(pagedemodFormLayout3);

        demodOptions->addWidget(demodAmSyncOpt);

        verticalLayout->addWidget(demodOptions);


        retranslateUi(CDemodOptions);

        demodOptions->setCurrentIndex(0);
        maxdevSelector->setCurrentIndex(0);
        emphSelector->setCurrentIndex(3);
        pllBwSelector->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CDemodOptions);
    } // setupUi

    void retranslateUi(QDialog *CDemodOptions)
    {
        CDemodOptions->setWindowTitle(QCoreApplication::translate("CDemodOptions", "Mode options", nullptr));
        label->setText(QCoreApplication::translate("CDemodOptions", "No options for\n"
"this demodulator", nullptr));
        maxdevLabel->setText(QCoreApplication::translate("CDemodOptions", "Max dev", nullptr));
        maxdevSelector->setItemText(0, QCoreApplication::translate("CDemodOptions", "Voice (2.5 kHz)", nullptr));
        maxdevSelector->setItemText(1, QCoreApplication::translate("CDemodOptions", "Voice (5 kHz)", nullptr));
        maxdevSelector->setItemText(2, QCoreApplication::translate("CDemodOptions", "APT (17 kHz)", nullptr));
        maxdevSelector->setItemText(3, QCoreApplication::translate("CDemodOptions", "APT (25 kHz)", nullptr));

#if QT_CONFIG(tooltip)
        maxdevSelector->setToolTip(QCoreApplication::translate("CDemodOptions", "Maximum FM deviation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        maxdevSelector->setStatusTip(QCoreApplication::translate("CDemodOptions", "Maximum FM deviation", nullptr));
#endif // QT_CONFIG(statustip)
        emphLabel->setText(QCoreApplication::translate("CDemodOptions", "Tau", nullptr));
        emphSelector->setItemText(0, QCoreApplication::translate("CDemodOptions", "Off", nullptr));
        emphSelector->setItemText(1, QCoreApplication::translate("CDemodOptions", "25 \316\274s", nullptr));
        emphSelector->setItemText(2, QCoreApplication::translate("CDemodOptions", "50 \316\274s", nullptr));
        emphSelector->setItemText(3, QCoreApplication::translate("CDemodOptions", "75 \316\274s", nullptr));
        emphSelector->setItemText(4, QCoreApplication::translate("CDemodOptions", "100 \316\274s", nullptr));
        emphSelector->setItemText(5, QCoreApplication::translate("CDemodOptions", "250 \316\274s", nullptr));
        emphSelector->setItemText(6, QCoreApplication::translate("CDemodOptions", "530 \316\274s", nullptr));
        emphSelector->setItemText(7, QCoreApplication::translate("CDemodOptions", "1 ms", nullptr));

#if QT_CONFIG(tooltip)
        emphSelector->setToolTip(QCoreApplication::translate("CDemodOptions", "Time constant for the FM de-emphasis IIR filter.\n"
"For narrow band FM use 530 \316\274s.\n"
"50 \316\274s and 75 \316\274s are used for broadcast FM depending on region.\n"
"For digital modes it is best to switch it off.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        emphSelector->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        dcrCheckBox->setToolTip(QCoreApplication::translate("CDemodOptions", "Enable/disable DC removal.", nullptr));
#endif // QT_CONFIG(tooltip)
        dcrCheckBox->setText(QCoreApplication::translate("CDemodOptions", "DCR", nullptr));
        label_2->setText(QCoreApplication::translate("CDemodOptions", "CW offset", nullptr));
        cwOffsetSpin->setSuffix(QCoreApplication::translate("CDemodOptions", " Hz", nullptr));
        pllBwLabel->setText(QCoreApplication::translate("CDemodOptions", "PLL", nullptr));
        pllBwSelector->setItemText(0, QCoreApplication::translate("CDemodOptions", "Fast", nullptr));
        pllBwSelector->setItemText(1, QCoreApplication::translate("CDemodOptions", "Medium", nullptr));
        pllBwSelector->setItemText(2, QCoreApplication::translate("CDemodOptions", "Slow", nullptr));

#if QT_CONFIG(tooltip)
        pllBwSelector->setToolTip(QCoreApplication::translate("CDemodOptions", "Carrier tracking PLL. Weak, noisy or fading signals may\n"
"benefit from a slower PLL. A slower PLL will take longer\n"
"to react to changes in the carrier frequency however.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pllBwSelector->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        syncdcrCheckBox->setToolTip(QCoreApplication::translate("CDemodOptions", "Enable/disable DC removal.", nullptr));
#endif // QT_CONFIG(tooltip)
        syncdcrCheckBox->setText(QCoreApplication::translate("CDemodOptions", "DCR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CDemodOptions: public Ui_CDemodOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOD_OPTIONS_H
