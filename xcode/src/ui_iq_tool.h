/********************************************************************************
** Form generated from reading UI file 'iq_tool.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IQ_TOOL_H
#define UI_IQ_TOOL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CIqTool
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *recDirLabel;
    QLineEdit *recDirEdit;
    QPushButton *recDirButton;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *recButton;
    QPushButton *playButton;
    QSpacerItem *horizontalSpacer;
    QLabel *timeLabel;
    QSpacerItem *horizontalSpacer_2;
    QSlider *slider;
    QFrame *frame;

    void setupUi(QDialog *CIqTool)
    {
        if (CIqTool->objectName().isEmpty())
            CIqTool->setObjectName(QString::fromUtf8("CIqTool"));
        CIqTool->resize(482, 327);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CIqTool->sizePolicy().hasHeightForWidth());
        CIqTool->setSizePolicy(sizePolicy);
        CIqTool->setMinimumSize(QSize(0, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CIqTool->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CIqTool);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recDirLabel = new QLabel(CIqTool);
        recDirLabel->setObjectName(QString::fromUtf8("recDirLabel"));

        horizontalLayout->addWidget(recDirLabel);

        recDirEdit = new QLineEdit(CIqTool);
        recDirEdit->setObjectName(QString::fromUtf8("recDirEdit"));
        recDirEdit->setEnabled(true);

        horizontalLayout->addWidget(recDirEdit);

        recDirButton = new QPushButton(CIqTool);
        recDirButton->setObjectName(QString::fromUtf8("recDirButton"));
        recDirButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(recDirButton->sizePolicy().hasHeightForWidth());
        recDirButton->setSizePolicy(sizePolicy1);
        recDirButton->setAutoDefault(false);

        horizontalLayout->addWidget(recDirButton);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(CIqTool);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAlternatingRowColors(true);
        listWidget->setUniformItemSizes(true);

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        recButton = new QPushButton(CIqTool);
        recButton->setObjectName(QString::fromUtf8("recButton"));
        recButton->setEnabled(true);
        recButton->setMinimumSize(QSize(32, 32));
        recButton->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        recButton->setIcon(icon1);
        recButton->setCheckable(true);
        recButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(recButton);

        playButton = new QPushButton(CIqTool);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setMinimumSize(QSize(32, 32));
        playButton->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon2);
        playButton->setCheckable(true);
        playButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(playButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        timeLabel = new QLabel(CIqTool);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(timeLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        slider = new QSlider(CIqTool);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMaximum(600);
        slider->setSingleStep(10);
        slider->setPageStep(60);
        slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider);

        frame = new QFrame(CIqTool);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(frame);


        retranslateUi(CIqTool);

        QMetaObject::connectSlotsByName(CIqTool);
    } // setupUi

    void retranslateUi(QDialog *CIqTool)
    {
        CIqTool->setWindowTitle(QCoreApplication::translate("CIqTool", "I/Q recording and replay tool", nullptr));
        recDirLabel->setText(QCoreApplication::translate("CIqTool", "Location:", nullptr));
#if QT_CONFIG(tooltip)
        recDirEdit->setToolTip(QCoreApplication::translate("CIqTool", "Enter a different location or use the select button", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        recDirButton->setToolTip(QCoreApplication::translate("CIqTool", "Select a different location", nullptr));
#endif // QT_CONFIG(tooltip)
        recDirButton->setText(QCoreApplication::translate("CIqTool", "Select", nullptr));
#if QT_CONFIG(tooltip)
        recButton->setToolTip(QCoreApplication::translate("CIqTool", "Record I/Q samples to new file", nullptr));
#endif // QT_CONFIG(tooltip)
        recButton->setText(QCoreApplication::translate("CIqTool", "&Rec", nullptr));
#if QT_CONFIG(tooltip)
        playButton->setToolTip(QCoreApplication::translate("CIqTool", "Start playing selected file", nullptr));
#endif // QT_CONFIG(tooltip)
        playButton->setText(QCoreApplication::translate("CIqTool", "&Play", nullptr));
        timeLabel->setText(QCoreApplication::translate("CIqTool", "00:00:00 / 00:00:00", nullptr));
#if QT_CONFIG(tooltip)
        slider->setToolTip(QCoreApplication::translate("CIqTool", "Seek forward and backward in I/Q file", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class CIqTool: public Ui_CIqTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IQ_TOOL_H
