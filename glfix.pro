#-------------------------------------------------
#
# Project created by QtCreator 2012-04-23T00:00:04
#
#-------------------------------------------------

QT       -= core gui

TARGET = glfix
TEMPLATE = lib
CONFIG += staticlib

SOURCES += glfix.cpp

HEADERS += glfix.h
unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
