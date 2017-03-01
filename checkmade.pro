#-------------------------------------------------
#
# Project created by QtCreator 2017-02-28T19:34:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = checkmade
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamefield.cpp \
    logger.cpp

HEADERS  += mainwindow.h \
    gamefield.h \
    logger.h

FORMS    += mainwindow.ui
