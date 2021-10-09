/****************************************************************************
** Meta object code from reading C++ file 'toolbox_FFT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/PlotJuggler/plotjuggler_plugins/ToolboxFFT/toolbox_FFT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbox_FFT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolboxFFT_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolboxFFT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolboxFFT_t qt_meta_stringdata_ToolboxFFT = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ToolboxFFT"
QT_MOC_LITERAL(1, 11, 12), // "onShowWidget"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "onDragEnterEvent"
QT_MOC_LITERAL(4, 42, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(5, 59, 5), // "event"
QT_MOC_LITERAL(6, 65, 11), // "onDropEvent"
QT_MOC_LITERAL(7, 77, 11), // "QDropEvent*"
QT_MOC_LITERAL(8, 89, 13), // "onViewResized"
QT_MOC_LITERAL(9, 103, 4), // "rect"
QT_MOC_LITERAL(10, 108, 11), // "onSaveCurve"
QT_MOC_LITERAL(11, 120, 17), // "calculateCurveFFT"
QT_MOC_LITERAL(12, 138, 13) // "onClearCurves"

    },
    "ToolboxFFT\0onShowWidget\0\0onDragEnterEvent\0"
    "QDragEnterEvent*\0event\0onDropEvent\0"
    "QDropEvent*\0onViewResized\0rect\0"
    "onSaveCurve\0calculateCurveFFT\0"
    "onClearCurves"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolboxFFT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, QMetaType::QRectF,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToolboxFFT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolboxFFT *_t = static_cast<ToolboxFFT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->onShowWidget();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->onDragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 2: _t->onDropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 3: _t->onViewResized((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 4: _t->onSaveCurve(); break;
        case 5: _t->calculateCurveFFT(); break;
        case 6: _t->onClearCurves(); break;
        default: ;
        }
    }
}

const QMetaObject ToolboxFFT::staticMetaObject = {
    { &PJ::ToolboxPlugin::staticMetaObject, qt_meta_stringdata_ToolboxFFT.data,
      qt_meta_data_ToolboxFFT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolboxFFT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolboxFFT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolboxFFT.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.Toolbox"))
        return static_cast< PJ::ToolboxPlugin*>(this);
    return PJ::ToolboxPlugin::qt_metacast(_clname);
}

int ToolboxFFT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::ToolboxPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'f',  'a',  'c',  'o',  'n',  't', 
    'i',  'd',  'a',  'v',  'i',  'd',  'e',  '.', 
    'P',  'l',  'o',  't',  'J',  'u',  'g',  'g', 
    'l',  'e',  'r',  '3',  '.',  'T',  'o',  'o', 
    'l',  'b',  'o',  'x',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'T',  'o', 
    'o',  'l',  'b',  'o',  'x',  'F',  'F',  'T', 
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x10, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'h',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'f',  'a',  'c',  'o',  'n',  't', 
    'i',  'd',  'a',  'v',  'i',  'd',  'e',  '.', 
    'P',  'l',  'o',  't',  'J',  'u',  'g',  'g', 
    'l',  'e',  'r',  '3',  '.',  'T',  'o',  'o', 
    'l',  'b',  'o',  'x',  0x95, 0x09, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0d, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0a, 0x00, 'T',  'o',  'o',  'l',  'b',  'o', 
    'x',  'F',  'F',  'T',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ToolboxFFT, ToolboxFFT)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
