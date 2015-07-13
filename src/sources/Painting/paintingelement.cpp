#include "paintingelement.h"

PaintingElement::PaintingElement()
{
    m_positon = QPointF(0.0f, 0.0f);
}

PaintingElement::PaintingElement(float x, float y)
{
    m_positon = QPointF(x, y);
}

PaintingElement::PaintingElement(QPointF position) : m_positon(position)
{

}

PaintingElement::~PaintingElement()
{

}

void PaintingElement::setPostion(QPointF position)
{
    m_positon = position;
}

void PaintingElement::setX(float x)
{
    m_positon.setX(x);
}

void PaintingElement::setY(float y)
{
    m_positon.setY(y);
}

QPointF PaintingElement::position() const
{
    return m_positon;
}
float PaintingElement::x() const
{
    return m_positon.x();
}
float PaintingElement::y() const
{
    return m_positon.y();
}
