#ifndef STELLWERK_H
#define STELLWERK_H

#include <QGraphicsItem>
#include <QString>
#include <QPainter>
#include <QList>

class Stellwerk : public QGraphicsItem
{
    public:
        Stellwerk(QString name, int posX, int posY, QGraphicsItem *parent = 0);
        ~Stellwerk();

        void addNachbar(Stellwerk *nachbar);

        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    private:
        QString m_name;
        int m_posX;
        int m_posY;

        QPoint m_dockOben, m_dockLinks, m_dockRechts, m_dockUnten;

        QList<Stellwerk *> *m_nachbar;
};

#endif // STELLWERK_H
