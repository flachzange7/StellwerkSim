#ifndef STELLWERKSUEBERSICHT_H
#define STELLWERKSUEBERSICHT_H

#include "region.h"

#include <QString>
#include <QList>


class StellwerksUebersicht
{
    public:
        StellwerksUebersicht();
        ~StellwerksUebersicht();

        bool ladeUebersicht(const QString &dateiname);

    private:
        QList<Region *> *_regionen;
};

#endif // STELLWERKSUEBERSICHT_H
