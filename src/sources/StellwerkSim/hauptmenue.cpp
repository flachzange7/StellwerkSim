#include "hauptmenue.h"
#include "ui_hauptmenue.h"

Hauptmenue::Hauptmenue(QWidget *parent) : QWidget(parent)
{
    setupUi(this);

    connect(button_einzelspieler, SIGNAL(clicked()), this, SIGNAL(aktionEinzelspieler()));
    connect(button_mehrspieler, SIGNAL(clicked()), this, SIGNAL(aktionMehrspieler()));
    connect(button_einstellungen, SIGNAL(clicked()), this, SIGNAL(aktionEinstellung()));
    connect(button_beenden, SIGNAL(clicked()), this, SIGNAL(aktionBeenden()));
}

Hauptmenue::~Hauptmenue()
{

}
