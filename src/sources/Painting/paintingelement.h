#ifndef PAINTINGELEMENT_H
#define PAINTINGELEMENT_H

#include <QGraphicsObject>
#include <QPoint>

class PaintingElement : public QGraphicsObject
{
    public:
        enum Typ
        {
            Gleis = 1,
            Hauptsignal = 2,
            Weiche = 3,
            Bahnsteig = 4
        };

        PaintingElement();
        PaintingElement(float x, float y);
        PaintingElement(QPointF position);
        ~PaintingElement();

        void setPostion(QPointF position);
        void setX(float x);
        void setY(float y);

        QPointF position() const;
        float x() const;
        float y() const;

    private:
        QPointF m_positon;
};

#endif // PAINTINGELEMENT_H
