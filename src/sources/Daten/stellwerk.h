#ifndef STELLWERK_H
#define STELLWERK_H

#include <QDomElement>
#include <QList>

class Stellwerk
{
    public:
        Stellwerk();
        ~Stellwerk();

        bool ladeStellwerk(const QDomNode node);

        unsigned int id() const { return _id; }
        QString name() const { return _name; }
        QList<unsigned int> nachbarn() const { return _nachbarn; }
        unsigned int posX() const { return _posX; }
        unsigned int posY() const { return _posY; }

        void setID(unsigned int id) { _id = id; }
        void setName(QString name) { _name = name; }
        void nachbarHinzu(unsigned int id) { _nachbarn.append(id); }
        void setPosX(unsigned int posX) { _posX = posX; }
        void setPosY(unsigned int posY) { _posY = posY; }

    private:
        unsigned int _id;
        QString _name;
        QList<unsigned int> _nachbarn;
        unsigned int _posX;
        unsigned int _posY;

};

#endif // STELLWERK_H
