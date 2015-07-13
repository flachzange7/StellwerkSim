#ifndef STELLWERKREADER_H
#define STELLWERKREADER_H

#include <QXmlStreamReader>
#include <QString>
#include "stellwerkmodel.h"

class StellwerkReader
{
    public:
        StellwerkReader();
        ~StellwerkReader();

        bool readFile(QString dateiname, StellwerkModel &model);
    private:
};

#endif // STELLWERKREADER_H
