#include "region.h"
#include "stellwerk.h"

#include <QDebug>

Region::Region()
{

}

Region::~Region()
{

}

bool Region::ladeRegion(const QDomNode nodeData)
{
    qDebug() << "Loading region: " << nodeData.toElement().attribute("id") << " " << nodeData.toElement().attribute("name");

    QDomNode node = nodeData.firstChild();
    while(!node.isNull())
        {
            if(node.nodeName() == "stellwerk")
            {
                Stellwerk *stellwerk = new Stellwerk();
                if(!stellwerk->ladeStellwerk(node))
                {
                    //qDebug() << "error loading dataexercise";
                    delete stellwerk;
                    return false;
                }
                //exerciseList.append(ex);
            }
            node = node.nextSibling();
        }
        return true;
}
