#include "fahrplanwidget.h"

#include <QTextEdit>
#include <QPushButton>
#include <QGraphicsLinearLayout>
#include <QGraphicsProxyWidget>
#include "../Painting/fahrplaneintrag.h"

FahrplanWidget::FahrplanWidget(QGraphicsScene *scene) : QGraphicsWidget(0, Qt::Widget), m_scene(scene)
{
    QGraphicsWidget *pushButton = m_scene->addWidget(new QPushButton("test"));
    QGraphicsWidget *pushButton2 = m_scene->addWidget(new QPushButton("test"));

    FahrplanEintrag *plan1 = new FahrplanEintrag(0, 0);
    m_scene->addItem(plan1);

    FahrplanEintrag *plan2 = new FahrplanEintrag(0, 0);
    m_scene->addItem(plan2);

    QGraphicsLinearLayout *layout = new QGraphicsLinearLayout(Qt::Vertical);
    layout->addItem(pushButton);
    layout->addItem(pushButton2);
    layout->addItem(plan1);
    layout->addItem(plan2);

    setLayout(layout);
}

FahrplanWidget::~FahrplanWidget()
{

}

