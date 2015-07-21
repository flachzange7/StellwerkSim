#ifndef STELLWERKSUEBERSICHTSMODEL_H
#define STELLWERKSUEBERSICHTSMODEL_H

#include <QGraphicsScene>
#include <QString>
#include <QList>


class StellwerksUebersichtsModel : public QGraphicsScene
{
    public:
        StellwerksUebersichtsModel();
        ~StellwerksUebersichtsModel();

       // void addStellwerksUebersichtsItem(StellwerksUebersichtsItem *item);
        void berechneVerbindungen();

        bool ladeUebersicht(const QString &filename);

    private:
       // StellwerksUebersichtsItem *m_root;

};

/*class StellwerksUebersichtsItem : public QGraphicsItem
{
    public:
        StellwerksUebersichtsItem(QString name);
        ~StellwerksUebersichtsItem();

        QRectF boundingRect() const;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    private:
        QString m_name;
        QList<StellwerksUebersichtsItem *> m_nachbar;
};*/

#endif // STELLWERKSUEBERSICHTSMODEL_H
