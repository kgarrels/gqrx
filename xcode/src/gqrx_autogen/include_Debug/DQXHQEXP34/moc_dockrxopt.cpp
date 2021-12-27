/****************************************************************************
** Meta object code from reading C++ file 'dockrxopt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/qtgui/dockrxopt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockrxopt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockRxOpt_t {
    QByteArrayData data[69];
    char stringdata0[1104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockRxOpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockRxOpt_t qt_meta_stringdata_DockRxOpt = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DockRxOpt"
QT_MOC_LITERAL(1, 10, 13), // "rxFreqChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "freq_hz"
QT_MOC_LITERAL(4, 33, 19), // "filterOffsetChanged"
QT_MOC_LITERAL(5, 53, 13), // "demodSelected"
QT_MOC_LITERAL(6, 67, 5), // "demod"
QT_MOC_LITERAL(7, 73, 16), // "fmMaxdevSelected"
QT_MOC_LITERAL(8, 90, 7), // "max_dev"
QT_MOC_LITERAL(9, 98, 14), // "fmEmphSelected"
QT_MOC_LITERAL(10, 113, 3), // "tau"
QT_MOC_LITERAL(11, 117, 12), // "amDcrToggled"
QT_MOC_LITERAL(12, 130, 7), // "enabled"
QT_MOC_LITERAL(13, 138, 16), // "amSyncDcrToggled"
QT_MOC_LITERAL(14, 155, 19), // "amSyncPllBwSelected"
QT_MOC_LITERAL(15, 175, 6), // "pll_bw"
QT_MOC_LITERAL(16, 182, 15), // "sqlLevelChanged"
QT_MOC_LITERAL(17, 198, 5), // "level"
QT_MOC_LITERAL(18, 204, 14), // "sqlAutoClicked"
QT_MOC_LITERAL(19, 219, 10), // "agcToggled"
QT_MOC_LITERAL(20, 230, 6), // "agc_on"
QT_MOC_LITERAL(21, 237, 14), // "agcHangToggled"
QT_MOC_LITERAL(22, 252, 8), // "use_hang"
QT_MOC_LITERAL(23, 261, 19), // "agcThresholdChanged"
QT_MOC_LITERAL(24, 281, 5), // "value"
QT_MOC_LITERAL(25, 287, 15), // "agcSlopeChanged"
QT_MOC_LITERAL(26, 303, 5), // "slope"
QT_MOC_LITERAL(27, 309, 15), // "agcDecayChanged"
QT_MOC_LITERAL(28, 325, 5), // "decay"
QT_MOC_LITERAL(29, 331, 14), // "agcGainChanged"
QT_MOC_LITERAL(30, 346, 4), // "gain"
QT_MOC_LITERAL(31, 351, 19), // "noiseBlankerChanged"
QT_MOC_LITERAL(32, 371, 4), // "nbid"
QT_MOC_LITERAL(33, 376, 2), // "on"
QT_MOC_LITERAL(34, 379, 9), // "threshold"
QT_MOC_LITERAL(35, 389, 15), // "cwOffsetChanged"
QT_MOC_LITERAL(36, 405, 6), // "offset"
QT_MOC_LITERAL(37, 412, 9), // "setRxFreq"
QT_MOC_LITERAL(38, 422, 15), // "setCurrentDemod"
QT_MOC_LITERAL(39, 438, 15), // "setFilterOffset"
QT_MOC_LITERAL(40, 454, 15), // "setSquelchLevel"
QT_MOC_LITERAL(41, 470, 27), // "on_freqSpinBox_valueChanged"
QT_MOC_LITERAL(42, 498, 4), // "freq"
QT_MOC_LITERAL(43, 503, 26), // "on_filterFreq_newFrequency"
QT_MOC_LITERAL(44, 530, 24), // "on_filterCombo_activated"
QT_MOC_LITERAL(45, 555, 5), // "index"
QT_MOC_LITERAL(46, 561, 25), // "on_modeSelector_activated"
QT_MOC_LITERAL(47, 587, 21), // "on_modeButton_clicked"
QT_MOC_LITERAL(48, 609, 20), // "on_agcButton_clicked"
QT_MOC_LITERAL(49, 630, 28), // "on_autoSquelchButton_clicked"
QT_MOC_LITERAL(50, 659, 29), // "on_resetSquelchButton_clicked"
QT_MOC_LITERAL(51, 689, 37), // "on_agcPresetCombo_currentInde..."
QT_MOC_LITERAL(52, 727, 26), // "on_sqlSpinBox_valueChanged"
QT_MOC_LITERAL(53, 754, 20), // "on_nb1Button_toggled"
QT_MOC_LITERAL(54, 775, 7), // "checked"
QT_MOC_LITERAL(55, 783, 20), // "on_nb2Button_toggled"
QT_MOC_LITERAL(56, 804, 22), // "on_nbOptButton_clicked"
QT_MOC_LITERAL(57, 827, 22), // "nbOpt_thresholdChanged"
QT_MOC_LITERAL(58, 850, 25), // "demodOpt_fmMaxdevSelected"
QT_MOC_LITERAL(59, 876, 23), // "demodOpt_fmEmphSelected"
QT_MOC_LITERAL(60, 900, 21), // "demodOpt_amDcrToggled"
QT_MOC_LITERAL(61, 922, 24), // "demodOpt_cwOffsetChanged"
QT_MOC_LITERAL(62, 947, 25), // "demodOpt_amSyncDcrToggled"
QT_MOC_LITERAL(63, 973, 28), // "demodOpt_amSyncPllBwSelected"
QT_MOC_LITERAL(64, 1002, 18), // "agcOpt_hangToggled"
QT_MOC_LITERAL(65, 1021, 18), // "agcOpt_gainChanged"
QT_MOC_LITERAL(66, 1040, 23), // "agcOpt_thresholdChanged"
QT_MOC_LITERAL(67, 1064, 19), // "agcOpt_slopeChanged"
QT_MOC_LITERAL(68, 1084, 19) // "agcOpt_decayChanged"

    },
    "DockRxOpt\0rxFreqChanged\0\0freq_hz\0"
    "filterOffsetChanged\0demodSelected\0"
    "demod\0fmMaxdevSelected\0max_dev\0"
    "fmEmphSelected\0tau\0amDcrToggled\0enabled\0"
    "amSyncDcrToggled\0amSyncPllBwSelected\0"
    "pll_bw\0sqlLevelChanged\0level\0"
    "sqlAutoClicked\0agcToggled\0agc_on\0"
    "agcHangToggled\0use_hang\0agcThresholdChanged\0"
    "value\0agcSlopeChanged\0slope\0agcDecayChanged\0"
    "decay\0agcGainChanged\0gain\0noiseBlankerChanged\0"
    "nbid\0on\0threshold\0cwOffsetChanged\0"
    "offset\0setRxFreq\0setCurrentDemod\0"
    "setFilterOffset\0setSquelchLevel\0"
    "on_freqSpinBox_valueChanged\0freq\0"
    "on_filterFreq_newFrequency\0"
    "on_filterCombo_activated\0index\0"
    "on_modeSelector_activated\0"
    "on_modeButton_clicked\0on_agcButton_clicked\0"
    "on_autoSquelchButton_clicked\0"
    "on_resetSquelchButton_clicked\0"
    "on_agcPresetCombo_currentIndexChanged\0"
    "on_sqlSpinBox_valueChanged\0"
    "on_nb1Button_toggled\0checked\0"
    "on_nb2Button_toggled\0on_nbOptButton_clicked\0"
    "nbOpt_thresholdChanged\0demodOpt_fmMaxdevSelected\0"
    "demodOpt_fmEmphSelected\0demodOpt_amDcrToggled\0"
    "demodOpt_cwOffsetChanged\0"
    "demodOpt_amSyncDcrToggled\0"
    "demodOpt_amSyncPllBwSelected\0"
    "agcOpt_hangToggled\0agcOpt_gainChanged\0"
    "agcOpt_thresholdChanged\0agcOpt_slopeChanged\0"
    "agcOpt_decayChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockRxOpt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  249,    2, 0x06 /* Public */,
       4,    1,  252,    2, 0x06 /* Public */,
       5,    1,  255,    2, 0x06 /* Public */,
       7,    1,  258,    2, 0x06 /* Public */,
       9,    1,  261,    2, 0x06 /* Public */,
      11,    1,  264,    2, 0x06 /* Public */,
      13,    1,  267,    2, 0x06 /* Public */,
      14,    1,  270,    2, 0x06 /* Public */,
      16,    1,  273,    2, 0x06 /* Public */,
      18,    0,  276,    2, 0x06 /* Public */,
      19,    1,  277,    2, 0x06 /* Public */,
      21,    1,  280,    2, 0x06 /* Public */,
      23,    1,  283,    2, 0x06 /* Public */,
      25,    1,  286,    2, 0x06 /* Public */,
      27,    1,  289,    2, 0x06 /* Public */,
      29,    1,  292,    2, 0x06 /* Public */,
      31,    3,  295,    2, 0x06 /* Public */,
      35,    1,  302,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    1,  305,    2, 0x0a /* Public */,
      38,    1,  308,    2, 0x0a /* Public */,
      39,    1,  311,    2, 0x0a /* Public */,
      40,    1,  314,    2, 0x0a /* Public */,
      41,    1,  317,    2, 0x08 /* Private */,
      43,    1,  320,    2, 0x08 /* Private */,
      44,    1,  323,    2, 0x08 /* Private */,
      46,    1,  326,    2, 0x08 /* Private */,
      47,    0,  329,    2, 0x08 /* Private */,
      48,    0,  330,    2, 0x08 /* Private */,
      49,    0,  331,    2, 0x08 /* Private */,
      50,    0,  332,    2, 0x08 /* Private */,
      51,    1,  333,    2, 0x08 /* Private */,
      52,    1,  336,    2, 0x08 /* Private */,
      53,    1,  339,    2, 0x08 /* Private */,
      55,    1,  342,    2, 0x08 /* Private */,
      56,    0,  345,    2, 0x08 /* Private */,
      57,    2,  346,    2, 0x08 /* Private */,
      58,    1,  351,    2, 0x08 /* Private */,
      59,    1,  354,    2, 0x08 /* Private */,
      60,    1,  357,    2, 0x08 /* Private */,
      61,    1,  360,    2, 0x08 /* Private */,
      62,    1,  363,    2, 0x08 /* Private */,
      63,    1,  366,    2, 0x08 /* Private */,
      64,    1,  369,    2, 0x08 /* Private */,
      65,    1,  372,    2, 0x08 /* Private */,
      66,    1,  375,    2, 0x08 /* Private */,
      67,    1,  378,    2, 0x08 /* Private */,
      68,    1,  381,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Float,   32,   33,   34,
    QMetaType::Void, QMetaType::Int,   36,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   42,
    QMetaType::Void, QMetaType::LongLong,   42,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   32,   24,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,

       0        // eod
};

void DockRxOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockRxOpt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rxFreqChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->filterOffsetChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->demodSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fmMaxdevSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->fmEmphSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->amDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->amSyncDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->amSyncPllBwSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->sqlLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: { double _r = _t->sqlAutoClicked();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->agcToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->agcHangToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->agcThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->agcSlopeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->agcDecayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->agcGainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->noiseBlankerChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 17: _t->cwOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setRxFreq((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 19: _t->setCurrentDemod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setFilterOffset((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 21: _t->setSquelchLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->on_freqSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->on_filterFreq_newFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 24: _t->on_filterCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_modeSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_modeButton_clicked(); break;
        case 27: _t->on_agcButton_clicked(); break;
        case 28: _t->on_autoSquelchButton_clicked(); break;
        case 29: _t->on_resetSquelchButton_clicked(); break;
        case 30: _t->on_agcPresetCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_sqlSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 32: _t->on_nb1Button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_nb2Button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_nbOptButton_clicked(); break;
        case 35: _t->nbOpt_thresholdChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 36: _t->demodOpt_fmMaxdevSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 37: _t->demodOpt_fmEmphSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 38: _t->demodOpt_amDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->demodOpt_cwOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->demodOpt_amSyncDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->demodOpt_amSyncPllBwSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->agcOpt_hangToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->agcOpt_gainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->agcOpt_thresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->agcOpt_slopeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->agcOpt_decayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockRxOpt::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::rxFreqChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::filterOffsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::demodSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::fmMaxdevSelected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::fmEmphSelected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::amDcrToggled)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::amSyncDcrToggled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::amSyncPllBwSelected)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::sqlLevelChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = double (DockRxOpt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::sqlAutoClicked)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::agcToggled)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::agcHangToggled)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::agcThresholdChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::agcSlopeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::agcDecayChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::agcGainChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int , bool , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::noiseBlankerChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DockRxOpt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRxOpt::cwOffsetChanged)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockRxOpt::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_DockRxOpt.data,
    qt_meta_data_DockRxOpt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockRxOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockRxOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockRxOpt.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int DockRxOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void DockRxOpt::rxFreqChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockRxOpt::filterOffsetChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockRxOpt::demodSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockRxOpt::fmMaxdevSelected(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockRxOpt::fmEmphSelected(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DockRxOpt::amDcrToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DockRxOpt::amSyncDcrToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DockRxOpt::amSyncPllBwSelected(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DockRxOpt::sqlLevelChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
double DockRxOpt::sqlAutoClicked()
{
    double _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
    return _t0;
}

// SIGNAL 10
void DockRxOpt::agcToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DockRxOpt::agcHangToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DockRxOpt::agcThresholdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DockRxOpt::agcSlopeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DockRxOpt::agcDecayChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DockRxOpt::agcGainChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DockRxOpt::noiseBlankerChanged(int _t1, bool _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DockRxOpt::cwOffsetChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
