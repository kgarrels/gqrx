/********************************************************************************
** Form generated from reading UI file 'ioconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOCONFIG_H
#define UI_IOCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CIoConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxInput;
    QFormLayout *formLayout;
    QLabel *inDevLabel1;
    QComboBox *inDevCombo;
    QLabel *inDevLabel2;
    QLabel *inSrLabel;
    QComboBox *inSrCombo;
    QLabel *loLabel;
    QDoubleSpinBox *loSpinBox;
    QLineEdit *inDevEdit;
    QDoubleSpinBox *bwSpinBox;
    QLabel *bwLabel;
    QLabel *label;
    QComboBox *decimCombo;
    QLabel *label_2;
    QLabel *sampRateLabel;
    QFrame *line;
    QGroupBox *groupBoxOutput;
    QFormLayout *formLayout_2;
    QLabel *outDevLabel;
    QComboBox *outDevCombo;
    QLabel *outSrLabel;
    QComboBox *outSrCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CIoConfig)
    {
        if (CIoConfig->objectName().isEmpty())
            CIoConfig->setObjectName(QString::fromUtf8("CIoConfig"));
        CIoConfig->resize(322, 438);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CIoConfig->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CIoConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxInput = new QGroupBox(CIoConfig);
        groupBoxInput->setObjectName(QString::fromUtf8("groupBoxInput"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        groupBoxInput->setFont(font);
        groupBoxInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBoxInput->setFlat(false);
        formLayout = new QFormLayout(groupBoxInput);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inDevLabel1 = new QLabel(groupBoxInput);
        inDevLabel1->setObjectName(QString::fromUtf8("inDevLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inDevLabel1->sizePolicy().hasHeightForWidth());
        inDevLabel1->setSizePolicy(sizePolicy);
        inDevLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, inDevLabel1);

        inDevCombo = new QComboBox(groupBoxInput);
        inDevCombo->setObjectName(QString::fromUtf8("inDevCombo"));
        inDevCombo->setEnabled(true);
        inDevCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        inDevCombo->setMinimumContentsLength(15);

        formLayout->setWidget(0, QFormLayout::FieldRole, inDevCombo);

        inDevLabel2 = new QLabel(groupBoxInput);
        inDevLabel2->setObjectName(QString::fromUtf8("inDevLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, inDevLabel2);

        inSrLabel = new QLabel(groupBoxInput);
        inSrLabel->setObjectName(QString::fromUtf8("inSrLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, inSrLabel);

        inSrCombo = new QComboBox(groupBoxInput);
        inSrCombo->setObjectName(QString::fromUtf8("inSrCombo"));
        inSrCombo->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, inSrCombo);

        loLabel = new QLabel(groupBoxInput);
        loLabel->setObjectName(QString::fromUtf8("loLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, loLabel);

        loSpinBox = new QDoubleSpinBox(groupBoxInput);
        loSpinBox->setObjectName(QString::fromUtf8("loSpinBox"));
        loSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        loSpinBox->setDecimals(6);
        loSpinBox->setMinimum(-500000.000000000000000);
        loSpinBox->setMaximum(500000.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, loSpinBox);

        inDevEdit = new QLineEdit(groupBoxInput);
        inDevEdit->setObjectName(QString::fromUtf8("inDevEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inDevEdit);

        bwSpinBox = new QDoubleSpinBox(groupBoxInput);
        bwSpinBox->setObjectName(QString::fromUtf8("bwSpinBox"));
        bwSpinBox->setDecimals(6);
        bwSpinBox->setMaximum(100.000000000000000);
        bwSpinBox->setSingleStep(0.100000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, bwSpinBox);

        bwLabel = new QLabel(groupBoxInput);
        bwLabel->setObjectName(QString::fromUtf8("bwLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, bwLabel);

        label = new QLabel(groupBoxInput);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        decimCombo = new QComboBox(groupBoxInput);
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->addItem(QString());
        decimCombo->setObjectName(QString::fromUtf8("decimCombo"));

        formLayout->setWidget(3, QFormLayout::FieldRole, decimCombo);

        label_2 = new QLabel(groupBoxInput);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        sampRateLabel = new QLabel(groupBoxInput);
        sampRateLabel->setObjectName(QString::fromUtf8("sampRateLabel"));
        sampRateLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, sampRateLabel);


        verticalLayout->addWidget(groupBoxInput);

        line = new QFrame(CIoConfig);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBoxOutput = new QGroupBox(CIoConfig);
        groupBoxOutput->setObjectName(QString::fromUtf8("groupBoxOutput"));
        formLayout_2 = new QFormLayout(groupBoxOutput);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outDevLabel = new QLabel(groupBoxOutput);
        outDevLabel->setObjectName(QString::fromUtf8("outDevLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, outDevLabel);

        outDevCombo = new QComboBox(groupBoxOutput);
        outDevCombo->addItem(QString());
        outDevCombo->setObjectName(QString::fromUtf8("outDevCombo"));
        outDevCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        outDevCombo->setMinimumContentsLength(15);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, outDevCombo);

        outSrLabel = new QLabel(groupBoxOutput);
        outSrLabel->setObjectName(QString::fromUtf8("outSrLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, outSrLabel);

        outSrCombo = new QComboBox(groupBoxOutput);
        outSrCombo->addItem(QString());
        outSrCombo->setObjectName(QString::fromUtf8("outSrCombo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, outSrCombo);


        verticalLayout->addWidget(groupBoxOutput);

        buttonBox = new QDialogButtonBox(CIoConfig);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(inDevCombo, inDevEdit);
        QWidget::setTabOrder(inDevEdit, inSrCombo);
        QWidget::setTabOrder(inSrCombo, decimCombo);
        QWidget::setTabOrder(decimCombo, bwSpinBox);
        QWidget::setTabOrder(bwSpinBox, loSpinBox);
        QWidget::setTabOrder(loSpinBox, outDevCombo);
        QWidget::setTabOrder(outDevCombo, outSrCombo);

        retranslateUi(CIoConfig);
        QObject::connect(buttonBox, SIGNAL(accepted()), CIoConfig, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CIoConfig, SLOT(reject()));

        QMetaObject::connectSlotsByName(CIoConfig);
    } // setupUi

    void retranslateUi(QDialog *CIoConfig)
    {
        CIoConfig->setWindowTitle(QCoreApplication::translate("CIoConfig", "Configure I/O devices", nullptr));
        groupBoxInput->setTitle(QCoreApplication::translate("CIoConfig", "I/Q input", nullptr));
        inDevLabel1->setText(QCoreApplication::translate("CIoConfig", "Device", nullptr));
#if QT_CONFIG(tooltip)
        inDevCombo->setToolTip(QCoreApplication::translate("CIoConfig", "Select an input device", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        inDevLabel2->setToolTip(QCoreApplication::translate("CIoConfig", "Device arguments", nullptr));
#endif // QT_CONFIG(tooltip)
        inDevLabel2->setText(QCoreApplication::translate("CIoConfig", "Device string", nullptr));
        inSrLabel->setText(QCoreApplication::translate("CIoConfig", "Input rate", nullptr));
#if QT_CONFIG(tooltip)
        inSrCombo->setToolTip(QCoreApplication::translate("CIoConfig", "Select the sample rate of the input source", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        loLabel->setToolTip(QCoreApplication::translate("CIoConfig", "LNB LO frequency. Use negative frequency for upconverters.", nullptr));
#endif // QT_CONFIG(tooltip)
        loLabel->setText(QCoreApplication::translate("CIoConfig", "LNB LO", nullptr));
#if QT_CONFIG(tooltip)
        loSpinBox->setToolTip(QCoreApplication::translate("CIoConfig", "LNB LO frequency. Use negative frequency for upconverters.", nullptr));
#endif // QT_CONFIG(tooltip)
        loSpinBox->setSuffix(QCoreApplication::translate("CIoConfig", " MHz", nullptr));
#if QT_CONFIG(tooltip)
        inDevEdit->setToolTip(QCoreApplication::translate("CIoConfig", "<html><head/><body><p>The device argument is a delimited string used to locate devices on your system. Use the device id or name (if applicable) to specify a certain device or list of devices. If left blank, the first device found will be used.</p><p>Examples (some arguments may be optional):</p><p>fcd=0<br/>rtl=0<br/>rtl=0,rtl_xtal=28.80001e6,tuner_xtal=26e6,buffers=64 ...<br/>rtl_tcp=127.0.0.1:1234,psize=16384<br/>plutosdr,uri=usb:6.36.5<br/>file=/path/to/file.ext,freq=428e6,rate=1e6,repeat=true,throttle=true ... </p><p>You can test the device strings in gnuradio-companion.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        inDevEdit->setText(QString());
#if QT_CONFIG(tooltip)
        bwSpinBox->setToolTip(QCoreApplication::translate("CIoConfig", "Analog bandwidth (leave at 0 for default)", nullptr));
#endif // QT_CONFIG(tooltip)
        bwSpinBox->setSuffix(QCoreApplication::translate("CIoConfig", " MHz", nullptr));
#if QT_CONFIG(tooltip)
        bwLabel->setToolTip(QCoreApplication::translate("CIoConfig", "Analog bandwidth (leave at 0 for default)", nullptr));
#endif // QT_CONFIG(tooltip)
        bwLabel->setText(QCoreApplication::translate("CIoConfig", "Bandwidth", nullptr));
        label->setText(QCoreApplication::translate("CIoConfig", "Decimation", nullptr));
        decimCombo->setItemText(0, QCoreApplication::translate("CIoConfig", "None", nullptr));
        decimCombo->setItemText(1, QCoreApplication::translate("CIoConfig", "2", nullptr));
        decimCombo->setItemText(2, QCoreApplication::translate("CIoConfig", "4", nullptr));
        decimCombo->setItemText(3, QCoreApplication::translate("CIoConfig", "8", nullptr));
        decimCombo->setItemText(4, QCoreApplication::translate("CIoConfig", "16", nullptr));
        decimCombo->setItemText(5, QCoreApplication::translate("CIoConfig", "32", nullptr));
        decimCombo->setItemText(6, QCoreApplication::translate("CIoConfig", "64", nullptr));
        decimCombo->setItemText(7, QCoreApplication::translate("CIoConfig", "128", nullptr));
        decimCombo->setItemText(8, QCoreApplication::translate("CIoConfig", "256", nullptr));
        decimCombo->setItemText(9, QCoreApplication::translate("CIoConfig", "512", nullptr));

#if QT_CONFIG(tooltip)
        decimCombo->setToolTip(QCoreApplication::translate("CIoConfig", "Input decimation", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("CIoConfig", "Sample rate", nullptr));
#if QT_CONFIG(tooltip)
        sampRateLabel->setToolTip(QCoreApplication::translate("CIoConfig", "The sample rate after decimation", nullptr));
#endif // QT_CONFIG(tooltip)
        sampRateLabel->setText(QCoreApplication::translate("CIoConfig", " 0 Msps", nullptr));
        groupBoxOutput->setTitle(QCoreApplication::translate("CIoConfig", "Audio output", nullptr));
        outDevLabel->setText(QCoreApplication::translate("CIoConfig", "Device", nullptr));
        outDevCombo->setItemText(0, QCoreApplication::translate("CIoConfig", "Default", nullptr));

#if QT_CONFIG(tooltip)
        outDevCombo->setToolTip(QCoreApplication::translate("CIoConfig", "Select which device to use for audio output.\n"
"Leave it at default unless you know what you are doing.", nullptr));
#endif // QT_CONFIG(tooltip)
        outSrLabel->setText(QCoreApplication::translate("CIoConfig", "Sample rate", nullptr));
        outSrCombo->setItemText(0, QCoreApplication::translate("CIoConfig", "48 kHz", nullptr));

#if QT_CONFIG(tooltip)
        outSrCombo->setToolTip(QCoreApplication::translate("CIoConfig", "Select the audio sample rate", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class CIoConfig: public Ui_CIoConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOCONFIG_H
