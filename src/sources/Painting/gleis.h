#ifndef GLEIS_H
#define GLEIS_H

#include <QtWidgets/QGraphicsItem>
#include <QtGui/QPainter>
#include <QtWidgets/QStyleOptionGraphicsItem>

#include "paintingelement.h"

class Gleis : public PaintingElement
{
    public:
        Gleis(float positionX, float positionY);
        ~Gleis();

        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    protected:

    private:
        float m_positionX;
        float m_positionY;
        bool m_zugDrüber;
};

#endif // GLEIS_H
