/****************************************************************************
** Meta object code from reading C++ file 'toolbox_quaternion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/PlotJuggler/plotjuggler_plugins/ToolboxQuaternion/toolbox_quaternion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbox_quaternion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolboxQuaternion_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolboxQuaternion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolboxQuaternion_t qt_meta_stringdata_ToolboxQuaternion = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ToolboxQuaternion"
QT_MOC_LITERAL(1, 18, 12), // "onShowWidget"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "on_pushButtonSave_clicked"
QT_MOC_LITERAL(4, 58, 19), // "onParametersChanged"
QT_MOC_LITERAL(5, 78, 8) // "onClosed"

    },
    "ToolboxQuaternion\0onShowWidget\0\0"
    "on_pushButtonSave_clicked\0onParametersChanged\0"
    "onClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolboxQuaternion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToolboxQuaternion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolboxQuaternion *_t = static_cast<ToolboxQuaternion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->onShowWidget();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pushButtonSave_clicked(); break;
        case 2: _t->onParametersChanged(); break;
        case 3: _t->onClosed(); break;
        default: ;
        }
    }
}

const QMetaObject ToolboxQuaternion::staticMetaObject = {
    { &PJ::ToolboxPlugin::staticMetaObject, qt_meta_stringdata_ToolboxQuaternion.data,
      qt_meta_data_ToolboxQuaternion,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolboxQuaternion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolboxQuaternion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolboxQuaternion.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.Toolbox"))
        return static_cast< PJ::ToolboxPlugin*>(this);
    return PJ::ToolboxPlugin::qt_metacast(_clname);
}

int ToolboxQuaternion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::ToolboxPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 'f',  'a',  'c',  'o',  'n',  't', 
    'i',  'd',  'a',  'v',  'i',  'd',  'e',  '.', 
    'P',  'l',  'o',  't',  'J',  'u',  'g',  'g', 
    'l',  'e',  'r',  '3',  '.',  'T',  'o',  'o', 
    'l',  'b',  'o',  'x',  0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x11, 0x00, 'T',  'o', 
    'o',  'l',  'b',  'o',  'x',  'Q',  'u',  'a', 
    't',  'e',  'r',  'n',  'i',  'o',  'n',  0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x11, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xac, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
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
    0x11, 0x00, 'T',  'o',  'o',  'l',  'b',  'o', 
    'x',  'Q',  'u',  'a',  't',  'e',  'r',  'n', 
    'i',  'o',  'n',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ToolboxQuaternion, ToolboxQuaternion)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
