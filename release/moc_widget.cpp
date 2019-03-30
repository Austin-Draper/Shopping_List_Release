/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Shopping_List/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[17];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 22), // "on_loginSubmit_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "on_registerButton_clicked"
QT_MOC_LITERAL(4, 57, 24), // "on_regBackButton_clicked"
QT_MOC_LITERAL(5, 82, 28), // "on_regRegisterButton_clicked"
QT_MOC_LITERAL(6, 111, 27), // "on_unregisterButton_clicked"
QT_MOC_LITERAL(7, 139, 31), // "on_unregisterBackButton_clicked"
QT_MOC_LITERAL(8, 171, 37), // "on_unregisterUnregisterButton..."
QT_MOC_LITERAL(9, 209, 21), // "on_homeLogout_clicked"
QT_MOC_LITERAL(10, 231, 24), // "on_homeAddButton_clicked"
QT_MOC_LITERAL(11, 256, 23), // "onlistWidgetItemClicked"
QT_MOC_LITERAL(12, 280, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 297, 4), // "item"
QT_MOC_LITERAL(14, 302, 25), // "onlistWidget_2ItemClicked"
QT_MOC_LITERAL(15, 328, 26), // "on_homeClearButton_clicked"
QT_MOC_LITERAL(16, 355, 27) // "on_homeSubmitButton_clicked"

    },
    "Widget\0on_loginSubmit_clicked\0\0"
    "on_registerButton_clicked\0"
    "on_regBackButton_clicked\0"
    "on_regRegisterButton_clicked\0"
    "on_unregisterButton_clicked\0"
    "on_unregisterBackButton_clicked\0"
    "on_unregisterUnregisterButton_clicked\0"
    "on_homeLogout_clicked\0on_homeAddButton_clicked\0"
    "onlistWidgetItemClicked\0QListWidgetItem*\0"
    "item\0onlistWidget_2ItemClicked\0"
    "on_homeClearButton_clicked\0"
    "on_homeSubmitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loginSubmit_clicked(); break;
        case 1: _t->on_registerButton_clicked(); break;
        case 2: _t->on_regBackButton_clicked(); break;
        case 3: _t->on_regRegisterButton_clicked(); break;
        case 4: _t->on_unregisterButton_clicked(); break;
        case 5: _t->on_unregisterBackButton_clicked(); break;
        case 6: _t->on_unregisterUnregisterButton_clicked(); break;
        case 7: _t->on_homeLogout_clicked(); break;
        case 8: _t->on_homeAddButton_clicked(); break;
        case 9: _t->onlistWidgetItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->onlistWidget_2ItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->on_homeClearButton_clicked(); break;
        case 12: _t->on_homeSubmitButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
