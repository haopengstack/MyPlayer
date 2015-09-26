/****************************************************************************
** Meta object code from reading C++ file 'videoplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../videoplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DecodeVideo_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DecodeVideo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DecodeVideo_t qt_meta_stringdata_DecodeVideo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DecodeVideo"
QT_MOC_LITERAL(1, 12, 12), // "readOneFrame"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "DecodeVideo\0readOneFrame\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecodeVideo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,

       0        // eod
};

void DecodeVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DecodeVideo *_t = static_cast<DecodeVideo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readOneFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DecodeVideo::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DecodeVideo::readOneFrame)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DecodeVideo::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DecodeVideo.data,
      qt_meta_data_DecodeVideo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DecodeVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecodeVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DecodeVideo.stringdata0))
        return static_cast<void*>(const_cast< DecodeVideo*>(this));
    return QThread::qt_metacast(_clname);
}

int DecodeVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DecodeVideo::readOneFrame(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_VideoPlayer_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoPlayer_t qt_meta_stringdata_VideoPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoPlayer"
QT_MOC_LITERAL(1, 12, 10), // "updateTime"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "currentTime"
QT_MOC_LITERAL(4, 36, 8), // "finished"
QT_MOC_LITERAL(5, 45, 12), // "stateChanged"
QT_MOC_LITERAL(6, 58, 18), // "VideoPlayer::State"
QT_MOC_LITERAL(7, 77, 12), // "readOneFrame"
QT_MOC_LITERAL(8, 90, 10) // "readPacket"

    },
    "VideoPlayer\0updateTime\0\0currentTime\0"
    "finished\0stateChanged\0VideoPlayer::State\0"
    "readOneFrame\0readPacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,
       7,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void VideoPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoPlayer *_t = static_cast<VideoPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTime((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->stateChanged((*reinterpret_cast< VideoPlayer::State(*)>(_a[1]))); break;
        case 3: _t->readOneFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->readPacket(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoPlayer::*_t)(long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer::updateTime)) {
                *result = 0;
            }
        }
        {
            typedef void (VideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (VideoPlayer::*_t)(VideoPlayer::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer::stateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (VideoPlayer::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer::readOneFrame)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject VideoPlayer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_VideoPlayer.data,
      qt_meta_data_VideoPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoPlayer.stringdata0))
        return static_cast<void*>(const_cast< VideoPlayer*>(this));
    return QThread::qt_metacast(_clname);
}

int VideoPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VideoPlayer::updateTime(long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoPlayer::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void VideoPlayer::stateChanged(VideoPlayer::State _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoPlayer::readOneFrame(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
