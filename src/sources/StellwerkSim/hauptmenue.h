#ifndef HAUPTMENUE_H
#define HAUPTMENUE_H

#include <QWidget>

#include "ui_hauptmenue.h"
class Hauptmenue : public QWidget, private Ui::Hauptmenue
{
    Q_OBJECT

public:
    Hauptmenue(QWidget *parent = 0);
    ~Hauptmenue();

signals:
    void aktionEinzelspieler();
    void aktionMehrspieler();
    void aktionEinstellung();
    void aktionBeenden();

private:

};

#endif // HAUPTMENUE_H
