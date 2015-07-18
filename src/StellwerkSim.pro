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
            sources/StellwerkSim/mainwindow.cpp \
#    sources/Painting/gleis.cpp \
#    sources/Painting/hauptsignal.cpp \
#    sources/Painting/weiche.cpp \
#    sources/Daten/stellwerkreader.cpp \
#    sources/Daten/stellwerkmodel.cpp \
#    sources/Painting/paintingelement.cpp \
#    sources/Daten/stellwerkelement.cpp \
#    sources/Painting/fahrplaneintrag.cpp \
#    sources/StellwerkSim/fahrplanwidget.cpp \
    sources/Painting/stellwerk.cpp #\
#    sources/Models/stellwerksuebersichtsmodel.cpp

HEADERS  += sources/StellwerkSim/mainwindow.h \
#    sources/Painting/gleis.h \
#    sources/Painting/hauptsignal.h \
#    sources/Painting/weiche.h \
#    sources/Daten/stellwerkreader.h \
#    sources/Daten/stellwerkmodel.h \
#    sources/Painting/paintingelement.h \
#    sources/Daten/stellwerkelement.h \
#    sources/Painting/fahrplaneintrag.h \
#    sources/StellwerkSim/fahrplanwidget.h \
    sources/Painting/stellwerk.h# \
#    sources/Models/stellwerksuebersichtsmodel.h

FORMS    += sources/StellwerkSim/mainwindow.ui
