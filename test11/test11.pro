TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    creature.cpp \
    player.cpp \
    monster.cpp \
    logic.cpp \
    randomnumber.cpp \
    item.cpp \
    weapon.cpp \
    shop.cpp

HEADERS += \
    creature.h \
    player.h \
    monster.h \
    randomnumber.h \
    logic.h \
    item.h \
    weapon.h \
    shop.h
