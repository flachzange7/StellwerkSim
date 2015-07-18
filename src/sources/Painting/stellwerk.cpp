#include "stellwerk.h"

Stellwerk::Stellwerk(QString name, int posX, int posY, QGraphicsItem *parent)
{
    m_name = name;
    m_nachbar = new QList<Stellwerk*>();
    m_posX = posX;
    m_posY = posY;

    m_dockOben = QPoint(m_posX + 50, m_posY);
    m_dockUnten = QPoint(m_posX + 50, m_posY + 30);
    m_dockLinks = QPoint(m_posX, m_posY);
    m_dockRechts = QPoint(m_posX, m_posY);

}

Stellwerk::~Stellwerk()
{

}

void Stellwerk::addNachbar(Stellwerk *nachbar)
{

}

QRectF Stellwerk::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2, 20 + penWidth, 20 + penWidth);
}

void Stellwerk::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->drawRect(m_posX, m_posY, 100, 60);
    painter->drawText(QRectF(m_posX+5, m_posY+5, 90, 50), m_name);
    painter->drawLine(QPoint(m_posX, m_posY+45), QPoint(m_posX+100, m_posY+45));
    painter->drawLine(QPoint(m_posX+50, m_posY+45), QPoint(m_posX+50, m_posY+60));
}

