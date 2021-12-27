/****************************************************************************
** Meta object code from reading C++ file 'iq_tool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/qtgui/iq_tool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iq_tool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CIqTool_t {
    QByteArrayData data[24];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CIqTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CIqTool_t qt_meta_stringdata_CIqTool = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CIqTool"
QT_MOC_LITERAL(1, 8, 14), // "startRecording"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "recdir"
QT_MOC_LITERAL(4, 31, 13), // "stopRecording"
QT_MOC_LITERAL(5, 45, 13), // "startPlayback"
QT_MOC_LITERAL(6, 59, 8), // "filename"
QT_MOC_LITERAL(7, 68, 8), // "samprate"
QT_MOC_LITERAL(8, 77, 12), // "stopPlayback"
QT_MOC_LITERAL(9, 90, 4), // "seek"
QT_MOC_LITERAL(10, 95, 8), // "seek_pos"
QT_MOC_LITERAL(11, 104, 15), // "cancelRecording"
QT_MOC_LITERAL(12, 120, 14), // "cancelPlayback"
QT_MOC_LITERAL(13, 135, 25), // "on_recDirEdit_textChanged"
QT_MOC_LITERAL(14, 161, 4), // "text"
QT_MOC_LITERAL(15, 166, 23), // "on_recDirButton_clicked"
QT_MOC_LITERAL(16, 190, 20), // "on_recButton_clicked"
QT_MOC_LITERAL(17, 211, 7), // "checked"
QT_MOC_LITERAL(18, 219, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(19, 241, 22), // "on_slider_valueChanged"
QT_MOC_LITERAL(20, 264, 5), // "value"
QT_MOC_LITERAL(21, 270, 32), // "on_listWidget_currentTextChanged"
QT_MOC_LITERAL(22, 303, 11), // "currentText"
QT_MOC_LITERAL(23, 315, 15) // "timeoutFunction"

    },
    "CIqTool\0startRecording\0\0recdir\0"
    "stopRecording\0startPlayback\0filename\0"
    "samprate\0stopPlayback\0seek\0seek_pos\0"
    "cancelRecording\0cancelPlayback\0"
    "on_recDirEdit_textChanged\0text\0"
    "on_recDirButton_clicked\0on_recButton_clicked\0"
    "checked\0on_playButton_clicked\0"
    "on_slider_valueChanged\0value\0"
    "on_listWidget_currentTextChanged\0"
    "currentText\0timeoutFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CIqTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    2,   88,    2, 0x06 /* Public */,
       8,    0,   93,    2, 0x06 /* Public */,
       9,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   97,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x0a /* Public */,
      13,    1,   99,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,
      18,    1,  106,    2, 0x08 /* Private */,
      19,    1,  109,    2, 0x08 /* Private */,
      21,    1,  112,    2, 0x08 /* Private */,
      23,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,

       0        // eod
};

void CIqTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CIqTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stopRecording(); break;
        case 2: _t->startPlayback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 3: _t->stopPlayback(); break;
        case 4: _t->seek((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->cancelRecording(); break;
        case 6: _t->cancelPlayback(); break;
        case 7: _t->on_recDirEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_recDirButton_clicked(); break;
        case 9: _t->on_recButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_playButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_listWidget_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->timeoutFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CIqTool::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::startRecording)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::stopRecording)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)(const QString , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::startPlayback)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::stopPlayback)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CIqTool::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CIqTool::seek)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CIqTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CIqTool.data,
    qt_meta_data_CIqTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CIqTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CIqTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CIqTool.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CIqTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void CIqTool::startRecording(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CIqTool::stopRecording()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CIqTool::startPlayback(const QString _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CIqTool::stopPlayback()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CIqTool::seek(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
