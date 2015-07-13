#ifndef STELLWERKMODEL_H
#define STELLWERKMODEL_H

#include "stellwerkelement.h"
#include <QVector>
#include <QGraphicsScene>
#include <QString>

class StellwerkModel : public QGraphicsScene
{
    public:
        StellwerkModel();
        ~StellwerkModel();

        bool ladeAusDatei(QString dateiname);

        StellwerkElement* root() { return m_root; }

    private:
        StellwerkElement *m_root;
};



#endif // STELLWERKMODEL_H
