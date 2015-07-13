#ifndef WEICHE_H
#define WEICHE_H

#include <QtWidgets/QGraphicsItem>
#include <QtGui/QPainter>
#include <QtWidgets/QStyleOptionGraphicsItem>

class Weiche : public QGraphicsItem
{
    public:
        enum WeichenType
        {
            RaufLinks = 1,
            RaufRechts = 2,
            RunterLinks = 3,
            RunterRechts = 4
        };

        Weiche(float positionX, float positionY, WeichenType typ);
        ~Weiche();


    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    protected:

    private:
        float m_positionX;
        float m_positionY;

        WeichenType m_type;
};

#endif // WEICHE_H
