/****************************************************************************
** Meta object code from reading C++ file 'gamedlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GEM-new/gamedlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamedlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameDlg_t {
    QByteArrayData data[13];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameDlg_t qt_meta_stringdata_GameDlg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GameDlg"
QT_MOC_LITERAL(1, 8, 9), // "succeeded"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "openset"
QT_MOC_LITERAL(4, 27, 24), // "on_pushButton_66_clicked"
QT_MOC_LITERAL(5, 52, 24), // "on_pushButton_67_clicked"
QT_MOC_LITERAL(6, 77, 19), // "onIconButtonPressed"
QT_MOC_LITERAL(7, 97, 12), // "continueGame"
QT_MOC_LITERAL(8, 110, 11), // "restartGame"
QT_MOC_LITERAL(9, 122, 16), // "backToMainwindow"
QT_MOC_LITERAL(10, 139, 9), // "toSetting"
QT_MOC_LITERAL(11, 149, 10), // "toExitGame"
QT_MOC_LITERAL(12, 160, 5) // "Ttime"

    },
    "GameDlg\0succeeded\0\0openset\0"
    "on_pushButton_66_clicked\0"
    "on_pushButton_67_clicked\0onIconButtonPressed\0"
    "continueGame\0restartGame\0backToMainwindow\0"
    "toSetting\0toExitGame\0Ttime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
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
    QMetaType::Void,

       0        // eod
};

void GameDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->succeeded(); break;
        case 1: _t->openset(); break;
        case 2: _t->on_pushButton_66_clicked(); break;
        case 3: _t->on_pushButton_67_clicked(); break;
        case 4: _t->onIconButtonPressed(); break;
        case 5: _t->continueGame(); break;
        case 6: _t->restartGame(); break;
        case 7: _t->backToMainwindow(); break;
        case 8: _t->toSetting(); break;
        case 9: _t->toExitGame(); break;
        case 10: _t->Ttime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameDlg::succeeded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameDlg::openset)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GameDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GameDlg.data,
    qt_meta_data_GameDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GameDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GameDlg::succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameDlg::openset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
