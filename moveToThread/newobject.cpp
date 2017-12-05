#include "newobject.h"
#include <unistd.h>

NewObject::NewObject(QObject *parent) : QObject(parent)
{

}

void NewObject::NewDosetup(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()), this, SLOT(NewDowork()));
}

void NewObject::NewDowork()
{
    for(int i=0; i<10;i++)
    {
        qDebug() << "Second Thread : "<< i;
        sleep(1);
    }
}
