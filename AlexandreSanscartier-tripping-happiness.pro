TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    command.cpp \
    moveunitcommand.cpp \
    unit.cpp

HEADERS += \
    command.h \
    moveunitcommand.h \
    unit.h

