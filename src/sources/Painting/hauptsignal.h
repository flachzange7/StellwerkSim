#ifndef HAUPTSIGNAL_H
#define HAUPTSIGNAL_H

#include <QtWidgets/QGraphicsItem>
#include <QtGui/QPainter>
#include <QtWidgets/QStyleOptionGraphicsItem>

class Hauptsignal : public QGraphicsItem
{
    public:
        Hauptsignal(float positionX, float postionY);
        ~Hauptsignal();

        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    protected:

    private:
        float m_positionX;
        float m_positionY;
};

#endif // HAUPTSIGNAL_H
