#include "stellwerkelement.h"
#include "stellwerkmodel.h"
#include "../Painting/gleis.h"

StellwerkElement::StellwerkElement(StellwerkModel *model)
{
    m_model = model;
    m_children = new QVector<StellwerkElement* >();
    m_parents = new QVector<StellwerkElement* >();
}

StellwerkElement::~StellwerkElement()
{
    m_children->clear();
    delete m_children;
}

void StellwerkElement::setPaintingElement(PaintingElement *element)
{
    //m_model->addItem(element);
    m_painting = element;
}

void StellwerkElement::addElement(StellwerkElement *child)
{
    m_children->append(child);
    m_model->addItem(child->m_painting);
    child->m_parents->append(this);
}
