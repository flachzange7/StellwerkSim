#ifndef STELLWERKSUEBERSICHTWIDGET_H
#define STELLWERKSUEBERSICHTWIDGET_H

#include <QWidget>

#include "ui_stellwerksuebersichtwidget.h"
class StellwerksUebersichtWidget : public QWidget, private Ui::StellwerksUebersichtWidget
{
    Q_OBJECT

public:
    StellwerksUebersichtWidget(QWidget *parent = 0);
    ~StellwerksUebersichtWidget();

private:
};

#endif // STELLWERKSUEBERSICHTWIDGET_H
