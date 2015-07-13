#include "fahrplaneintrag.h"

FahrplanEintrag::FahrplanEintrag(float positionX, float positonY) : m_positionX(positionX), m_positionY(positonY)
{
    setOwnedByLayout(true);
}

FahrplanEintrag::~FahrplanEintrag()
{

}

QRectF FahrplanEintrag::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2, 20 + penWidth, 20 + penWidth);
}

void FahrplanEintrag::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setBrush(QBrush(QColor(255, 255, 0)));
    painter->drawRoundedRect(m_positionX, m_positionY, 230, 90, 5, 5);
    painter->drawText(m_positionX + 20, m_positionY + 20, "RJ 79");
    painter->drawText(m_positionX + 20, m_positionY + 40, "Ankunft: 13:00 von Abstellung 1");
    painter->drawText(m_positionX + 20, m_positionY + 60, "Abfahrt: 13:30 von WM 06");
    painter->drawText(m_positionX + 20, m_positionY + 80, "Verspätung: 0 min");
}


QSizeF FahrplanEintrag::sizeHint(Qt::SizeHint which, const QSizeF &constraint) const
{
    return QSizeF(100, 100);
}
