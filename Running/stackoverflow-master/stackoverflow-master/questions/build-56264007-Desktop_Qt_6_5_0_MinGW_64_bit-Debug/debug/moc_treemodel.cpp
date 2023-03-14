/****************************************************************************
** Meta object code from reading C++ file 'treemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../56264007/treemodel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTreeModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTreeModelENDCLASS = QtMocHelpers::stringData(
    "TreeModel",
    "DefaultProperty",
    "items",
    "rolesChanged",
    "",
    "indexFromElement",
    "QModelIndex",
    "TreeElement*",
    "item",
    "insertElement",
    "parent",
    "pos",
    "QQmlListProperty<TreeElement>",
    "roles"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTreeModelENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[10];
    char stringdata1[16];
    char stringdata2[6];
    char stringdata3[13];
    char stringdata4[1];
    char stringdata5[17];
    char stringdata6[12];
    char stringdata7[13];
    char stringdata8[5];
    char stringdata9[14];
    char stringdata10[7];
    char stringdata11[4];
    char stringdata12[30];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTreeModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTreeModelENDCLASS_t qt_meta_stringdata_CLASSTreeModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "TreeModel"
        QT_MOC_LITERAL(10, 15),  // "DefaultProperty"
        QT_MOC_LITERAL(26, 5),  // "items"
        QT_MOC_LITERAL(32, 12),  // "rolesChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 16),  // "indexFromElement"
        QT_MOC_LITERAL(63, 11),  // "QModelIndex"
        QT_MOC_LITERAL(75, 12),  // "TreeElement*"
        QT_MOC_LITERAL(88, 4),  // "item"
        QT_MOC_LITERAL(93, 13),  // "insertElement"
        QT_MOC_LITERAL(107, 6),  // "parent"
        QT_MOC_LITERAL(114, 3),  // "pos"
        QT_MOC_LITERAL(118, 29),  // "QQmlListProperty<TreeElement>"
        QT_MOC_LITERAL(148, 5)   // "roles"
    },
    "TreeModel",
    "DefaultProperty",
    "items",
    "rolesChanged",
    "",
    "indexFromElement",
    "QModelIndex",
    "TreeElement*",
    "item",
    "insertElement",
    "parent",
    "pos",
    "QQmlListProperty<TreeElement>",
    "roles"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTreeModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       2,   65, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   46,    4, 0x06,    3 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   47,    4, 0x02,    4 /* Public */,
       9,    3,   50,    4, 0x02,    6 /* Public */,
       9,    2,   57,    4, 0x22,   10 /* Public | MethodCloned */,
       9,    1,   62,    4, 0x22,   13 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 6, QMetaType::Int,    8,   10,   11,
    QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 6,    8,   10,
    QMetaType::Bool, 0x80000000 | 7,    8,

 // properties: name, type, flags
       2, 0x80000000 | 12, 0x00015009, uint(-1), 0,
      13, QMetaType::QVariantList, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSTreeModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTreeModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTreeModelENDCLASS_t,
        // property 'items'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<TreeElement>, std::true_type>,
        // property 'roles'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TreeModel, std::true_type>,
        // method 'rolesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'indexFromElement'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeElement *, std::false_type>,
        // method 'insertElement'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeElement *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertElement'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeElement *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'insertElement'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeElement *, std::false_type>
    >,
    nullptr
} };

void TreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rolesChanged(); break;
        case 1: { QModelIndex _r = _t->indexFromElement((*reinterpret_cast< std::add_pointer_t<TreeElement*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->insertElement((*reinterpret_cast< std::add_pointer_t<TreeElement*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->insertElement((*reinterpret_cast< std::add_pointer_t<TreeElement*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->insertElement((*reinterpret_cast< std::add_pointer_t<TreeElement*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TreeModel::*)();
            if (_t _q_method = &TreeModel::rolesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<TreeElement>*>(_v) = _t->items(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->roles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRoles(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *TreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTreeModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int TreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TreeModel::rolesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
