#-------------------------------------------------
#
# Project created by QtCreator 2019-07-17T11:11:20
#
#-------------------------------------------------

QT       -= gui

TARGET = log4qtDll
TEMPLATE = lib

DEFINES += LOG4QTDLL_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
include(log4qt/log4qt.pri)
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        log4qtdll.cpp

HEADERS += \
        log4qtdll.h \
        log4qtdll_global.h 

MOC_DIR  = temp/moc
RCC_DIR  = temp/rcc
UI_DIR   = temp/ui
OBJECTS_DIR = temp/obj
DESTDIR  = $$PWD/../bin

unix {
    target.path = /usr/lib
    INSTALLS += target
}
