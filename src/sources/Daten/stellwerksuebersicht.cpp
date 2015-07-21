#include "stellwerksuebersicht.h"

#include <QFile>
#include <QDomDocument>
#include <QDebug>

StellwerksUebersicht::StellwerksUebersicht()
{
    _regionen = new QList<Region *>();
}

StellwerksUebersicht::~StellwerksUebersicht()
{

}

bool StellwerksUebersicht::ladeUebersicht(const QString &dateiname)
{
    QFile file(dateiname);
    QDomDocument doc;

    if(!file.open(QIODevice::ReadOnly))
    {
        //emit error(ErrorFile, "Dateizugriffsfehler beim Laden von \""  + path + "\", prüfen Sie die Zugriffsberechtigung!");
        qDebug() << "StellwerksUebersichtsModel::ladeUebersicht(): can't open file, check permissions!";
        return false;
    }

    if(!doc.setContent(&file))
    {
        //emit error(ErrorXml, "Ungültiges Dateiformat von \""  + path + "\": XML Syntaxfehler!");
        qDebug() << "StellwerksUebersichtsModel::ladeUebersciht(): can't set DOM content, check XML syntax!";
        file.close();
        return false;
    }
    file.close();

    QDomElement root = doc.documentElement();
    if(root.nodeName() != "Stellwerksübersicht")
    {
        //emit error(ErrorFormat, "Ungültiges Dateiformat von \""  + path + "\": Fehler im XML-Aufbau!");
        qDebug() << "Root element not called Stellwerksübersicht";
        return false;
    }
    QDomNode node = root.firstChild();
    while(!node.isNull())
    {
        if(node.nodeName() == "region")
        {
            Region *region = new Region();
            region->ladeRegion(node);
            _regionen->append(region);
        }
        node = node.nextSibling();
    }
    return true;
}

