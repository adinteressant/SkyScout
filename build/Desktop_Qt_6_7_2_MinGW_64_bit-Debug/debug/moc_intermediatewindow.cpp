/****************************************************************************
** Meta object code from reading C++ file 'intermediatewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../intermediatewindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intermediatewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSintermediateWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSintermediateWindowENDCLASS = QtMocHelpers::stringData(
    "intermediateWindow",
    "returnToMainWindow",
    "",
    "on_return_btn_clicked",
    "on_past_data_btn_clicked",
    "showIntermediateWindow",
    "on_present_data_btn_clicked",
    "showIntermediateWindowP",
    "on_future_data_btn_clicked",
    "showIntermediateWindowF",
    "updateLabelText"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSintermediateWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject intermediateWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSintermediateWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSintermediateWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSintermediateWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<intermediateWindow, std::true_type>,
        // method 'returnToMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_return_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_past_data_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showIntermediateWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_present_data_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showIntermediateWindowP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_future_data_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showIntermediateWindowF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLabelText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void intermediateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<intermediateWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->returnToMainWindow(); break;
        case 1: _t->on_return_btn_clicked(); break;
        case 2: _t->on_past_data_btn_clicked(); break;
        case 3: _t->showIntermediateWindow(); break;
        case 4: _t->on_present_data_btn_clicked(); break;
        case 5: _t->showIntermediateWindowP(); break;
        case 6: _t->on_future_data_btn_clicked(); break;
        case 7: _t->showIntermediateWindowF(); break;
        case 8: _t->updateLabelText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (intermediateWindow::*)();
            if (_t _q_method = &intermediateWindow::returnToMainWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *intermediateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *intermediateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSintermediateWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int intermediateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void intermediateWindow::returnToMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP