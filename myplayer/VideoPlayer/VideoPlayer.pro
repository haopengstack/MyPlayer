#-------------------------------------------------
#
# Project created by QtCreator 2012-12-31T15:02:52
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VideoPlayer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    videoplayer.cpp

HEADERS  += mainwindow.h \
    videoplayer.h

FORMS    += mainwindow.ui


INCLUDEPATH +=  SDL/include
LIBS += SDL/lib/libSDL.dll.a

INCLUDEPATH +=  ffmpeg/include
LIBS += ffmpeg/lib/libavcodec.dll.a \
        ffmpeg/lib/libavdevice.dll.a \
        ffmpeg/lib/libavfilter.dll.a \
        ffmpeg/lib/libavformat.dll.a \
        ffmpeg/lib/libavutil.dll.a \
        ffmpeg/lib/libpostproc.dll.a \
        ffmpeg/lib/libswscale.dll.a \

RESOURCES += \
    1.qrc
