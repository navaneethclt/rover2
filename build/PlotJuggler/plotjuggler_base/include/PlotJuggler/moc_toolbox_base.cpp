/****************************************************************************
** Meta object code from reading C++ file 'toolbox_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/PlotJuggler/plotjuggler_base/include/PlotJuggler/toolbox_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbox_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PJ__ToolboxPlugin_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PJ__ToolboxPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PJ__ToolboxPlugin_t qt_meta_stringdata_PJ__ToolboxPlugin = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PJ::ToolboxPlugin"
QT_MOC_LITERAL(1, 18, 11), // "plotCreated"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "std::string"
QT_MOC_LITERAL(4, 43, 9), // "plot_name"
QT_MOC_LITERAL(5, 53, 6), // "closed"
QT_MOC_LITERAL(6, 60, 12) // "onShowWidget"

    },
    "PJ::ToolboxPlugin\0plotCreated\0\0"
    "std::string\0plot_name\0closed\0onShowWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PJ__ToolboxPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void PJ::ToolboxPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolboxPlugin *_t = static_cast<ToolboxPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->plotCreated((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->closed(); break;
        case 2: { bool _r = _t->onShowWidget();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ToolboxPlugin::*_t)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolboxPlugin::plotCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ToolboxPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolboxPlugin::closed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PJ::ToolboxPlugin::staticMetaObject = {
    { &PlotJugglerPlugin::staticMetaObject, qt_meta_stringdata_PJ__ToolboxPlugin.data,
      qt_meta_data_PJ__ToolboxPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PJ::ToolboxPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PJ::ToolboxPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PJ__ToolboxPlugin.stringdata0))
        return static_cast<void*>(this);
    return PlotJugglerPlugin::qt_metacast(_clname);
}

int PJ::ToolboxPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlotJugglerPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PJ::ToolboxPlugin::plotCreated(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PJ::ToolboxPlugin::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
