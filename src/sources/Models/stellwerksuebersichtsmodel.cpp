#include "stellwerksuebersichtsmodel.h"

#include <QFile>
#include <QDomDocument>
#include <QDebug>

StellwerksUebersichtsModel::StellwerksUebersichtsModel()
{
    //m_root = new StellwerksUebersichtsItem();
}

StellwerksUebersichtsModel::~StellwerksUebersichtsModel()
{

}

/*void StellwerksUebersichtsModel::addStellwerksUebersichtsItem(StellwerksUebersichtsItem *item)
{

}*/

bool StellwerksUebersichtsModel::ladeUebersicht(const QString &filename)
{
    QFile file(filename);
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
            qDebug() << "Found Region: ";
        }
        node = node.nextSibling();
    }
    return true;
}

/*
StellwerksUebersichtsItem::StellwerksUebersichtsItem(QString name) : m_name(name)
{

}

StellwerksUebersichtsItem::~StellwerksUebersichtsItem()
{

}

QRectF StellwerksUebersichtsItem::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2, 20 + penWidth, 20 + penWidth);
}
void StellwerksUebersichtsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->drawRect(10, 10, 100, 60);
    painter->drawText(QRectF(15, 15, 100, 60), m_name);
}*/
