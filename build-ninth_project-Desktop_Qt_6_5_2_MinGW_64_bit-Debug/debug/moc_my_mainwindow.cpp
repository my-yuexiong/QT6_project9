/****************************************************************************
** Meta object code from reading C++ file 'my_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ninth_project/my_mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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
struct qt_meta_stringdata_CLASSMy_MainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMy_MainWindowENDCLASS = QtMocHelpers::stringData(
    "My_MainWindow",
    "backToSignIn",
    "",
    "on_actiondakaiwenjian_triggered",
    "on_actiontuichu_triggered",
    "on_actionbaocunwenjian_triggered",
    "on_actionshezhiziti_triggered",
    "on_actionshezhi_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMy_MainWindowENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[26];
    char stringdata5[33];
    char stringdata6[30];
    char stringdata7[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMy_MainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMy_MainWindowENDCLASS_t qt_meta_stringdata_CLASSMy_MainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "My_MainWindow"
        QT_MOC_LITERAL(14, 12),  // "backToSignIn"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 31),  // "on_actiondakaiwenjian_triggered"
        QT_MOC_LITERAL(60, 25),  // "on_actiontuichu_triggered"
        QT_MOC_LITERAL(86, 32),  // "on_actionbaocunwenjian_triggered"
        QT_MOC_LITERAL(119, 29),  // "on_actionshezhiziti_triggered"
        QT_MOC_LITERAL(149, 25)   // "on_actionshezhi_triggered"
    },
    "My_MainWindow",
    "backToSignIn",
    "",
    "on_actiondakaiwenjian_triggered",
    "on_actiontuichu_triggered",
    "on_actionbaocunwenjian_triggered",
    "on_actionshezhiziti_triggered",
    "on_actionshezhi_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMy_MainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject My_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMy_MainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMy_MainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMy_MainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<My_MainWindow, std::true_type>,
        // method 'backToSignIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiondakaiwenjian_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontuichu_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionbaocunwenjian_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionshezhiziti_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionshezhi_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void My_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<My_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backToSignIn(); break;
        case 1: _t->on_actiondakaiwenjian_triggered(); break;
        case 2: _t->on_actiontuichu_triggered(); break;
        case 3: _t->on_actionbaocunwenjian_triggered(); break;
        case 4: _t->on_actionshezhiziti_triggered(); break;
        case 5: _t->on_actionshezhi_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (My_MainWindow::*)();
            if (_t _q_method = &My_MainWindow::backToSignIn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *My_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *My_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMy_MainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int My_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void My_MainWindow::backToSignIn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
