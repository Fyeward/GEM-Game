/****************************************************************************
** Meta object code from reading C++ file 'menudlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GEM-new/menudlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menudlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuDlg_t {
    QByteArrayData data[18];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuDlg_t qt_meta_stringdata_MenuDlg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MenuDlg"
QT_MOC_LITERAL(1, 8, 10), // "changeGEM3"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "num"
QT_MOC_LITERAL(4, 24, 8), // "filename"
QT_MOC_LITERAL(5, 33, 9), // "changebg3"
QT_MOC_LITERAL(6, 43, 10), // "openmusic3"
QT_MOC_LITERAL(7, 54, 11), // "closemusic3"
QT_MOC_LITERAL(8, 66, 12), // "changemusic3"
QT_MOC_LITERAL(9, 79, 12), // "changesound3"
QT_MOC_LITERAL(10, 92, 10), // "changeGEM2"
QT_MOC_LITERAL(11, 103, 9), // "changebg2"
QT_MOC_LITERAL(12, 113, 10), // "openmusic2"
QT_MOC_LITERAL(13, 124, 11), // "closemusic2"
QT_MOC_LITERAL(14, 136, 12), // "changemusic2"
QT_MOC_LITERAL(15, 149, 12), // "changesound2"
QT_MOC_LITERAL(16, 162, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(17, 184, 23) // "on_pushButton_2_clicked"

    },
    "MenuDlg\0changeGEM3\0\0num\0filename\0"
    "changebg3\0openmusic3\0closemusic3\0"
    "changemusic3\0changesound3\0changeGEM2\0"
    "changebg2\0openmusic2\0closemusic2\0"
    "changemusic2\0changesound2\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    1,   89,    2, 0x06 /* Public */,
       6,    0,   92,    2, 0x06 /* Public */,
       7,    0,   93,    2, 0x06 /* Public */,
       8,    1,   94,    2, 0x06 /* Public */,
       9,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,  100,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      15,    1,  113,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeGEM3((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->changebg3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->openmusic3(); break;
        case 3: _t->closemusic3(); break;
        case 4: _t->changemusic3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->changesound3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->changeGEM2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->changebg2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->openmusic2(); break;
        case 9: _t->closemusic2(); break;
        case 10: _t->changemusic2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->changesound2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuDlg::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDlg::changeGEM3)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDlg::changebg3)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDlg::openmusic3)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MenuDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDlg::closemusic3)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MenuDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDlg::changemusic3)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MenuDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDlg::changesound3)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MenuDlg.data,
    qt_meta_data_MenuDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MenuDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MenuDlg::changeGEM3(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MenuDlg::changebg3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MenuDlg::openmusic3()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MenuDlg::closemusic3()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MenuDlg::changemusic3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MenuDlg::changesound3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
