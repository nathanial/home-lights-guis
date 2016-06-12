#-------------------------------------------------
#
# Project created by QtCreator 2016-06-12T01:35:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HomeLights
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    lightgroupcontrol.cpp \
    inlinecolorpicker.cpp

HEADERS  += mainwindow.h \
    lightgroupcontrol.h \
    inlinecolorpicker.h

FORMS    += mainwindow.ui \
    lightgroupcontrol.ui \
    inlinecolorpicker.ui

DISTFILES +=
