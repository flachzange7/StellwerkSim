#include "hauptsignal.h"

Hauptsignal::Hauptsignal(float positionX, float positionY) : m_positionX(positionX), m_positionY(positionY)
{

}

Hauptsignal::~Hauptsignal()
{

}

QRectF Hauptsignal::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2, 20 + penWidth, 20 + penWidth);
}
void Hauptsignal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(m_positionX, m_positionY, 20, 10);
    painter->setBrush(QBrush(QColor(255, 0, 0)));
    painter->drawEllipse(QPointF(m_positionX + 10, m_positionY + 5), 7, 7);
}
