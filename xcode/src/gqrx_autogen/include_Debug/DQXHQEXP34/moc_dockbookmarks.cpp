/****************************************************************************
** Meta object code from reading C++ file 'dockbookmarks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/qtgui/dockbookmarks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockbookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComboBoxDelegateModulation_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboBoxDelegateModulation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboBoxDelegateModulation_t qt_meta_stringdata_ComboBoxDelegateModulation = {
    {
QT_MOC_LITERAL(0, 0, 26) // "ComboBoxDelegateModulation"

    },
    "ComboBoxDelegateModulation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboBoxDelegateModulation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ComboBoxDelegateModulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ComboBoxDelegateModulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_ComboBoxDelegateModulation.data,
    qt_meta_data_ComboBoxDelegateModulation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComboBoxDelegateModulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboBoxDelegateModulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboBoxDelegateModulation.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int ComboBoxDelegateModulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DockBookmarks_t {
    QByteArrayData data[18];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockBookmarks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockBookmarks_t qt_meta_stringdata_DockBookmarks = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DockBookmarks"
QT_MOC_LITERAL(1, 14, 20), // "newBookmarkActivated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "setNewFrequency"
QT_MOC_LITERAL(4, 52, 7), // "rx_freq"
QT_MOC_LITERAL(5, 60, 9), // "activated"
QT_MOC_LITERAL(6, 70, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 82, 5), // "index"
QT_MOC_LITERAL(8, 88, 13), // "onDataChanged"
QT_MOC_LITERAL(9, 102, 7), // "topLeft"
QT_MOC_LITERAL(10, 110, 11), // "bottomRight"
QT_MOC_LITERAL(11, 122, 33), // "on_tableWidgetTagList_itemCha..."
QT_MOC_LITERAL(12, 156, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(13, 174, 4), // "item"
QT_MOC_LITERAL(14, 179, 15), // "ShowContextMenu"
QT_MOC_LITERAL(15, 195, 3), // "pos"
QT_MOC_LITERAL(16, 199, 22), // "DeleteSelectedBookmark"
QT_MOC_LITERAL(17, 222, 13) // "doubleClicked"

    },
    "DockBookmarks\0newBookmarkActivated\0\0"
    "setNewFrequency\0rx_freq\0activated\0"
    "QModelIndex\0index\0onDataChanged\0topLeft\0"
    "bottomRight\0on_tableWidgetTagList_itemChanged\0"
    "QTableWidgetItem*\0item\0ShowContextMenu\0"
    "pos\0DeleteSelectedBookmark\0doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockBookmarks[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   61,    2, 0x0a /* Public */,
       5,    1,   64,    2, 0x08 /* Private */,
       8,    2,   67,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,
      16,    0,   78,    2, 0x08 /* Private */,
      17,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void DockBookmarks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockBookmarks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newBookmarkActivated((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->setNewFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->on_tableWidgetTagList_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: { bool _r = _t->DeleteSelectedBookmark();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockBookmarks::*)(qint64 , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBookmarks::newBookmarkActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockBookmarks::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_DockBookmarks.data,
    qt_meta_data_DockBookmarks,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockBookmarks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockBookmarks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockBookmarks.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int DockBookmarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DockBookmarks::newBookmarkActivated(qint64 _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
