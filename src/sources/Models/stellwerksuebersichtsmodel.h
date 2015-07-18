#ifndef STELLWERKSUEBERSICHTSMODEL_H
#define STELLWERKSUEBERSICHTSMODEL_H

#include <QGraphicsScene>
#include <QString>
#include <QList>


class StellwerksUebersichtsmodel : public QGraphicsScene
{
    public:
        StellwerksUebersichtsmodel();
        ~StellwerksUebersichtsmodel();

        void addStellwerksUebersichtsItem(StellwerksUebersichtsItem *item);
        void berechneVerbindungen();

    private:
        StellwerksUebersichtsItem *m_root;

};

class StellwerksUebersichtsItem : public QGraphicsItem
{
    public:
        StellwerksUebersichtsItem(QString name);
        ~StellwerksUebersichtsItem();

        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    private:
        QString m_name;
        QList<StellwerksUebersichtsItem *> m_nachbar;
};

#endif // STELLWERKSUEBERSICHTSMODEL_H
