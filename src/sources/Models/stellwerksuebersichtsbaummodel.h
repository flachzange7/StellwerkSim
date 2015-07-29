#ifndef STELLWERKSUEBERSICHTSBAUMMODEL_H
#define STELLWERKSUEBERSICHTSBAUMMODEL_H

#include <QVariantList>
#include <QAbstractItemModel>

class Region;
class Stellwerk;
class StellwerksUebersichtsBaumItem;

class StellwerksUebersichtsBaumModel : public QAbstractItemModel
{
public:
    StellwerksUebersichtsBaumModel();
    ~StellwerksUebersichtsBaumModel();

private:
    StellwerksUebersichtsBaumItem *_rootItem;
};

class StellwerksUebersichtsBaumItem
{
public:
    StellwerksUebersichtsBaumItem(QVariantList daten, StellwerksUebersichtsBaumItem *eltern);
    ~StellwerksUebersichtsBaumItem();

    int childAnzahl() const;
    int spaltenAnzahl() const;
    StellwerksUebersichtsBaumItem *child(int reihe);
    QVariant daten(int spalte) const;
    bool setData(QVariant data, int spalte) const;
    int reihen() const;
    void addItem(StellwerksUebersichtsBaumItem *item);
    void loescheItem(StellwerksUebersichtsBaumItem *item);
    StellwerksUebersichtsBaumItem* eltern();

    QVariantList itemInfo() const { return this->_daten; }
    QList<StellwerksUebersichtsBaumItem*> kinder() const { return this->_kinder; }
    StellwerksUebersichtsBaumItem *elternItem() const { return this->_elternItem; }
    void setParent(StellwerksUebersichtsBaumItem *eltern) { this->_elternItem=eltern; }

private:
    QVariantList _daten;
    StellwerksUebersichtsBaumItem *_elternItem;
    QList<StellwerksUebersichtsBaumItem *> _kinder;
};

#endif // STELLWERKSUEBERSICHTSBAUMMODEL_H
