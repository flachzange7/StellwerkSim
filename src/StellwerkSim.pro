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
            #sources/Painting/stellwerk.cpp \
            sources/Daten/region.cpp \
            sources/Daten/stellwerksuebersicht.cpp \
            sources/Daten/stellwerk.cpp \
    sources/Models/stellwerksuebersichtsbaummodel.cpp \
    sources/StellwerkSim/stellwerksuebersichtsidebarwidget.cpp \
    sources/StellwerkSim/hauptmenue.cpp \
    sources/StellwerkSim/stellwerksuebersichtwidget.cpp

HEADERS  += sources/StellwerkSim/mainwindow.h\
            #sources/Painting/stellwerk.h \
            sources/Daten/region.h \
            sources/Daten/stellwerksuebersicht.h \
            sources/Daten/stellwerk.h \
    sources/Models/stellwerksuebersichtsbaummodel.h \
    sources/StellwerkSim/stellwerksuebersichtsidebarwidget.h \
    sources/StellwerkSim/hauptmenue.h \
    sources/StellwerkSim/stellwerksuebersichtwidget.h


FORMS    += sources/StellwerkSim/mainwindow.ui \
    sources/StellwerkSim/stellwerksuebersichtsidebarwidget.ui \
    sources/StellwerkSim/hauptmenue.ui \
    sources/StellwerkSim/stellwerksuebersichtwidget.ui

RESOURCES += \
    stellwerksim.qrc
