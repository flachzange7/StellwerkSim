#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Painting/stellwerk.h"
#include "../Daten/stellwerksuebersicht.h"

#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsView>
#include <QRectF>
#include <QDebug>
#include "fahrplanwidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);

    initialisiereAlles();

    /* INITIALISIERE HAUPTMENU */
    _hauptmenue = new Hauptmenue();
    this->setCentralWidget(_hauptmenue);

    connect(_hauptmenue, SIGNAL(aktionEinzelspieler()), this, SLOT(starteEinzelspieler()));
    connect(_hauptmenue, SIGNAL(aktionBeenden()), this, SLOT(close()));


    //StellwerksUebersicht *uebersicht = new StellwerksUebersicht();

    //uebersicht->ladeUebersicht("../../../../data/Stellwerksuebersicht.xml");




//#else
//    uebersicht->ladeUebersicht("../data/Stellwerksuebersicht.xml");
//#endif

    /*QGraphicsView *stellwerkuebersicht = new QGraphicsView();

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, size().width(), size().height());
    Stellwerk *suessenbrunn = new Stellwerk("Wien Suessenbrunn", 900, 0);
    Stellwerk *floridsdorf = new Stellwerk("Wien Floridsdorf", 800, 100);
    Stellwerk *nord = new Stellwerk("Wien Nord", 800, 300);
    Stellwerk *hbf = new Stellwerk("Wien Hauptbahnhof", 700, 500);
    Stellwerk *zvb = new Stellwerk("Wien ZVB Kledering", 700, 600);
    Stellwerk *meidling = new Stellwerk("Wien Meidling", 400, 500);
    Stellwerk *liesing = new Stellwerk("Wien Liesing", 200, 500);

    Stellwerk *simmering = new Stellwerk("Wien Simmering", 910, 300);
    Stellwerk *erzherzogkarlstrasse = new Stellwerk("Wien Erzherzog Karl Strasse", 910, 190);

    Stellwerk *huetteldorf = new Stellwerk("Wien Huetteldorf", 50, 300);
    Stellwerk *westbahnhof = new Stellwerk("Wien Westbahnhof", 250, 300);

    Stellwerk *fjb = new Stellwerk("Wien Franz Josef Bahnhof", 500, 300);
    Stellwerk *heiligenstadt = new Stellwerk("Wien Heiligenstadt", 500, 100);

    scene->addItem(meidling);
    scene->addItem(liesing);
    scene->addItem(huetteldorf);
    scene->addItem(westbahnhof);
    scene->addItem(simmering);
    scene->addItem(erzherzogkarlstrasse);
    scene->addItem(hbf);
    scene->addItem(zvb);
    scene->addItem(nord);
    scene->addItem(floridsdorf);
    scene->addItem(suessenbrunn);
    scene->addItem(fjb);
    scene->addItem(heiligenstadt);

    stellwerkuebersicht->setScene(scene);
    setCentralWidget(stellwerkuebersicht);*/


    //initialisiereAlles();

   /* Gleis *gleis = new Gleis(10, 10);
    Hauptsignal *haupt1 = new Hauptsignal(30, 10);
    Weiche *weiche1 = new Weiche(50, 10, Weiche::RaufLinks);

    StellwerkModel *model = new StellwerkModel();
    QGraphicsScene *fahrplanScene = new QGraphicsScene();
    fahrplanScene->setSceneRect(QRect(0, 0, 250, 800));

    StellwerkElement *element = new StellwerkElement(model);
    element->setPaintingElement(new Gleis(10, 30));
    model->root()->addElement(element);

    StellwerkElement *element2 = new StellwerkElement(model);
    element2->setPaintingElement(new Gleis(30, 30));
    model->root()->addElement(element2);*/

    /*Stellwerk *stellwerk = new Stellwerk();
    QGraphicsScene *scene = new QGraphicsScene();
    scene->addItem(stellwerk);

    //FahrplanEintrag *eintrag = new FahrplanEintrag(10, 0);
    //fahrplanScene->addItem(eintrag);
    //fahrplanScene->addItem(new FahrplanEintrag(10, 100));

    m_graphicsview->setScene(scene);
    //fahrplan_graphicsview->setScene(fahrplanScene);
    */
}

MainWindow::~MainWindow()
{

}

void MainWindow::initialisiereAlles()
{
    setzeApplikationsName();
    setWindowTitle();
    initSidebar();

    _uebersicht = NULL;
    _aktuellesStellwerk = NULL;

    _stellwerksWidget = NULL;
    _hauptmenue = NULL;
    _stellwerksauswahl = NULL;

    /* Fahrplan
    QGraphicsScene *fahrplanScene = new QGraphicsScene();
    fahrplanScene->setSceneRect(QRectF(0, 0, 230, 900));
    fahrplan_graphicsView->setScene(fahrplanScene);

    FahrplanWidget *fahrplan = new FahrplanWidget(fahrplanScene);
    fahrplanScene->addItem(fahrplan);
*/

}

void MainWindow::initAktionen()
{
    //connect(button_beenden, SIGNAL(clicked()), SLOT(close()));
}

void MainWindow::setzeApplikationsName()
{
    QCoreApplication::setApplicationName("MultiSimulator");
    QCoreApplication::setApplicationVersion("0.0.0.1");
    QCoreApplication::setOrganizationName("Flachzange-Sobeat-Software");

    // setze Allgemeine Daten für AboutMe!
}

void MainWindow::setWindowTitle()
{
    QString title = QCoreApplication::organizationName() + " " + QCoreApplication::applicationName() + " " + QCoreApplication::organizationDomain() + " - Stellwerk Simulator - " + QCoreApplication::applicationVersion();
    /*if(Project::name() != QString())
    {
        title += " - " + Project::name();
    }*/
    QMainWindow::setWindowTitle(title);
}

void MainWindow::loescheAlles()
{
    if(_hauptmenue != NULL)
    {
        disconnect(_hauptmenue, SIGNAL(aktionEinzelspieler()), this, SLOT(starteEinzelspieler()));
        disconnect(_hauptmenue, SIGNAL(aktionBeenden()), this, SLOT(close()));

        delete _hauptmenue;
        _hauptmenue = NULL;
        setStyleSheet("");
    }
}

void MainWindow::initSidebar()
{
    //_stellwerksWidget = new StellwerksUebersichtSidebarWidget();
    //sidebar->setWidget(_stellwerksWidget);
}

void MainWindow::starteEinzelspieler()
{
    loescheAlles();
    _stellwerksauswahl = new StellwerksUebersichtWidget();
    setCentralWidget(_stellwerksauswahl);
}
