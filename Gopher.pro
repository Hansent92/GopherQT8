#-------------------------------------------------
#
# Project created by
#   TJ Hansen
#       RML Summer Intern 2013
#
#-------------------------------------------------

QT       += core gui

QT += network

QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gopher
TEMPLATE = app


SOURCES += main.cpp\
        gopher.cpp \

HEADERS  += gopher.h \

FORMS    += gopher.ui

RESOURCES += \
    image.qrc
