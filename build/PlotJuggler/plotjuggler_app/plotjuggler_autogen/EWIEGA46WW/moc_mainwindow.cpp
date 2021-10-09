/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/PlotJuggler/plotjuggler_app/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[93];
    char stringdata0[1996];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "dataSourceRemoved"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "std::string"
QT_MOC_LITERAL(4, 42, 4), // "name"
QT_MOC_LITERAL(5, 47, 15), // "activateTracker"
QT_MOC_LITERAL(6, 63, 6), // "active"
QT_MOC_LITERAL(7, 70, 17), // "stylesheetChanged"
QT_MOC_LITERAL(8, 88, 10), // "style_name"
QT_MOC_LITERAL(9, 99, 11), // "resizeEvent"
QT_MOC_LITERAL(10, 111, 13), // "QResizeEvent*"
QT_MOC_LITERAL(11, 125, 16), // "onUndoableChange"
QT_MOC_LITERAL(12, 142, 13), // "onUndoInvoked"
QT_MOC_LITERAL(13, 156, 13), // "onRedoInvoked"
QT_MOC_LITERAL(14, 170, 19), // "on_streamingToggled"
QT_MOC_LITERAL(15, 190, 31), // "on_buttonStreamingPause_toggled"
QT_MOC_LITERAL(16, 222, 6), // "paused"
QT_MOC_LITERAL(17, 229, 39), // "on_buttonStreamingNotificatio..."
QT_MOC_LITERAL(18, 269, 32), // "on_streamingSpinBox_valueChanged"
QT_MOC_LITERAL(19, 302, 5), // "value"
QT_MOC_LITERAL(20, 308, 37), // "on_comboStreaming_currentInde..."
QT_MOC_LITERAL(21, 346, 12), // "current_text"
QT_MOC_LITERAL(22, 359, 16), // "on_splitterMoved"
QT_MOC_LITERAL(23, 376, 20), // "onTrackerTimeUpdated"
QT_MOC_LITERAL(24, 397, 13), // "absolute_time"
QT_MOC_LITERAL(25, 411, 9), // "do_replot"
QT_MOC_LITERAL(26, 421, 24), // "onTrackerMovedFromWidget"
QT_MOC_LITERAL(27, 446, 3), // "pos"
QT_MOC_LITERAL(28, 450, 25), // "onTimeSlider_valueChanged"
QT_MOC_LITERAL(29, 476, 8), // "abs_time"
QT_MOC_LITERAL(30, 485, 11), // "onPlotAdded"
QT_MOC_LITERAL(31, 497, 11), // "PlotWidget*"
QT_MOC_LITERAL(32, 509, 4), // "plot"
QT_MOC_LITERAL(33, 514, 14), // "onPlotTabAdded"
QT_MOC_LITERAL(34, 529, 11), // "PlotDocker*"
QT_MOC_LITERAL(35, 541, 6), // "docker"
QT_MOC_LITERAL(36, 548, 17), // "onPlotZoomChanged"
QT_MOC_LITERAL(37, 566, 13), // "modified_plot"
QT_MOC_LITERAL(38, 580, 9), // "new_range"
QT_MOC_LITERAL(39, 590, 22), // "on_tabbedAreaDestroyed"
QT_MOC_LITERAL(40, 613, 6), // "object"
QT_MOC_LITERAL(41, 620, 19), // "updateDataAndReplot"
QT_MOC_LITERAL(42, 640, 18), // "replot_hidden_tabs"
QT_MOC_LITERAL(43, 659, 23), // "onUpdateLeftTableValues"
QT_MOC_LITERAL(44, 683, 22), // "onDeleteMultipleCurves"
QT_MOC_LITERAL(45, 706, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(46, 731, 11), // "curve_names"
QT_MOC_LITERAL(47, 743, 15), // "onAddCustomPlot"
QT_MOC_LITERAL(48, 759, 9), // "plot_name"
QT_MOC_LITERAL(49, 769, 16), // "onEditCustomPlot"
QT_MOC_LITERAL(50, 786, 19), // "onRefreshCustomPlot"
QT_MOC_LITERAL(51, 806, 19), // "onCustomPlotCreated"
QT_MOC_LITERAL(52, 826, 13), // "CustomPlotPtr"
QT_MOC_LITERAL(53, 840, 14), // "onPlaybackLoop"
QT_MOC_LITERAL(54, 855, 34), // "on_actionClearRecentData_trig..."
QT_MOC_LITERAL(55, 890, 36), // "on_actionClearRecentLayout_tr..."
QT_MOC_LITERAL(56, 927, 32), // "on_actionDeleteAllData_triggered"
QT_MOC_LITERAL(57, 960, 30), // "on_actionClearBuffer_triggered"
QT_MOC_LITERAL(58, 991, 23), // "on_deleteSerieFromGroup"
QT_MOC_LITERAL(59, 1015, 10), // "group_name"
QT_MOC_LITERAL(60, 1026, 32), // "on_streamingNotificationsChanged"
QT_MOC_LITERAL(61, 1059, 26), // "active_notifications_count"
QT_MOC_LITERAL(62, 1086, 27), // "onActionFullscreenTriggered"
QT_MOC_LITERAL(63, 1114, 28), // "on_actionReportBug_triggered"
QT_MOC_LITERAL(64, 1143, 29), // "on_actionCheatsheet_triggered"
QT_MOC_LITERAL(65, 1173, 37), // "on_actionSupportPlotJuggler_t..."
QT_MOC_LITERAL(66, 1211, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(67, 1236, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(68, 1260, 33), // "on_pushButtonActivateGrid_tog..."
QT_MOC_LITERAL(69, 1294, 7), // "checked"
QT_MOC_LITERAL(70, 1302, 26), // "on_pushButtonRatio_toggled"
QT_MOC_LITERAL(71, 1329, 25), // "on_pushButtonPlay_toggled"
QT_MOC_LITERAL(72, 1355, 32), // "on_pushButtonUseDateTime_toggled"
QT_MOC_LITERAL(73, 1388, 32), // "on_pushButtonTimeTracker_pressed"
QT_MOC_LITERAL(74, 1421, 37), // "on_pushButtonRemoveTimeOffset..."
QT_MOC_LITERAL(75, 1459, 31), // "on_buttonStreamingStart_clicked"
QT_MOC_LITERAL(76, 1491, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(77, 1512, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(78, 1543, 33), // "on_actionShare_the_love_trigg..."
QT_MOC_LITERAL(79, 1577, 28), // "on_playbackStep_valueChanged"
QT_MOC_LITERAL(80, 1606, 4), // "arg1"
QT_MOC_LITERAL(81, 1611, 33), // "on_actionLoadStyleSheet_trigg..."
QT_MOC_LITERAL(82, 1645, 27), // "on_pushButtonLegend_clicked"
QT_MOC_LITERAL(83, 1673, 28), // "on_pushButtonZoomOut_clicked"
QT_MOC_LITERAL(84, 1702, 33), // "on_buttonStreamingOptions_cli..."
QT_MOC_LITERAL(85, 1736, 30), // "on_buttonHideFileFrame_clicked"
QT_MOC_LITERAL(86, 1767, 35), // "on_buttonHideStreamingFrame_c..."
QT_MOC_LITERAL(87, 1803, 36), // "on_buttonHidePublishersFrame_..."
QT_MOC_LITERAL(88, 1840, 27), // "on_buttonRecentData_clicked"
QT_MOC_LITERAL(89, 1868, 29), // "on_buttonRecentLayout_clicked"
QT_MOC_LITERAL(90, 1898, 31), // "on_pushButtonLoadLayout_clicked"
QT_MOC_LITERAL(91, 1930, 31), // "on_pushButtonSaveLayout_clicked"
QT_MOC_LITERAL(92, 1962, 33) // "on_pushButtonLoadDatafile_cli..."

    },
    "MainWindow\0dataSourceRemoved\0\0std::string\0"
    "name\0activateTracker\0active\0"
    "stylesheetChanged\0style_name\0resizeEvent\0"
    "QResizeEvent*\0onUndoableChange\0"
    "onUndoInvoked\0onRedoInvoked\0"
    "on_streamingToggled\0on_buttonStreamingPause_toggled\0"
    "paused\0on_buttonStreamingNotifications_clicked\0"
    "on_streamingSpinBox_valueChanged\0value\0"
    "on_comboStreaming_currentIndexChanged\0"
    "current_text\0on_splitterMoved\0"
    "onTrackerTimeUpdated\0absolute_time\0"
    "do_replot\0onTrackerMovedFromWidget\0"
    "pos\0onTimeSlider_valueChanged\0abs_time\0"
    "onPlotAdded\0PlotWidget*\0plot\0"
    "onPlotTabAdded\0PlotDocker*\0docker\0"
    "onPlotZoomChanged\0modified_plot\0"
    "new_range\0on_tabbedAreaDestroyed\0"
    "object\0updateDataAndReplot\0"
    "replot_hidden_tabs\0onUpdateLeftTableValues\0"
    "onDeleteMultipleCurves\0std::vector<std::string>\0"
    "curve_names\0onAddCustomPlot\0plot_name\0"
    "onEditCustomPlot\0onRefreshCustomPlot\0"
    "onCustomPlotCreated\0CustomPlotPtr\0"
    "onPlaybackLoop\0on_actionClearRecentData_triggered\0"
    "on_actionClearRecentLayout_triggered\0"
    "on_actionDeleteAllData_triggered\0"
    "on_actionClearBuffer_triggered\0"
    "on_deleteSerieFromGroup\0group_name\0"
    "on_streamingNotificationsChanged\0"
    "active_notifications_count\0"
    "onActionFullscreenTriggered\0"
    "on_actionReportBug_triggered\0"
    "on_actionCheatsheet_triggered\0"
    "on_actionSupportPlotJuggler_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionExit_triggered\0"
    "on_pushButtonActivateGrid_toggled\0"
    "checked\0on_pushButtonRatio_toggled\0"
    "on_pushButtonPlay_toggled\0"
    "on_pushButtonUseDateTime_toggled\0"
    "on_pushButtonTimeTracker_pressed\0"
    "on_pushButtonRemoveTimeOffset_toggled\0"
    "on_buttonStreamingStart_clicked\0"
    "on_stylesheetChanged\0"
    "on_actionPreferences_triggered\0"
    "on_actionShare_the_love_triggered\0"
    "on_playbackStep_valueChanged\0arg1\0"
    "on_actionLoadStyleSheet_triggered\0"
    "on_pushButtonLegend_clicked\0"
    "on_pushButtonZoomOut_clicked\0"
    "on_buttonStreamingOptions_clicked\0"
    "on_buttonHideFileFrame_clicked\0"
    "on_buttonHideStreamingFrame_clicked\0"
    "on_buttonHidePublishersFrame_clicked\0"
    "on_buttonRecentData_clicked\0"
    "on_buttonRecentLayout_clicked\0"
    "on_pushButtonLoadLayout_clicked\0"
    "on_pushButtonSaveLayout_clicked\0"
    "on_pushButtonLoadDatafile_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  329,    2, 0x06 /* Public */,
       5,    1,  332,    2, 0x06 /* Public */,
       7,    1,  335,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  338,    2, 0x0a /* Public */,
      11,    0,  341,    2, 0x0a /* Public */,
      12,    0,  342,    2, 0x0a /* Public */,
      13,    0,  343,    2, 0x0a /* Public */,
      14,    0,  344,    2, 0x0a /* Public */,
      15,    1,  345,    2, 0x0a /* Public */,
      17,    0,  348,    2, 0x0a /* Public */,
      18,    1,  349,    2, 0x0a /* Public */,
      20,    1,  352,    2, 0x0a /* Public */,
      22,    2,  355,    2, 0x0a /* Public */,
      23,    2,  360,    2, 0x0a /* Public */,
      26,    1,  365,    2, 0x0a /* Public */,
      28,    1,  368,    2, 0x0a /* Public */,
      30,    1,  371,    2, 0x0a /* Public */,
      33,    1,  374,    2, 0x0a /* Public */,
      36,    2,  377,    2, 0x0a /* Public */,
      39,    1,  382,    2, 0x0a /* Public */,
      41,    1,  385,    2, 0x0a /* Public */,
      43,    0,  388,    2, 0x0a /* Public */,
      44,    1,  389,    2, 0x0a /* Public */,
      47,    1,  392,    2, 0x0a /* Public */,
      49,    1,  395,    2, 0x0a /* Public */,
      50,    1,  398,    2, 0x0a /* Public */,
      51,    1,  401,    2, 0x0a /* Public */,
      53,    0,  404,    2, 0x0a /* Public */,
      54,    0,  405,    2, 0x0a /* Public */,
      55,    0,  406,    2, 0x0a /* Public */,
      56,    0,  407,    2, 0x0a /* Public */,
      57,    0,  408,    2, 0x0a /* Public */,
      58,    1,  409,    2, 0x0a /* Public */,
      60,    1,  412,    2, 0x0a /* Public */,
      62,    0,  415,    2, 0x0a /* Public */,
      63,    0,  416,    2, 0x0a /* Public */,
      64,    0,  417,    2, 0x0a /* Public */,
      65,    0,  418,    2, 0x0a /* Public */,
      66,    0,  419,    2, 0x0a /* Public */,
      67,    0,  420,    2, 0x0a /* Public */,
      68,    1,  421,    2, 0x0a /* Public */,
      70,    1,  424,    2, 0x0a /* Public */,
      71,    1,  427,    2, 0x0a /* Public */,
      72,    1,  430,    2, 0x0a /* Public */,
      73,    0,  433,    2, 0x0a /* Public */,
      74,    1,  434,    2, 0x0a /* Public */,
      75,    0,  437,    2, 0x0a /* Public */,
      76,    1,  438,    2, 0x08 /* Private */,
      77,    0,  441,    2, 0x08 /* Private */,
      78,    0,  442,    2, 0x08 /* Private */,
      79,    1,  443,    2, 0x08 /* Private */,
      81,    0,  446,    2, 0x08 /* Private */,
      82,    0,  447,    2, 0x08 /* Private */,
      83,    0,  448,    2, 0x08 /* Private */,
      84,    0,  449,    2, 0x08 /* Private */,
      85,    0,  450,    2, 0x08 /* Private */,
      86,    0,  451,    2, 0x08 /* Private */,
      87,    0,  452,    2, 0x08 /* Private */,
      88,    0,  453,    2, 0x08 /* Private */,
      89,    0,  454,    2, 0x08 /* Private */,
      90,    0,  455,    2, 0x08 /* Private */,
      91,    0,  456,    2, 0x08 /* Private */,
      92,    0,  457,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   24,   25,
    QMetaType::Void, QMetaType::QPointF,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 31, QMetaType::QRectF,   37,   38,
    QMetaType::Void, QMetaType::QObjectStar,   40,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, 0x80000000 | 3,   48,
    QMetaType::Void, 0x80000000 | 3,   48,
    QMetaType::Void, 0x80000000 | 3,   48,
    QMetaType::Void, 0x80000000 | 52,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   59,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   80,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataSourceRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->activateTracker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 4: _t->onUndoableChange(); break;
        case 5: _t->onUndoInvoked(); break;
        case 6: _t->onRedoInvoked(); break;
        case 7: _t->on_streamingToggled(); break;
        case 8: _t->on_buttonStreamingPause_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_buttonStreamingNotifications_clicked(); break;
        case 10: _t->on_streamingSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_comboStreaming_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->onTrackerTimeUpdated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->onTrackerMovedFromWidget((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 15: _t->onTimeSlider_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->onPlotAdded((*reinterpret_cast< PlotWidget*(*)>(_a[1]))); break;
        case 17: _t->onPlotTabAdded((*reinterpret_cast< PlotDocker*(*)>(_a[1]))); break;
        case 18: _t->onPlotZoomChanged((*reinterpret_cast< PlotWidget*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2]))); break;
        case 19: _t->on_tabbedAreaDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 20: _t->updateDataAndReplot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->onUpdateLeftTableValues(); break;
        case 22: _t->onDeleteMultipleCurves((*reinterpret_cast< const std::vector<std::string>(*)>(_a[1]))); break;
        case 23: _t->onAddCustomPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 24: _t->onEditCustomPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 25: _t->onRefreshCustomPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 26: _t->onCustomPlotCreated((*reinterpret_cast< CustomPlotPtr(*)>(_a[1]))); break;
        case 27: _t->onPlaybackLoop(); break;
        case 28: _t->on_actionClearRecentData_triggered(); break;
        case 29: _t->on_actionClearRecentLayout_triggered(); break;
        case 30: _t->on_actionDeleteAllData_triggered(); break;
        case 31: _t->on_actionClearBuffer_triggered(); break;
        case 32: _t->on_deleteSerieFromGroup((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 33: _t->on_streamingNotificationsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->onActionFullscreenTriggered(); break;
        case 35: _t->on_actionReportBug_triggered(); break;
        case 36: _t->on_actionCheatsheet_triggered(); break;
        case 37: _t->on_actionSupportPlotJuggler_triggered(); break;
        case 38: _t->on_actionAbout_triggered(); break;
        case 39: _t->on_actionExit_triggered(); break;
        case 40: _t->on_pushButtonActivateGrid_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_pushButtonRatio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_pushButtonPlay_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_pushButtonUseDateTime_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_pushButtonTimeTracker_pressed(); break;
        case 45: _t->on_pushButtonRemoveTimeOffset_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_buttonStreamingStart_clicked(); break;
        case 47: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->on_actionPreferences_triggered(); break;
        case 49: _t->on_actionShare_the_love_triggered(); break;
        case 50: _t->on_playbackStep_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 51: _t->on_actionLoadStyleSheet_triggered(); break;
        case 52: _t->on_pushButtonLegend_clicked(); break;
        case 53: _t->on_pushButtonZoomOut_clicked(); break;
        case 54: _t->on_buttonStreamingOptions_clicked(); break;
        case 55: _t->on_buttonHideFileFrame_clicked(); break;
        case 56: _t->on_buttonHideStreamingFrame_clicked(); break;
        case 57: _t->on_buttonHidePublishersFrame_clicked(); break;
        case 58: _t->on_buttonRecentData_clicked(); break;
        case 59: _t->on_buttonRecentLayout_clicked(); break;
        case 60: _t->on_pushButtonLoadLayout_clicked(); break;
        case 61: _t->on_pushButtonSaveLayout_clicked(); break;
        case 62: _t->on_pushButtonLoadDatafile_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotDocker* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::dataSourceRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::activateTracker)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stylesheetChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::dataSourceRemoved(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::activateTracker(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::stylesheetChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_PopupMenu_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopupMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopupMenu_t qt_meta_stringdata_PopupMenu = {
    {
QT_MOC_LITERAL(0, 0, 9) // "PopupMenu"

    },
    "PopupMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopupMenu[] = {

 // content:
       7,       // revision
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

void PopupMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PopupMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_PopupMenu.data,
      qt_meta_data_PopupMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PopupMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopupMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PopupMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int PopupMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
