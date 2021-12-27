/********************************************************************************
** Form generated from reading UI file 'nb_options.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NB_OPTIONS_H
#define UI_NB_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CNbOptions
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *nb1Threshold;
    QDoubleSpinBox *nb2Threshold;
    QLabel *nb1Label;
    QLabel *nb2Label;

    void setupUi(QDialog *CNbOptions)
    {
        if (CNbOptions->objectName().isEmpty())
            CNbOptions->setObjectName(QString::fromUtf8("CNbOptions"));
        CNbOptions->resize(176, 105);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CNbOptions->setWindowIcon(icon);
        gridLayout = new QGridLayout(CNbOptions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nb1Threshold = new QDoubleSpinBox(CNbOptions);
        nb1Threshold->setObjectName(QString::fromUtf8("nb1Threshold"));
        nb1Threshold->setDecimals(1);
        nb1Threshold->setMinimum(1.000000000000000);
        nb1Threshold->setMaximum(20.000000000000000);
        nb1Threshold->setSingleStep(0.100000000000000);
        nb1Threshold->setValue(3.300000000000000);

        gridLayout->addWidget(nb1Threshold, 0, 1, 1, 1);

        nb2Threshold = new QDoubleSpinBox(CNbOptions);
        nb2Threshold->setObjectName(QString::fromUtf8("nb2Threshold"));
        nb2Threshold->setDecimals(1);
        nb2Threshold->setMaximum(15.000000000000000);
        nb2Threshold->setSingleStep(0.100000000000000);
        nb2Threshold->setValue(2.500000000000000);

        gridLayout->addWidget(nb2Threshold, 1, 1, 1, 1);

        nb1Label = new QLabel(CNbOptions);
        nb1Label->setObjectName(QString::fromUtf8("nb1Label"));
        nb1Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nb1Label, 0, 0, 1, 1);

        nb2Label = new QLabel(CNbOptions);
        nb2Label->setObjectName(QString::fromUtf8("nb2Label"));
        nb2Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nb2Label, 1, 0, 1, 1);


        retranslateUi(CNbOptions);

        QMetaObject::connectSlotsByName(CNbOptions);
    } // setupUi

    void retranslateUi(QDialog *CNbOptions)
    {
        CNbOptions->setWindowTitle(QCoreApplication::translate("CNbOptions", "Noise blanker options", nullptr));
        nb1Label->setText(QCoreApplication::translate("CNbOptions", "NB1 threshold", nullptr));
        nb2Label->setText(QCoreApplication::translate("CNbOptions", "NB2 threshold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CNbOptions: public Ui_CNbOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NB_OPTIONS_H
