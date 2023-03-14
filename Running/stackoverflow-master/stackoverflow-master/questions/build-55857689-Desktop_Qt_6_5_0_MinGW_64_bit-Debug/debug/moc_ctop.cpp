/****************************************************************************
** Meta object code from reading C++ file 'ctop.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../55857689/ctop.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCTopENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCTopENDCLASS = QtMocHelpers::stringData(
    "CTop",
    "middles",
    "QList<QObject*>",
    "",
    "middle",
    "CMiddle*",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCTopENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[5];
    char stringdata1[8];
    char stringdata2[16];
    char stringdata3[1];
    char stringdata4[7];
    char stringdata5[9];
    char stringdata6[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCTopENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCTopENDCLASS_t qt_meta_stringdata_CLASSCTopENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "CTop"
        QT_MOC_LITERAL(5, 7),  // "middles"
        QT_MOC_LITERAL(13, 15),  // "QList<QObject*>"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 6),  // "middle"
        QT_MOC_LITERAL(37, 8),  // "CMiddle*"
        QT_MOC_LITERAL(46, 5)   // "index"
    },
    "CTop",
    "middles",
    "QList<QObject*>",
    "",
    "middle",
    "CMiddle*",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCTopENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    3, 0x02,    1 /* Public */,
       4,    1,   27,    3, 0x02,    2 /* Public */,

 // methods: parameters
    0x80000000 | 2,
    0x80000000 | 5, QMetaType::Int,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject CTop::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCTopENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCTopENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCTopENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CTop, std::true_type>,
        // method 'middles'
        QtPrivate::TypeAndForceComplete<QList<QObject*>, std::false_type>,
        // method 'middle'
        QtPrivate::TypeAndForceComplete<CMiddle *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void CTop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTop *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QObject*> _r = _t->middles();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 1: { CMiddle* _r = _t->middle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< CMiddle**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *CTop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCTopENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CTop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
