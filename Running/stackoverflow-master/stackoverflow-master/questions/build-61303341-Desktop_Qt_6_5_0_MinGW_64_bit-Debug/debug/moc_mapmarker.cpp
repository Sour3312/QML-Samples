/****************************************************************************
** Meta object code from reading C++ file 'mapmarker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Documents/projects/MAke polyline with onclick/mapmarker.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapmarker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMarkerModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMarkerModelENDCLASS = QtMocHelpers::stringData(
    "MarkerModel",
    "pathChanged",
    "",
    "addMarker",
    "QGeoCoordinate",
    "coordinate",
    "elevation",
    "dateTime",
    "path"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMarkerModelENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[15];
    char stringdata5[11];
    char stringdata6[10];
    char stringdata7[9];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMarkerModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMarkerModelENDCLASS_t qt_meta_stringdata_CLASSMarkerModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "MarkerModel"
        QT_MOC_LITERAL(12, 11),  // "pathChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 9),  // "addMarker"
        QT_MOC_LITERAL(35, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(50, 10),  // "coordinate"
        QT_MOC_LITERAL(61, 9),  // "elevation"
        QT_MOC_LITERAL(71, 8),  // "dateTime"
        QT_MOC_LITERAL(80, 4)   // "path"
    },
    "MarkerModel",
    "pathChanged",
    "",
    "addMarker",
    "QGeoCoordinate",
    "coordinate",
    "elevation",
    "dateTime",
    "path"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMarkerModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    3,   39,    2, 0x02,    3 /* Public */,
       3,    2,   46,    2, 0x22,    7 /* Public | MethodCloned */,
       3,    1,   51,    2, 0x22,   10 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Float, QMetaType::QDateTime,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Float,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
       8, QMetaType::QVariantList, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MarkerModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSMarkerModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMarkerModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMarkerModelENDCLASS_t,
        // property 'path'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MarkerModel, std::true_type>,
        // method 'pathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addMarker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        // method 'addMarker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'addMarker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>
    >,
    nullptr
} };

void MarkerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MarkerModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->addMarker((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[3]))); break;
        case 2: _t->addMarker((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 3: _t->addMarker((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MarkerModel::*)();
            if (_t _q_method = &MarkerModel::pathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MarkerModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->path(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MarkerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarkerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMarkerModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MarkerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MarkerModel::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
