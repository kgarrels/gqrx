/********************************************************************************
** Form generated from reading UI file 'dxc_options.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DXC_OPTIONS_H
#define UI_DXC_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DXCOptions
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_DXCSpottimeout;
    QLabel *label_DXCUsername;
    QLabel *label_DXCAddress;
    QLabel *label_DXCPort;
    QLineEdit *lineEdit_DXCPort;
    QLineEdit *lineEdit_DXCAddress;
    QLineEdit *lineEdit_DXCSpottimeout;
    QLineEdit *lineEdit_DXCUSername;
    QPushButton *pushButton_DXCDisconnect;
    QPushButton *pushButton_DXCConnect;
    QLabel *label_DXCFilter;
    QLineEdit *lineEdit_DXCFilter;
    QPlainTextEdit *plainTextEdit_DXCMonitor;

    void setupUi(QDialog *DXCOptions)
    {
        if (DXCOptions->objectName().isEmpty())
            DXCOptions->setObjectName(QString::fromUtf8("DXCOptions"));
        DXCOptions->resize(680, 439);
        gridLayout_2 = new QGridLayout(DXCOptions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(DXCOptions);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_DXCSpottimeout = new QLabel(groupBox);
        label_DXCSpottimeout->setObjectName(QString::fromUtf8("label_DXCSpottimeout"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_DXCSpottimeout->sizePolicy().hasHeightForWidth());
        label_DXCSpottimeout->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_DXCSpottimeout, 1, 0, 1, 2);

        label_DXCUsername = new QLabel(groupBox);
        label_DXCUsername->setObjectName(QString::fromUtf8("label_DXCUsername"));
        sizePolicy.setHeightForWidth(label_DXCUsername->sizePolicy().hasHeightForWidth());
        label_DXCUsername->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_DXCUsername, 2, 0, 1, 2);

        label_DXCAddress = new QLabel(groupBox);
        label_DXCAddress->setObjectName(QString::fromUtf8("label_DXCAddress"));
        sizePolicy.setHeightForWidth(label_DXCAddress->sizePolicy().hasHeightForWidth());
        label_DXCAddress->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_DXCAddress, 0, 0, 1, 1);

        label_DXCPort = new QLabel(groupBox);
        label_DXCPort->setObjectName(QString::fromUtf8("label_DXCPort"));
        sizePolicy.setHeightForWidth(label_DXCPort->sizePolicy().hasHeightForWidth());
        label_DXCPort->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_DXCPort, 0, 5, 1, 1);

        lineEdit_DXCPort = new QLineEdit(groupBox);
        lineEdit_DXCPort->setObjectName(QString::fromUtf8("lineEdit_DXCPort"));

        gridLayout->addWidget(lineEdit_DXCPort, 0, 6, 1, 1);

        lineEdit_DXCAddress = new QLineEdit(groupBox);
        lineEdit_DXCAddress->setObjectName(QString::fromUtf8("lineEdit_DXCAddress"));

        gridLayout->addWidget(lineEdit_DXCAddress, 0, 1, 1, 4);

        lineEdit_DXCSpottimeout = new QLineEdit(groupBox);
        lineEdit_DXCSpottimeout->setObjectName(QString::fromUtf8("lineEdit_DXCSpottimeout"));

        gridLayout->addWidget(lineEdit_DXCSpottimeout, 1, 4, 1, 1);

        lineEdit_DXCUSername = new QLineEdit(groupBox);
        lineEdit_DXCUSername->setObjectName(QString::fromUtf8("lineEdit_DXCUSername"));

        gridLayout->addWidget(lineEdit_DXCUSername, 2, 4, 1, 1);

        pushButton_DXCDisconnect = new QPushButton(groupBox);
        pushButton_DXCDisconnect->setObjectName(QString::fromUtf8("pushButton_DXCDisconnect"));
        pushButton_DXCDisconnect->setEnabled(false);

        gridLayout->addWidget(pushButton_DXCDisconnect, 3, 4, 1, 1);

        pushButton_DXCConnect = new QPushButton(groupBox);
        pushButton_DXCConnect->setObjectName(QString::fromUtf8("pushButton_DXCConnect"));

        gridLayout->addWidget(pushButton_DXCConnect, 3, 6, 1, 1);

        label_DXCFilter = new QLabel(groupBox);
        label_DXCFilter->setObjectName(QString::fromUtf8("label_DXCFilter"));

        gridLayout->addWidget(label_DXCFilter, 1, 5, 1, 1);

        lineEdit_DXCFilter = new QLineEdit(groupBox);
        lineEdit_DXCFilter->setObjectName(QString::fromUtf8("lineEdit_DXCFilter"));

        gridLayout->addWidget(lineEdit_DXCFilter, 1, 6, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        plainTextEdit_DXCMonitor = new QPlainTextEdit(DXCOptions);
        plainTextEdit_DXCMonitor->setObjectName(QString::fromUtf8("plainTextEdit_DXCMonitor"));
        plainTextEdit_DXCMonitor->setReadOnly(true);
        plainTextEdit_DXCMonitor->setTextInteractionFlags(Qt::TextSelectableByMouse);
        plainTextEdit_DXCMonitor->setMaximumBlockCount(240);

        gridLayout_2->addWidget(plainTextEdit_DXCMonitor, 1, 0, 1, 1);


        retranslateUi(DXCOptions);

        QMetaObject::connectSlotsByName(DXCOptions);
    } // setupUi

    void retranslateUi(QDialog *DXCOptions)
    {
        DXCOptions->setWindowTitle(QCoreApplication::translate("DXCOptions", "DXC Options", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DXCOptions", "DX Cluster Settings", nullptr));
        label_DXCSpottimeout->setText(QCoreApplication::translate("DXCOptions", "Spot Timeout/min:", nullptr));
        label_DXCUsername->setText(QCoreApplication::translate("DXCOptions", "Username:", nullptr));
        label_DXCAddress->setText(QCoreApplication::translate("DXCOptions", "Address:", nullptr));
        label_DXCPort->setText(QCoreApplication::translate("DXCOptions", "Port:", nullptr));
        lineEdit_DXCPort->setText(QCoreApplication::translate("DXCOptions", "7300", nullptr));
        lineEdit_DXCAddress->setText(QCoreApplication::translate("DXCOptions", "127.0.0.1", nullptr));
        lineEdit_DXCSpottimeout->setText(QCoreApplication::translate("DXCOptions", "10", nullptr));
        lineEdit_DXCUSername->setText(QCoreApplication::translate("DXCOptions", "nocall", nullptr));
        pushButton_DXCDisconnect->setText(QCoreApplication::translate("DXCOptions", "Disconnect", nullptr));
        pushButton_DXCConnect->setText(QCoreApplication::translate("DXCOptions", "Connect", nullptr));
        label_DXCFilter->setText(QCoreApplication::translate("DXCOptions", "Filter:", nullptr));
        lineEdit_DXCFilter->setPlaceholderText(QCoreApplication::translate("DXCOptions", "ex. CW or RTTY", nullptr));
        plainTextEdit_DXCMonitor->setDocumentTitle(QString());
        plainTextEdit_DXCMonitor->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class DXCOptions: public Ui_DXCOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DXC_OPTIONS_H
