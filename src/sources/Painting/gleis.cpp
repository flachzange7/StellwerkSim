#include "gleis.h"

Gleis::Gleis(float positionX, float positionY) : m_positionX(positionX), m_positionY(positionY)
{
    m_zugDrüber = true;
}

Gleis::~Gleis()
{

}

QRectF Gleis::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2, 20 + penWidth, 20 + penWidth);
}
void Gleis::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    if(m_zugDrüber)
        painter->setBrush(QBrush(QColor(255, 0, 0)));
    painter->drawRect(m_positionX, m_positionY, 20, 10);
}

