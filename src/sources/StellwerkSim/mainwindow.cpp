#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Painting/stellwerk.h"

#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsView>
#include <QRectF>
#include <QDebug>
#include "fahrplanwidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    QGraphicsView *stellwerkuebersicht = new QGraphicsView();

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
    setCentralWidget(stellwerkuebersicht);


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
    /* Fahrplan
    QGraphicsScene *fahrplanScene = new QGraphicsScene();
    fahrplanScene->setSceneRect(QRectF(0, 0, 230, 900));
    fahrplan_graphicsView->setScene(fahrplanScene);

    FahrplanWidget *fahrplan = new FahrplanWidget(fahrplanScene);
    fahrplanScene->addItem(fahrplan);
*/

}
