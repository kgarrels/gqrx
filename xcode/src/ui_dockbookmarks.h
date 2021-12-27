/********************************************************************************
** Form generated from reading UI file 'dockbookmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKBOOKMARKS_H
#define UI_DOCKBOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qtgui/bookmarkstaglist.h"

QT_BEGIN_NAMESPACE

class Ui_DockBookmarks
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTableView *tableViewFrequencyList;
    BookmarksTagList *tableWidgetTagList;

    void setupUi(QDockWidget *DockBookmarks)
    {
        if (DockBookmarks->objectName().isEmpty())
            DockBookmarks->setObjectName(QString::fromUtf8("DockBookmarks"));
        DockBookmarks->resize(585, 248);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockBookmarks->sizePolicy().hasHeightForWidth());
        DockBookmarks->setSizePolicy(sizePolicy);
        DockBookmarks->setMinimumSize(QSize(322, 117));
        DockBookmarks->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(dockWidgetContents);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tableViewFrequencyList = new QTableView(splitter);
        tableViewFrequencyList->setObjectName(QString::fromUtf8("tableViewFrequencyList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableViewFrequencyList->sizePolicy().hasHeightForWidth());
        tableViewFrequencyList->setSizePolicy(sizePolicy1);
        tableViewFrequencyList->setMinimumSize(QSize(100, 10));
        tableViewFrequencyList->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableViewFrequencyList->setAlternatingRowColors(true);
        tableViewFrequencyList->setSortingEnabled(false);
        splitter->addWidget(tableViewFrequencyList);
        tableWidgetTagList = new BookmarksTagList(splitter);
        if (tableWidgetTagList->columnCount() < 2)
            tableWidgetTagList->setColumnCount(2);
        tableWidgetTagList->setObjectName(QString::fromUtf8("tableWidgetTagList"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidgetTagList->sizePolicy().hasHeightForWidth());
        tableWidgetTagList->setSizePolicy(sizePolicy2);
        tableWidgetTagList->setMinimumSize(QSize(100, 0));
        tableWidgetTagList->setMaximumSize(QSize(16777215, 16777215));
        tableWidgetTagList->setBaseSize(QSize(0, 0));
        tableWidgetTagList->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tableWidgetTagList->setAlternatingRowColors(true);
        tableWidgetTagList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetTagList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetTagList->setColumnCount(2);
        splitter->addWidget(tableWidgetTagList);
        tableWidgetTagList->horizontalHeader()->setVisible(false);
        tableWidgetTagList->horizontalHeader()->setMinimumSectionSize(18);
        tableWidgetTagList->horizontalHeader()->setDefaultSectionSize(30);
        tableWidgetTagList->horizontalHeader()->setStretchLastSection(true);
        tableWidgetTagList->verticalHeader()->setVisible(false);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        DockBookmarks->setWidget(dockWidgetContents);

        retranslateUi(DockBookmarks);

        QMetaObject::connectSlotsByName(DockBookmarks);
    } // setupUi

    void retranslateUi(QDockWidget *DockBookmarks)
    {
        DockBookmarks->setWindowTitle(QCoreApplication::translate("DockBookmarks", "Bookmarks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockBookmarks: public Ui_DockBookmarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKBOOKMARKS_H
