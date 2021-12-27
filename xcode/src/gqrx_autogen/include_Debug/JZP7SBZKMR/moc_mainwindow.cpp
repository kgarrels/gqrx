/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/applications/gqrx/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[140];
    char stringdata0[1932];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "setNewFrequency"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "rx_freq"
QT_MOC_LITERAL(4, 36, 14), // "loadConfigSlot"
QT_MOC_LITERAL(5, 51, 7), // "cfgfile"
QT_MOC_LITERAL(6, 59, 8), // "setLnbLo"
QT_MOC_LITERAL(7, 68, 8), // "freq_mhz"
QT_MOC_LITERAL(8, 77, 10), // "setAntenna"
QT_MOC_LITERAL(9, 88, 7), // "antenna"
QT_MOC_LITERAL(10, 96, 15), // "setFilterOffset"
QT_MOC_LITERAL(11, 112, 7), // "freq_hz"
QT_MOC_LITERAL(12, 120, 7), // "setGain"
QT_MOC_LITERAL(13, 128, 4), // "name"
QT_MOC_LITERAL(14, 133, 4), // "gain"
QT_MOC_LITERAL(15, 138, 11), // "setAutoGain"
QT_MOC_LITERAL(16, 150, 7), // "enabled"
QT_MOC_LITERAL(17, 158, 11), // "setFreqCorr"
QT_MOC_LITERAL(18, 170, 3), // "ppm"
QT_MOC_LITERAL(19, 174, 9), // "setIqSwap"
QT_MOC_LITERAL(20, 184, 8), // "reversed"
QT_MOC_LITERAL(21, 193, 11), // "setDcCancel"
QT_MOC_LITERAL(22, 205, 12), // "setIqBalance"
QT_MOC_LITERAL(23, 218, 15), // "setIgnoreLimits"
QT_MOC_LITERAL(24, 234, 13), // "ignore_limits"
QT_MOC_LITERAL(25, 248, 16), // "setFreqCtrlReset"
QT_MOC_LITERAL(26, 265, 18), // "setInvertScrolling"
QT_MOC_LITERAL(27, 284, 11), // "selectDemod"
QT_MOC_LITERAL(28, 296, 5), // "demod"
QT_MOC_LITERAL(29, 302, 5), // "index"
QT_MOC_LITERAL(30, 308, 11), // "setFmMaxdev"
QT_MOC_LITERAL(31, 320, 7), // "max_dev"
QT_MOC_LITERAL(32, 328, 9), // "setFmEmph"
QT_MOC_LITERAL(33, 338, 3), // "tau"
QT_MOC_LITERAL(34, 342, 8), // "setAmDcr"
QT_MOC_LITERAL(35, 351, 11), // "setCwOffset"
QT_MOC_LITERAL(36, 363, 6), // "offset"
QT_MOC_LITERAL(37, 370, 12), // "setAmSyncDcr"
QT_MOC_LITERAL(38, 383, 14), // "setAmSyncPllBw"
QT_MOC_LITERAL(39, 398, 6), // "pll_bw"
QT_MOC_LITERAL(40, 405, 8), // "setAgcOn"
QT_MOC_LITERAL(41, 414, 6), // "agc_on"
QT_MOC_LITERAL(42, 421, 10), // "setAgcHang"
QT_MOC_LITERAL(43, 432, 8), // "use_hang"
QT_MOC_LITERAL(44, 441, 15), // "setAgcThreshold"
QT_MOC_LITERAL(45, 457, 9), // "threshold"
QT_MOC_LITERAL(46, 467, 11), // "setAgcSlope"
QT_MOC_LITERAL(47, 479, 6), // "factor"
QT_MOC_LITERAL(48, 486, 11), // "setAgcDecay"
QT_MOC_LITERAL(49, 498, 4), // "msec"
QT_MOC_LITERAL(50, 503, 10), // "setAgcGain"
QT_MOC_LITERAL(51, 514, 15), // "setNoiseBlanker"
QT_MOC_LITERAL(52, 530, 4), // "nbid"
QT_MOC_LITERAL(53, 535, 2), // "on"
QT_MOC_LITERAL(54, 538, 11), // "setSqlLevel"
QT_MOC_LITERAL(55, 550, 8), // "level_db"
QT_MOC_LITERAL(56, 559, 15), // "setSqlLevelAuto"
QT_MOC_LITERAL(57, 575, 12), // "setAudioGain"
QT_MOC_LITERAL(58, 588, 11), // "setPassband"
QT_MOC_LITERAL(59, 600, 9), // "bandwidth"
QT_MOC_LITERAL(60, 610, 12), // "fftNbChanged"
QT_MOC_LITERAL(61, 623, 5), // "state"
QT_MOC_LITERAL(62, 629, 18), // "fftNbSliderChanged"
QT_MOC_LITERAL(63, 648, 5), // "value"
QT_MOC_LITERAL(64, 654, 13), // "startAudioRec"
QT_MOC_LITERAL(65, 668, 8), // "filename"
QT_MOC_LITERAL(66, 677, 12), // "stopAudioRec"
QT_MOC_LITERAL(67, 690, 18), // "startAudioPlayback"
QT_MOC_LITERAL(68, 709, 17), // "stopAudioPlayback"
QT_MOC_LITERAL(69, 727, 16), // "startAudioStream"
QT_MOC_LITERAL(70, 744, 8), // "udp_host"
QT_MOC_LITERAL(71, 753, 8), // "udp_port"
QT_MOC_LITERAL(72, 762, 6), // "stereo"
QT_MOC_LITERAL(73, 769, 18), // "stopAudioStreaming"
QT_MOC_LITERAL(74, 788, 16), // "startIqRecording"
QT_MOC_LITERAL(75, 805, 6), // "recdir"
QT_MOC_LITERAL(76, 812, 15), // "stopIqRecording"
QT_MOC_LITERAL(77, 828, 15), // "startIqPlayback"
QT_MOC_LITERAL(78, 844, 8), // "samprate"
QT_MOC_LITERAL(79, 853, 14), // "stopIqPlayback"
QT_MOC_LITERAL(80, 868, 10), // "seekIqFile"
QT_MOC_LITERAL(81, 879, 8), // "seek_pos"
QT_MOC_LITERAL(82, 888, 12), // "setIqFftSize"
QT_MOC_LITERAL(83, 901, 4), // "size"
QT_MOC_LITERAL(84, 906, 12), // "setIqFftRate"
QT_MOC_LITERAL(85, 919, 3), // "fps"
QT_MOC_LITERAL(86, 923, 14), // "setIqFftWindow"
QT_MOC_LITERAL(87, 938, 4), // "type"
QT_MOC_LITERAL(88, 943, 13), // "setIqFftSplit"
QT_MOC_LITERAL(89, 957, 6), // "pct_wf"
QT_MOC_LITERAL(90, 964, 11), // "setIqFftAvg"
QT_MOC_LITERAL(91, 976, 3), // "avg"
QT_MOC_LITERAL(92, 980, 15), // "setAudioFftRate"
QT_MOC_LITERAL(93, 996, 11), // "setFftColor"
QT_MOC_LITERAL(94, 1008, 5), // "color"
QT_MOC_LITERAL(95, 1014, 10), // "setFftFill"
QT_MOC_LITERAL(96, 1025, 6), // "enable"
QT_MOC_LITERAL(97, 1032, 16), // "setPeakDetection"
QT_MOC_LITERAL(98, 1049, 12), // "setAutoRange"
QT_MOC_LITERAL(99, 1062, 14), // "setFftPeakHold"
QT_MOC_LITERAL(100, 1077, 13), // "setWfTimeSpan"
QT_MOC_LITERAL(101, 1091, 7), // "span_ms"
QT_MOC_LITERAL(102, 1099, 9), // "setWfSize"
QT_MOC_LITERAL(103, 1109, 23), // "on_plotter_newDemodFreq"
QT_MOC_LITERAL(104, 1133, 4), // "freq"
QT_MOC_LITERAL(105, 1138, 5), // "delta"
QT_MOC_LITERAL(106, 1144, 24), // "on_plotter_newFilterFreq"
QT_MOC_LITERAL(107, 1169, 3), // "low"
QT_MOC_LITERAL(108, 1173, 4), // "high"
QT_MOC_LITERAL(109, 1178, 13), // "setRdsDecoder"
QT_MOC_LITERAL(110, 1192, 7), // "checked"
QT_MOC_LITERAL(111, 1200, 19), // "onBookmarkActivated"
QT_MOC_LITERAL(112, 1220, 18), // "updateClusterSpots"
QT_MOC_LITERAL(113, 1239, 22), // "on_actionDSP_triggered"
QT_MOC_LITERAL(114, 1262, 27), // "on_actionIoConfig_triggered"
QT_MOC_LITERAL(115, 1290, 31), // "on_actionLoadSettings_triggered"
QT_MOC_LITERAL(116, 1322, 31), // "on_actionSaveSettings_triggered"
QT_MOC_LITERAL(117, 1354, 32), // "on_actionSaveWaterfall_triggered"
QT_MOC_LITERAL(118, 1387, 25), // "on_actionIqTool_triggered"
QT_MOC_LITERAL(119, 1413, 29), // "on_actionFullScreen_triggered"
QT_MOC_LITERAL(120, 1443, 29), // "on_actionStatus_Bar_triggered"
QT_MOC_LITERAL(121, 1473, 32), // "on_actionRemoteControl_triggered"
QT_MOC_LITERAL(122, 1506, 31), // "on_actionRemoteConfig_triggered"
QT_MOC_LITERAL(123, 1538, 27), // "on_actionAFSK1200_triggered"
QT_MOC_LITERAL(124, 1566, 28), // "on_actionUserGroup_triggered"
QT_MOC_LITERAL(125, 1595, 23), // "on_actionNews_triggered"
QT_MOC_LITERAL(126, 1619, 33), // "on_actionRemoteProtocol_trigg..."
QT_MOC_LITERAL(127, 1653, 31), // "on_actionKbdShortcuts_triggered"
QT_MOC_LITERAL(128, 1685, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(129, 1710, 26), // "on_actionAboutQt_triggered"
QT_MOC_LITERAL(130, 1737, 30), // "on_actionAddBookmark_triggered"
QT_MOC_LITERAL(131, 1768, 29), // "on_actionDX_Cluster_triggered"
QT_MOC_LITERAL(132, 1798, 30), // "on_actionLock_Window_triggered"
QT_MOC_LITERAL(133, 1829, 18), // "afsk1200win_closed"
QT_MOC_LITERAL(134, 1848, 15), // "firstTimeConfig"
QT_MOC_LITERAL(135, 1864, 14), // "decoderTimeout"
QT_MOC_LITERAL(136, 1879, 12), // "meterTimeout"
QT_MOC_LITERAL(137, 1892, 12), // "iqFftTimeout"
QT_MOC_LITERAL(138, 1905, 15), // "audioFftTimeout"
QT_MOC_LITERAL(139, 1921, 10) // "rdsTimeout"

    },
    "MainWindow\0setNewFrequency\0\0rx_freq\0"
    "loadConfigSlot\0cfgfile\0setLnbLo\0"
    "freq_mhz\0setAntenna\0antenna\0setFilterOffset\0"
    "freq_hz\0setGain\0name\0gain\0setAutoGain\0"
    "enabled\0setFreqCorr\0ppm\0setIqSwap\0"
    "reversed\0setDcCancel\0setIqBalance\0"
    "setIgnoreLimits\0ignore_limits\0"
    "setFreqCtrlReset\0setInvertScrolling\0"
    "selectDemod\0demod\0index\0setFmMaxdev\0"
    "max_dev\0setFmEmph\0tau\0setAmDcr\0"
    "setCwOffset\0offset\0setAmSyncDcr\0"
    "setAmSyncPllBw\0pll_bw\0setAgcOn\0agc_on\0"
    "setAgcHang\0use_hang\0setAgcThreshold\0"
    "threshold\0setAgcSlope\0factor\0setAgcDecay\0"
    "msec\0setAgcGain\0setNoiseBlanker\0nbid\0"
    "on\0setSqlLevel\0level_db\0setSqlLevelAuto\0"
    "setAudioGain\0setPassband\0bandwidth\0"
    "fftNbChanged\0state\0fftNbSliderChanged\0"
    "value\0startAudioRec\0filename\0stopAudioRec\0"
    "startAudioPlayback\0stopAudioPlayback\0"
    "startAudioStream\0udp_host\0udp_port\0"
    "stereo\0stopAudioStreaming\0startIqRecording\0"
    "recdir\0stopIqRecording\0startIqPlayback\0"
    "samprate\0stopIqPlayback\0seekIqFile\0"
    "seek_pos\0setIqFftSize\0size\0setIqFftRate\0"
    "fps\0setIqFftWindow\0type\0setIqFftSplit\0"
    "pct_wf\0setIqFftAvg\0avg\0setAudioFftRate\0"
    "setFftColor\0color\0setFftFill\0enable\0"
    "setPeakDetection\0setAutoRange\0"
    "setFftPeakHold\0setWfTimeSpan\0span_ms\0"
    "setWfSize\0on_plotter_newDemodFreq\0"
    "freq\0delta\0on_plotter_newFilterFreq\0"
    "low\0high\0setRdsDecoder\0checked\0"
    "onBookmarkActivated\0updateClusterSpots\0"
    "on_actionDSP_triggered\0"
    "on_actionIoConfig_triggered\0"
    "on_actionLoadSettings_triggered\0"
    "on_actionSaveSettings_triggered\0"
    "on_actionSaveWaterfall_triggered\0"
    "on_actionIqTool_triggered\0"
    "on_actionFullScreen_triggered\0"
    "on_actionStatus_Bar_triggered\0"
    "on_actionRemoteControl_triggered\0"
    "on_actionRemoteConfig_triggered\0"
    "on_actionAFSK1200_triggered\0"
    "on_actionUserGroup_triggered\0"
    "on_actionNews_triggered\0"
    "on_actionRemoteProtocol_triggered\0"
    "on_actionKbdShortcuts_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionAboutQt_triggered\0"
    "on_actionAddBookmark_triggered\0"
    "on_actionDX_Cluster_triggered\0"
    "on_actionLock_Window_triggered\0"
    "afsk1200win_closed\0firstTimeConfig\0"
    "decoderTimeout\0meterTimeout\0iqFftTimeout\0"
    "audioFftTimeout\0rdsTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      91,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  469,    2, 0x0a /* Public */,
       4,    1,  472,    2, 0x08 /* Private */,
       6,    1,  475,    2, 0x08 /* Private */,
       8,    1,  478,    2, 0x08 /* Private */,
      10,    1,  481,    2, 0x08 /* Private */,
      12,    2,  484,    2, 0x08 /* Private */,
      15,    1,  489,    2, 0x08 /* Private */,
      17,    1,  492,    2, 0x08 /* Private */,
      19,    1,  495,    2, 0x08 /* Private */,
      21,    1,  498,    2, 0x08 /* Private */,
      22,    1,  501,    2, 0x08 /* Private */,
      23,    1,  504,    2, 0x08 /* Private */,
      25,    1,  507,    2, 0x08 /* Private */,
      26,    1,  510,    2, 0x08 /* Private */,
      27,    1,  513,    2, 0x08 /* Private */,
      27,    1,  516,    2, 0x08 /* Private */,
      30,    1,  519,    2, 0x08 /* Private */,
      32,    1,  522,    2, 0x08 /* Private */,
      34,    1,  525,    2, 0x08 /* Private */,
      35,    1,  528,    2, 0x08 /* Private */,
      37,    1,  531,    2, 0x08 /* Private */,
      38,    1,  534,    2, 0x08 /* Private */,
      40,    1,  537,    2, 0x08 /* Private */,
      42,    1,  540,    2, 0x08 /* Private */,
      44,    1,  543,    2, 0x08 /* Private */,
      46,    1,  546,    2, 0x08 /* Private */,
      48,    1,  549,    2, 0x08 /* Private */,
      50,    1,  552,    2, 0x08 /* Private */,
      51,    3,  555,    2, 0x08 /* Private */,
      54,    1,  562,    2, 0x08 /* Private */,
      56,    0,  565,    2, 0x08 /* Private */,
      57,    1,  566,    2, 0x08 /* Private */,
      58,    1,  569,    2, 0x08 /* Private */,
      60,    1,  572,    2, 0x08 /* Private */,
      62,    1,  575,    2, 0x08 /* Private */,
      64,    1,  578,    2, 0x08 /* Private */,
      66,    0,  581,    2, 0x08 /* Private */,
      67,    1,  582,    2, 0x08 /* Private */,
      68,    0,  585,    2, 0x08 /* Private */,
      69,    3,  586,    2, 0x08 /* Private */,
      73,    0,  593,    2, 0x08 /* Private */,
      74,    1,  594,    2, 0x08 /* Private */,
      76,    0,  597,    2, 0x08 /* Private */,
      77,    2,  598,    2, 0x08 /* Private */,
      79,    0,  603,    2, 0x08 /* Private */,
      80,    1,  604,    2, 0x08 /* Private */,
      82,    1,  607,    2, 0x08 /* Private */,
      84,    1,  610,    2, 0x08 /* Private */,
      86,    1,  613,    2, 0x08 /* Private */,
      88,    1,  616,    2, 0x08 /* Private */,
      90,    1,  619,    2, 0x08 /* Private */,
      92,    1,  622,    2, 0x08 /* Private */,
      93,    1,  625,    2, 0x08 /* Private */,
      95,    1,  628,    2, 0x08 /* Private */,
      97,    1,  631,    2, 0x08 /* Private */,
      98,    1,  634,    2, 0x08 /* Private */,
      99,    1,  637,    2, 0x08 /* Private */,
     100,    1,  640,    2, 0x08 /* Private */,
     102,    0,  643,    2, 0x08 /* Private */,
     103,    2,  644,    2, 0x08 /* Private */,
     106,    2,  649,    2, 0x08 /* Private */,
     109,    1,  654,    2, 0x08 /* Private */,
     111,    3,  657,    2, 0x08 /* Private */,
     112,    0,  664,    2, 0x08 /* Private */,
     113,    1,  665,    2, 0x08 /* Private */,
     114,    0,  668,    2, 0x08 /* Private */,
     115,    0,  669,    2, 0x08 /* Private */,
     116,    0,  670,    2, 0x08 /* Private */,
     117,    0,  671,    2, 0x08 /* Private */,
     118,    0,  672,    2, 0x08 /* Private */,
     119,    1,  673,    2, 0x08 /* Private */,
     120,    1,  676,    2, 0x08 /* Private */,
     121,    1,  679,    2, 0x08 /* Private */,
     122,    0,  682,    2, 0x08 /* Private */,
     123,    0,  683,    2, 0x08 /* Private */,
     124,    0,  684,    2, 0x08 /* Private */,
     125,    0,  685,    2, 0x08 /* Private */,
     126,    0,  686,    2, 0x08 /* Private */,
     127,    0,  687,    2, 0x08 /* Private */,
     128,    0,  688,    2, 0x08 /* Private */,
     129,    0,  689,    2, 0x08 /* Private */,
     130,    0,  690,    2, 0x08 /* Private */,
     131,    0,  691,    2, 0x08 /* Private */,
     132,    1,  692,    2, 0x08 /* Private */,
     133,    0,  695,    2, 0x08 /* Private */,
     134,    0,  696,    2, 0x08 /* Private */,
     135,    0,  697,    2, 0x08 /* Private */,
     136,    0,  698,    2, 0x08 /* Private */,
     137,    0,  699,    2, 0x08 /* Private */,
     138,    0,  700,    2, 0x08 /* Private */,
     139,    0,  701,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Float,   39,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Float,   52,   53,   45,
    QMetaType::Void, QMetaType::Double,   55,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   70,   71,   72,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,   65,   78,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   81,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Float,   91,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::QColor,   94,
    QMetaType::Void, QMetaType::Bool,   96,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   96,
    QMetaType::Void, QMetaType::ULongLong,  101,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,  104,  105,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  107,  108,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, QMetaType::Int,  104,   28,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNewFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->loadConfigSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setLnbLo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setAntenna((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setFilterOffset((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->setGain((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->setAutoGain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFreqCorr((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setIqSwap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setDcCancel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setIqBalance((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setIgnoreLimits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setFreqCtrlReset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setInvertScrolling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->selectDemod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->selectDemod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setFmMaxdev((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: _t->setFmEmph((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setAmDcr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setCwOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setAmSyncDcr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setAmSyncPllBw((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->setAgcOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setAgcHang((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setAgcThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setAgcSlope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setAgcDecay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setAgcGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setNoiseBlanker((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 29: _t->setSqlLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: { double _r = _t->setSqlLevelAuto();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->setAudioGain((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->setPassband((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->fftNbChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->fftNbSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->startAudioRec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->stopAudioRec(); break;
        case 37: _t->startAudioPlayback((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->stopAudioPlayback(); break;
        case 39: _t->startAudioStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 40: _t->stopAudioStreaming(); break;
        case 41: _t->startIqRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->stopIqRecording(); break;
        case 43: _t->startIqPlayback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 44: _t->stopIqPlayback(); break;
        case 45: _t->seekIqFile((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 46: _t->setIqFftSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->setIqFftRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->setIqFftWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->setIqFftSplit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->setIqFftAvg((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 51: _t->setAudioFftRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->setFftColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 53: _t->setFftFill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->setPeakDetection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->setAutoRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->setFftPeakHold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->setWfTimeSpan((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 58: _t->setWfSize(); break;
        case 59: _t->on_plotter_newDemodFreq((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 60: _t->on_plotter_newFilterFreq((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->setRdsDecoder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->onBookmarkActivated((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 63: _t->updateClusterSpots(); break;
        case 64: _t->on_actionDSP_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: { int _r = _t->on_actionIoConfig_triggered();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->on_actionLoadSettings_triggered(); break;
        case 67: _t->on_actionSaveSettings_triggered(); break;
        case 68: _t->on_actionSaveWaterfall_triggered(); break;
        case 69: _t->on_actionIqTool_triggered(); break;
        case 70: _t->on_actionFullScreen_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->on_actionStatus_Bar_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: _t->on_actionRemoteControl_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: _t->on_actionRemoteConfig_triggered(); break;
        case 74: _t->on_actionAFSK1200_triggered(); break;
        case 75: _t->on_actionUserGroup_triggered(); break;
        case 76: _t->on_actionNews_triggered(); break;
        case 77: _t->on_actionRemoteProtocol_triggered(); break;
        case 78: _t->on_actionKbdShortcuts_triggered(); break;
        case 79: _t->on_actionAbout_triggered(); break;
        case 80: _t->on_actionAboutQt_triggered(); break;
        case 81: _t->on_actionAddBookmark_triggered(); break;
        case 82: _t->on_actionDX_Cluster_triggered(); break;
        case 83: _t->on_actionLock_Window_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->afsk1200win_closed(); break;
        case 85: { int _r = _t->firstTimeConfig();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 86: _t->decoderTimeout(); break;
        case 87: _t->meterTimeout(); break;
        case 88: _t->iqFftTimeout(); break;
        case 89: _t->audioFftTimeout(); break;
        case 90: _t->rdsTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 91)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 91;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 91)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 91;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
