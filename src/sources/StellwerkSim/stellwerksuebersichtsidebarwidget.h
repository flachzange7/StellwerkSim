#ifndef STELLWERKSUEBERSICHTSIDEBARWIDGET_H
#define STELLWERKSUEBERSICHTSIDEBARWIDGET_H

#include <QWidget>

#include "ui_stellwerksuebersichtsidebarwidget.h"

class StellwerksUebersichtSidebarWidget : public QWidget, private Ui::StellwerksSidebarWidget
{
    Q_OBJECT

public:
    StellwerksUebersichtSidebarWidget(QWidget *parent = 0);
    ~StellwerksUebersichtSidebarWidget();

private:

};

#endif // STELLWERKSUEBERSICHTSIDEBARWIDGET_H
