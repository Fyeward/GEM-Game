/****************************************************************************
** Meta object code from reading C++ file 'setdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GEM-new/setdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetDlg_t {
    QByteArrayData data[21];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetDlg_t qt_meta_stringdata_SetDlg = {
    {
QT_MOC_LITERAL(0, 0, 6), // "SetDlg"
QT_MOC_LITERAL(1, 7, 10), // "changeGEM1"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "num"
QT_MOC_LITERAL(4, 23, 8), // "filename"
QT_MOC_LITERAL(5, 32, 9), // "changebg1"
QT_MOC_LITERAL(6, 42, 10), // "openmusic1"
QT_MOC_LITERAL(7, 53, 11), // "closemusic1"
QT_MOC_LITERAL(8, 65, 12), // "changemusic1"
QT_MOC_LITERAL(9, 78, 12), // "changesound1"
QT_MOC_LITERAL(10, 91, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(11, 115, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(12, 139, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(13, 163, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(14, 188, 4), // "arg1"
QT_MOC_LITERAL(15, 193, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 215, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(17, 239, 22), // "on_radioButton_pressed"
QT_MOC_LITERAL(18, 262, 24), // "on_radioButton_2_pressed"
QT_MOC_LITERAL(19, 287, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(20, 311, 26) // "on_checkBox_2_stateChanged"

    },
    "SetDlg\0changeGEM1\0\0num\0filename\0"
    "changebg1\0openmusic1\0closemusic1\0"
    "changemusic1\0changesound1\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_radioButton_pressed\0on_radioButton_2_pressed\0"
    "on_pushButton_6_clicked\0"
    "on_checkBox_2_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       5,    1,   99,    2, 0x06 /* Public */,
       6,    0,  102,    2, 0x06 /* Public */,
       7,    0,  103,    2, 0x06 /* Public */,
       8,    1,  104,    2, 0x06 /* Public */,
       9,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  110,    2, 0x08 /* Private */,
      11,    0,  111,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,
      19,    0,  120,    2, 0x08 /* Private */,
      20,    1,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void SetDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeGEM1((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->changebg1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->openmusic1(); break;
        case 3: _t->closemusic1(); break;
        case 4: _t->changemusic1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->changesound1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_radioButton_pressed(); break;
        case 13: _t->on_radioButton_2_pressed(); break;
        case 14: _t->on_pushButton_6_clicked(); break;
        case 15: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetDlg::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetDlg::changeGEM1)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SetDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetDlg::changebg1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SetDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetDlg::openmusic1)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SetDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetDlg::closemusic1)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SetDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetDlg::changemusic1)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SetDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetDlg::changesound1)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SetDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SetDlg.data,
    qt_meta_data_SetDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SetDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SetDlg::changeGEM1(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SetDlg::changebg1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SetDlg::openmusic1()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SetDlg::closemusic1()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SetDlg::changemusic1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SetDlg::changesound1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
