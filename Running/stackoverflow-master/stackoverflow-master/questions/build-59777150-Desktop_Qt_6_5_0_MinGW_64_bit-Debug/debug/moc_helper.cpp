/****************************************************************************
** Meta object code from reading C++ file 'helper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Documents/projects/ChartGraph/helper.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helper.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHelperENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHelperENDCLASS = QtMocHelpers::stringData(
    "Helper",
    "createSerie",
    "",
    "QQuickItem*",
    "chartview",
    "removeAllSeries"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHelperENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[7];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHelperENDCLASS_t qt_meta_stringdata_CLASSHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Helper"
        QT_MOC_LITERAL(7, 11),  // "createSerie"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "QQuickItem*"
        QT_MOC_LITERAL(32, 9),  // "chartview"
        QT_MOC_LITERAL(42, 15)   // "removeAllSeries"
    },
    "Helper",
    "createSerie",
    "",
    "QQuickItem*",
    "chartview",
    "removeAllSeries"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHelperENDCLASS[] = {

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
       1,    1,   26,    2, 0x02,    1 /* Public */,
       5,    1,   29,    2, 0x02,    3 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject Helper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHelperENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Helper, std::true_type>,
        // method 'createSerie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'removeAllSeries'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>
    >,
    nullptr
} };

void Helper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Helper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createSerie((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 1: _t->removeAllSeries((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Helper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Helper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Helper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
