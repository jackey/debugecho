#-------------------------------------------------
#
# Project created by QtCreator 2013-11-11T08:31:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = debugecho
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    debugserver.cpp

HEADERS  += mainwindow.h \
    debugserver.h

FORMS    += mainwindow.ui
