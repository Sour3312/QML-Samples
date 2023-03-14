/****************************************************************************
** Meta object code from reading C++ file 'treeelement.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../56264007/treeelement.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treeelement.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTreeElementENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTreeElementENDCLASS = QtMocHelpers::stringData(
    "TreeElement",
    "DefaultProperty",
    "items",
    "parentItem",
    "TreeElement*",
    "",
    "pos",
    "count",
    "QQmlListProperty<TreeElement>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTreeElementENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[6];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[1];
    char stringdata6[4];
    char stringdata7[6];
    char stringdata8[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTreeElementENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTreeElementENDCLASS_t qt_meta_stringdata_CLASSTreeElementENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "TreeElement"
        QT_MOC_LITERAL(12, 15),  // "DefaultProperty"
        QT_MOC_LITERAL(28, 5),  // "items"
        QT_MOC_LITERAL(34, 10),  // "parentItem"
        QT_MOC_LITERAL(45, 12),  // "TreeElement*"
        QT_MOC_LITERAL(58, 0),  // ""
        QT_MOC_LITERAL(59, 3),  // "pos"
        QT_MOC_LITERAL(63, 5),  // "count"
        QT_MOC_LITERAL(69, 29)   // "QQmlListProperty<TreeElement>"
    },
    "TreeElement",
    "DefaultProperty",
    "items",
    "parentItem",
    "TreeElement*",
    "",
    "pos",
    "count",
    "QQmlListProperty<TreeElement>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTreeElementENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       1,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   34,    5, 0x102,    2 /* Public | MethodIsConst  */,
       6,    0,   35,    5, 0x102,    3 /* Public | MethodIsConst  */,
       7,    0,   36,    5, 0x102,    4 /* Public | MethodIsConst  */,

 // methods: parameters
    0x80000000 | 4,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
       2, 0x80000000 | 8, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TreeElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTreeElementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTreeElementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTreeElementENDCLASS_t,
        // property 'items'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<TreeElement>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TreeElement, std::true_type>,
        // method 'parentItem'
        QtPrivate::TypeAndForceComplete<TreeElement *, std::false_type>,
        // method 'pos'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'count'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void TreeElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TreeElement *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { TreeElement* _r = _t->parentItem();
            if (_a[0]) *reinterpret_cast< TreeElement**>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->pos();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->count();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TreeElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<TreeElement>*>(_v) = _t->items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *TreeElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTreeElementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TreeElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
