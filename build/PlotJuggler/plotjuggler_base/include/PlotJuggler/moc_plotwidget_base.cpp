/****************************************************************************
** Meta object code from reading C++ file 'plotwidget_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/PlotJuggler/plotjuggler_base/include/PlotJuggler/plotwidget_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotwidget_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PJ__PlotWidgetBase_t {
    QByteArrayData data[13];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PJ__PlotWidgetBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PJ__PlotWidgetBase_t qt_meta_stringdata_PJ__PlotWidgetBase = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PJ::PlotWidgetBase"
QT_MOC_LITERAL(1, 19, 16), // "curveListChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "viewResized"
QT_MOC_LITERAL(4, 49, 15), // "dragEnterSignal"
QT_MOC_LITERAL(5, 65, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(6, 82, 5), // "event"
QT_MOC_LITERAL(7, 88, 10), // "dropSignal"
QT_MOC_LITERAL(8, 99, 11), // "QDropEvent*"
QT_MOC_LITERAL(9, 111, 17), // "legendSizeChanged"
QT_MOC_LITERAL(10, 129, 8), // "new_size"
QT_MOC_LITERAL(11, 138, 6), // "replot"
QT_MOC_LITERAL(12, 145, 15) // "removeAllCurves"

    },
    "PJ::PlotWidgetBase\0curveListChanged\0"
    "\0viewResized\0dragEnterSignal\0"
    "QDragEnterEvent*\0event\0dropSignal\0"
    "QDropEvent*\0legendSizeChanged\0new_size\0"
    "replot\0removeAllCurves"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PJ__PlotWidgetBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       4,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       9,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   62,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PJ::PlotWidgetBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotWidgetBase *_t = static_cast<PlotWidgetBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->curveListChanged(); break;
        case 1: _t->viewResized((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 2: _t->dragEnterSignal((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 3: _t->dropSignal((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 4: _t->legendSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->replot(); break;
        case 6: _t->removeAllCurves(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlotWidgetBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::curveListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlotWidgetBase::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::viewResized)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlotWidgetBase::*_t)(QDragEnterEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::dragEnterSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlotWidgetBase::*_t)(QDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::dropSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlotWidgetBase::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidgetBase::legendSizeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PJ::PlotWidgetBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PJ__PlotWidgetBase.data,
      qt_meta_data_PJ__PlotWidgetBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PJ::PlotWidgetBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PJ::PlotWidgetBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PJ__PlotWidgetBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PJ::PlotWidgetBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PJ::PlotWidgetBase::curveListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PJ::PlotWidgetBase::viewResized(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PJ::PlotWidgetBase::dragEnterSignal(QDragEnterEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PJ::PlotWidgetBase::dropSignal(QDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PJ::PlotWidgetBase::legendSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
