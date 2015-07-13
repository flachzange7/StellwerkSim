#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Daten/stellwerkmodel.h"
#include "../Daten/stellwerkelement.h"
#include "../Painting/gleis.h"
#include "../Painting/hauptsignal.h"
#include "../Painting/weiche.h"
#include "../Painting/fahrplaneintrag.h"
#include <QtWidgets/QGraphicsScene>
#include "fahrplanwidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);

    initialisiereAlles();

    Gleis *gleis = new Gleis(10, 10);
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
    model->root()->addElement(element2);

    //FahrplanEintrag *eintrag = new FahrplanEintrag(10, 0);
    //fahrplanScene->addItem(eintrag);
    //fahrplanScene->addItem(new FahrplanEintrag(10, 100));

    m_graphicsview->setScene(model);
    //fahrplan_graphicsview->setScene(fahrplanScene);

}

MainWindow::~MainWindow()
{

}

void MainWindow::initialisiereAlles()
{
    // Fahrplan
    QGraphicsScene *fahrplanScene = new QGraphicsScene();
    fahrplan_graphicsView->setScene(fahrplanScene);

    FahrplanWidget *fahrplan = new FahrplanWidget(fahrplanScene);
    fahrplanScene->addItem(fahrplan);


}
