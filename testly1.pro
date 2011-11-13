#-------------------------------------------------
#
# Project created by QtCreator 2011-10-27T19:18:30
#
#-------------------------------------------------

QT       += core gui\
           xml

TARGET = testly1
TEMPLATE = app


SOURCES += main.cpp\
        testly.cpp

RESOURCES += testly.qrc

HEADERS  += testly.h

FORMS    += testly.ui

CONFIG += mobility
MOBILITY = messaging

symbian {
    TARGET.UID3 = 0xeb939180
    # TARGET.CAPABILITY += 
    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}
