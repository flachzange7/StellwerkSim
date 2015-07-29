#include "stellwerk.h"

#include <QDebug>

Stellwerk::Stellwerk()
{

}

Stellwerk::~Stellwerk()
{

}

bool Stellwerk::ladeStellwerk(const QDomNode nodeData)
{
    qDebug() << "load Stellwerk: " << nodeData.toElement().attribute("id") << " "
             << nodeData.toElement().attribute("name") << " " << nodeData.toElement().attribute("nachbarn") << " " <<
                nodeData.toElement().attribute("posX") << " " << nodeData.toElement().attribute("posY");

    return true;
}

