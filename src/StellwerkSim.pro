#-------------------------------------------------
#
# Project created by QtCreator 2015-03-15T15:31:30
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StellwerkSim
TEMPLATE = app


SOURCES +=  sources/main.cpp\
            sources/StellwerkSim/mainwindow.cpp\
            sources/Models/stellwerksuebersichtsmodel.cpp\
            #sources/Painting/stellwerk.cpp \
            sources/Daten/region.cpp \
            sources/Daten/stellwerksuebersicht.cpp \
            sources/Daten/stellwerk.cpp

HEADERS  += sources/StellwerkSim/mainwindow.h\
            sources/Models/stellwerksuebersichtsmodel.h\
            #sources/Painting/stellwerk.h \
            sources/Daten/region.h \
            sources/Daten/stellwerksuebersicht.h \
            sources/Daten/stellwerk.h


FORMS    += sources/StellwerkSim/mainwindow.ui
