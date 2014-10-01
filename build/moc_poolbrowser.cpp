/****************************************************************************
** Meta object code from reading C++ file 'poolbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/poolbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poolbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PoolBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   59,   12,   12, 0x0a,
     105,   12,   12,   12, 0x0a,
     129,   12,   12,   12, 0x0a,
     139,   12,   12,   12, 0x0a,
     150,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PoolBrowser[] = {
    "PoolBrowser\0\0err\0"
    "networkError(QNetworkReply::NetworkError)\0"
    "finished\0parseNetworkResponse(QNetworkReply*)\0"
    "randomChuckNorrisJoke()\0bittrex()\0"
    "swisscex()\0egaldo()\0"
};

void PoolBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PoolBrowser *_t = static_cast<PoolBrowser *>(_o);
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->parseNetworkResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->randomChuckNorrisJoke(); break;
        case 3: _t->bittrex(); break;
        case 4: _t->swisscex(); break;
        case 5: _t->egaldo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PoolBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PoolBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PoolBrowser,
      qt_meta_data_PoolBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PoolBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PoolBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PoolBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PoolBrowser))
        return static_cast<void*>(const_cast< PoolBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int PoolBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PoolBrowser::networkError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
