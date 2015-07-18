#include "stellwerksuebersichtsmodel.h"

StellwerksUebersichtsmodel::StellwerksUebersichtsmodel()
{
    m_root = new StellwerksUebersichtsItem();
}

StellwerksUebersichtsmodel::~StellwerksUebersichtsmodel()
{

}

void StellwerksUebersichtsmodel::addStellwerksUebersichtsItem(StellwerksUebersichtsItem *item)
{

}


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
}
