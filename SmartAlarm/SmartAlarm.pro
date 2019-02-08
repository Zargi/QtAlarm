#-------------------------------------------------
#
# Project created by QtCreator 2018-12-07T04:19:42
#
#-------------------------------------------------

QT       += core gui\
            network\
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartAlarm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    radioscreen.cpp

HEADERS  += mainwindow.h \
    radioscreen.h

FORMS    += mainwindow.ui \
    radioscreen.ui

QMAKE_CXXFLAGS += -O2\
                  -std=c++11
