/****************************************************************************
** Meta object code from reading C++ file 'ioconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/qtgui/ioconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ioconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CIoConfig_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CIoConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CIoConfig_t qt_meta_stringdata_CIoConfig = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CIoConfig"
QT_MOC_LITERAL(1, 10, 10), // "saveConfig"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "inputDeviceSelected"
QT_MOC_LITERAL(4, 42, 5), // "index"
QT_MOC_LITERAL(5, 48, 18), // "inputDevstrChanged"
QT_MOC_LITERAL(6, 67, 4), // "text"
QT_MOC_LITERAL(7, 72, 16), // "inputRateChanged"
QT_MOC_LITERAL(8, 89, 17), // "decimationChanged"
QT_MOC_LITERAL(9, 107, 19) // "onScanButtonClicked"

    },
    "CIoConfig\0saveConfig\0\0inputDeviceSelected\0"
    "index\0inputDevstrChanged\0text\0"
    "inputRateChanged\0decimationChanged\0"
    "onScanButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CIoConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void CIoConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CIoConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveConfig(); break;
        case 1: _t->inputDeviceSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->inputDevstrChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->inputRateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->decimationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onScanButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CIoConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CIoConfig.data,
    qt_meta_data_CIoConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CIoConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CIoConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CIoConfig.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CIoConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
