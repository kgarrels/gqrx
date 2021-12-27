/****************************************************************************
** Meta object code from reading C++ file 'bookmarkstaglist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/qtgui/bookmarkstaglist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkstaglist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookmarksTagList_t {
    QByteArrayData data[20];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarksTagList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarksTagList_t qt_meta_stringdata_BookmarksTagList = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BookmarksTagList"
QT_MOC_LITERAL(1, 17, 10), // "updateTags"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "on_cellClicked"
QT_MOC_LITERAL(4, 44, 3), // "row"
QT_MOC_LITERAL(5, 48, 6), // "column"
QT_MOC_LITERAL(6, 55, 11), // "changeColor"
QT_MOC_LITERAL(7, 67, 18), // "toggleCheckedState"
QT_MOC_LITERAL(8, 86, 15), // "ShowContextMenu"
QT_MOC_LITERAL(9, 102, 3), // "pos"
QT_MOC_LITERAL(10, 106, 9), // "AddNewTag"
QT_MOC_LITERAL(11, 116, 6), // "AddTag"
QT_MOC_LITERAL(12, 123, 4), // "name"
QT_MOC_LITERAL(13, 128, 14), // "Qt::CheckState"
QT_MOC_LITERAL(14, 143, 10), // "checkstate"
QT_MOC_LITERAL(15, 154, 5), // "color"
QT_MOC_LITERAL(16, 160, 17), // "DeleteSelectedTag"
QT_MOC_LITERAL(17, 178, 9), // "DeleteTag"
QT_MOC_LITERAL(18, 188, 9), // "SelectAll"
QT_MOC_LITERAL(19, 198, 11) // "DeselectAll"

    },
    "BookmarksTagList\0updateTags\0\0"
    "on_cellClicked\0row\0column\0changeColor\0"
    "toggleCheckedState\0ShowContextMenu\0"
    "pos\0AddNewTag\0AddTag\0name\0Qt::CheckState\0"
    "checkstate\0color\0DeleteSelectedTag\0"
    "DeleteTag\0SelectAll\0DeselectAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarksTagList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    2,   80,    2, 0x0a /* Public */,
       6,    2,   85,    2, 0x0a /* Public */,
       7,    2,   90,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    3,   99,    2, 0x0a /* Public */,
      11,    2,  106,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  111,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  114,    2, 0x0a /* Public */,
      17,    1,  115,    2, 0x0a /* Public */,
      18,    0,  118,    2, 0x0a /* Public */,
      19,    0,  119,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13, QMetaType::QColor,   12,   14,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BookmarksTagList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BookmarksTagList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTags(); break;
        case 1: _t->on_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->changeColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->toggleCheckedState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->AddNewTag(); break;
        case 6: _t->AddTag((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 7: _t->AddTag((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 8: _t->AddTag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->DeleteSelectedTag(); break;
        case 10: _t->DeleteTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->SelectAll(); break;
        case 12: _t->DeselectAll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BookmarksTagList::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_BookmarksTagList.data,
    qt_meta_data_BookmarksTagList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BookmarksTagList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarksTagList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarksTagList.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int BookmarksTagList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
