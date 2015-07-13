#include "weiche.h"

Weiche::Weiche(float positonX, float positionY, WeichenType typ) : m_positionX(positonX), m_positionY(positionY), m_type(typ)
{

}

Weiche::~Weiche()
{

}


QRectF Weiche::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2, 20 + penWidth, 20 + penWidth);
}
void Weiche::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(m_positionX, m_positionY, 20, 10);

    QVector<QPoint> pointList;
    pointList.append(QPoint(m_positionX+5, m_positionY+5));
    pointList.append(QPoint(m_positionX+10, m_positionY+10));

    painter->drawPolygon(QPolygon(pointList));
}
