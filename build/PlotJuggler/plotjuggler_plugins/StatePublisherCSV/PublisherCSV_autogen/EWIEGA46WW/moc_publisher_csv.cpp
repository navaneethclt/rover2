/****************************************************************************
** Meta object code from reading C++ file 'publisher_csv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/PlotJuggler/plotjuggler_plugins/StatePublisherCSV/publisher_csv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'publisher_csv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatePublisherCSV_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatePublisherCSV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatePublisherCSV_t qt_meta_stringdata_StatePublisherCSV = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StatePublisherCSV"
QT_MOC_LITERAL(1, 18, 10), // "setEnabled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "enabled"
QT_MOC_LITERAL(4, 38, 14) // "onWindowClosed"

    },
    "StatePublisherCSV\0setEnabled\0\0enabled\0"
    "onWindowClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatePublisherCSV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void StatePublisherCSV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StatePublisherCSV *_t = static_cast<StatePublisherCSV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onWindowClosed(); break;
        default: ;
        }
    }
}

const QMetaObject StatePublisherCSV::staticMetaObject = {
    { &PJ::StatePublisher::staticMetaObject, qt_meta_stringdata_StatePublisherCSV.data,
      qt_meta_data_StatePublisherCSV,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StatePublisherCSV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatePublisherCSV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatePublisherCSV.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.StatePublisher"))
        return static_cast< PJ::StatePublisher*>(this);
    return PJ::StatePublisher::qt_metacast(_clname);
}

int StatePublisherCSV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::StatePublisher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ')',  0x00, 'f',  'a',  'c',  'o',  'n',  't', 
    'i',  'd',  'a',  'v',  'i',  'd',  'e',  '.', 
    'P',  'l',  'o',  't',  'J',  'u',  'g',  'g', 
    'l',  'e',  'r',  '3',  '.',  'S',  't',  'a', 
    't',  'e',  'P',  'u',  'b',  'l',  'i',  's', 
    'h',  'e',  'r',  0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x11, 0x00, 'S',  't', 
    'a',  't',  'e',  'P',  'u',  'b',  'l',  'i', 
    's',  'h',  'e',  'r',  'C',  'S',  'V',  0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ')',  0x00, 'f',  'a',  'c',  'o',  'n',  't', 
    'i',  'd',  'a',  'v',  'i',  'd',  'e',  '.', 
    'P',  'l',  'o',  't',  'J',  'u',  'g',  'g', 
    'l',  'e',  'r',  '3',  '.',  'S',  't',  'a', 
    't',  'e',  'P',  'u',  'b',  'l',  'i',  's', 
    'h',  'e',  'r',  0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x11, 0x00, 'S',  't',  'a',  't',  'e',  'P', 
    'u',  'b',  'l',  'i',  's',  'h',  'e',  'r', 
    'C',  'S',  'V',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(StatePublisherCSV, StatePublisherCSV)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
