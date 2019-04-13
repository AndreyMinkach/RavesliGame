TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    creature.cpp \
    player.cpp \
    monster.cpp \
    addition.cpp \
    logic.cpp \
    randomnumber.cpp

HEADERS += \
    creature.h \
    player.h \
    monster.h \
    randomnumber.h \
    logic.h \
    addition.h
