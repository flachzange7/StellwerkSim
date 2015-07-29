#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_mainwindow.h"
#include "stellwerksuebersichtsidebarwidget.h"
#include "hauptmenue.h"
#include "stellwerksuebersichtwidget.h"
#include "../Daten/stellwerksuebersicht.h"
#include "../Daten/stellwerk.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void starteEinzelspieler();

private:
    void initialisiereAlles();
    void setzeApplikationsName();
    void setWindowTitle();
    void initAktionen();
    void loescheAlles();
    void initSidebar();

    /* DATEN */
    StellwerksUebersicht *_uebersicht;
    Stellwerk *_aktuellesStellwerk;
    /* DATEN */

    /* SIDEBAR */
    StellwerksUebersichtSidebarWidget *_stellwerksWidget;
    /* SIDEBAR */

    /* ANSICHTEN */
    Hauptmenue *_hauptmenue;
    StellwerksUebersichtWidget *_stellwerksauswahl;
    /* ANSICHTEN */

};

#endif // MAINWINDOW_H
