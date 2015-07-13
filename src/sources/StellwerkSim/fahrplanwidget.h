#ifndef FAHRPLANWIDGET_H
#define FAHRPLANWIDGET_H

#include <QGraphicsWidget>
#include <QWidget>
#include <QGraphicsScene>

class FahrplanWidget : public QGraphicsWidget
{
    public:
        FahrplanWidget(QGraphicsScene *scene);
        ~FahrplanWidget();

    private:
        QGraphicsScene *m_scene;
};

#endif // FAHRPLANWIDGET_H
