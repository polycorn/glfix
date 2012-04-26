#--------------------------------------------------
#
# Project created by QtCreator 2012-04-23T00:00:04
#
#-------------------------------------------------

QT       -= core gui

TARGET = glfix
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    glfix/glfix.cpp \
    glfix/glfixcamera.cpp

HEADERS += \
    glfix/glfix.h \
	glfix/glm/*.* \
    glfix/glfixcamera.h


unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}


