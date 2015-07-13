#ifndef FAHRPLANEINTRAG_H
#define FAHRPLANEINTRAG_H

#include <QtGui/QPainter>
#include <QtWidgets/QStyleOptionGraphicsItem>
#include <QtWidgets/QGraphicsLayoutItem>
#include "paintingelement.h"

class FahrplanEintrag  : public PaintingElement, public QGraphicsLayoutItem
{
    public:
        FahrplanEintrag(float positionX, float positionY);
        ~FahrplanEintrag();

        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

        QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint) const;

    private:
        float m_positionX;
        float m_positionY;
};

#endif // FAHRPLANEINTRAG_H
