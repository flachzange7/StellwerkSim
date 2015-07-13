#ifndef STELLWERKELEMENT_H
#define STELLWERKELEMENT_H

#include <QVector>
#include "../Painting/paintingelement.h"

class StellwerkModel;

class StellwerkElement
{
    public:
        StellwerkElement(StellwerkModel *model);
        ~StellwerkElement();

        void setPaintingElement(PaintingElement *element);
        void addElement(StellwerkElement *child);

    private:
        QVector<StellwerkElement *> *m_parents;

        // Was soll wie gezeichnet werden
        PaintingElement *m_painting;
        StellwerkModel *m_model;

        QVector<StellwerkElement *> *m_children;
};

#endif // STELLWERKELEMENT_H
