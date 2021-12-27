/********************************************************************************
** Form generated from reading UI file 'dockrds.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKRDS_H
#define UI_DOCKRDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockRDS
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *station_name;
    QLabel *label_3;
    QLabel *program_type;
    QLabel *label_4;
    QLabel *program_information;
    QLabel *label_5;
    QLabel *radiotext;
    QLabel *label_6;
    QLabel *clocktime;
    QLabel *label_7;
    QLabel *alt_freq;
    QLabel *label_2;
    QLabel *flags;
    QCheckBox *rdsCheckbox;

    void setupUi(QDockWidget *DockRDS)
    {
        if (DockRDS->objectName().isEmpty())
            DockRDS->setObjectName(QString::fromUtf8("DockRDS"));
        DockRDS->setEnabled(true);
        DockRDS->resize(215, 220);
        DockRDS->setMinimumSize(QSize(89, 104));
        DockRDS->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 205, 201));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        station_name = new QLabel(scrollAreaWidgetContents);
        station_name->setObjectName(QString::fromUtf8("station_name"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(station_name->sizePolicy().hasHeightForWidth());
        station_name->setSizePolicy(sizePolicy);
        station_name->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, station_name);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        program_type = new QLabel(scrollAreaWidgetContents);
        program_type->setObjectName(QString::fromUtf8("program_type"));
        sizePolicy.setHeightForWidth(program_type->sizePolicy().hasHeightForWidth());
        program_type->setSizePolicy(sizePolicy);
        program_type->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, program_type);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        program_information = new QLabel(scrollAreaWidgetContents);
        program_information->setObjectName(QString::fromUtf8("program_information"));
        sizePolicy.setHeightForWidth(program_information->sizePolicy().hasHeightForWidth());
        program_information->setSizePolicy(sizePolicy);
        program_information->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, program_information);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        radiotext = new QLabel(scrollAreaWidgetContents);
        radiotext->setObjectName(QString::fromUtf8("radiotext"));
        sizePolicy.setHeightForWidth(radiotext->sizePolicy().hasHeightForWidth());
        radiotext->setSizePolicy(sizePolicy);
        radiotext->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(4, QFormLayout::FieldRole, radiotext);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        clocktime = new QLabel(scrollAreaWidgetContents);
        clocktime->setObjectName(QString::fromUtf8("clocktime"));
        sizePolicy.setHeightForWidth(clocktime->sizePolicy().hasHeightForWidth());
        clocktime->setSizePolicy(sizePolicy);
        clocktime->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(5, QFormLayout::FieldRole, clocktime);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        alt_freq = new QLabel(scrollAreaWidgetContents);
        alt_freq->setObjectName(QString::fromUtf8("alt_freq"));
        sizePolicy.setHeightForWidth(alt_freq->sizePolicy().hasHeightForWidth());
        alt_freq->setSizePolicy(sizePolicy);
        alt_freq->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(6, QFormLayout::FieldRole, alt_freq);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_2);

        flags = new QLabel(scrollAreaWidgetContents);
        flags->setObjectName(QString::fromUtf8("flags"));
        sizePolicy.setHeightForWidth(flags->sizePolicy().hasHeightForWidth());
        flags->setSizePolicy(sizePolicy);
        flags->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(7, QFormLayout::FieldRole, flags);

        rdsCheckbox = new QCheckBox(scrollAreaWidgetContents);
        rdsCheckbox->setObjectName(QString::fromUtf8("rdsCheckbox"));
        sizePolicy.setHeightForWidth(rdsCheckbox->sizePolicy().hasHeightForWidth());
        rdsCheckbox->setSizePolicy(sizePolicy);
        rdsCheckbox->setMouseTracking(true);
        rdsCheckbox->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(0, QFormLayout::SpanningRole, rdsCheckbox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        DockRDS->setWidget(dockWidgetContents);

        retranslateUi(DockRDS);

        QMetaObject::connectSlotsByName(DockRDS);
    } // setupUi

    void retranslateUi(QDockWidget *DockRDS)
    {
        DockRDS->setWindowTitle(QCoreApplication::translate("DockRDS", "RDS", nullptr));
        label->setText(QCoreApplication::translate("DockRDS", "Station Name:", nullptr));
        station_name->setText(QString());
        label_3->setText(QCoreApplication::translate("DockRDS", "Program Type:", nullptr));
        program_type->setText(QString());
        label_4->setText(QCoreApplication::translate("DockRDS", "Program ID:", nullptr));
        program_information->setText(QString());
        label_5->setText(QCoreApplication::translate("DockRDS", "Radio Text:", nullptr));
        radiotext->setText(QString());
        label_6->setText(QCoreApplication::translate("DockRDS", "Clock Time:", nullptr));
        clocktime->setText(QString());
        label_7->setText(QCoreApplication::translate("DockRDS", "Alt. Frequencies:", nullptr));
        alt_freq->setText(QString());
        label_2->setText(QCoreApplication::translate("DockRDS", "Flags:", nullptr));
        flags->setText(QString());
#if QT_CONFIG(tooltip)
        rdsCheckbox->setToolTip(QCoreApplication::translate("DockRDS", "Enable or disable decoding of RDS data", nullptr));
#endif // QT_CONFIG(tooltip)
        rdsCheckbox->setText(QCoreApplication::translate("DockRDS", "Enable RDS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockRDS: public Ui_DockRDS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKRDS_H
