#include "myobject.h"
#include <unistd.h>


using namespace moveToThread;


Myobject::Myobject(QObject *parent) : QObject(parent)
{

}

void Myobject::Dosetup(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()), this, SLOT(Dowork()));


}

void Myobject::NewDosetup(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()), this, SLOT(NewDowork()));
}

void Myobject::Dowork()
{
    for(int i=0; i<10; i++)
    {
        qDebug() <<"First Thread : "<< i;
        sleep(1);
        if(i==5)
        {
            m_valeur = 5;
            emit(test(m_valeur));
        }
    }
}

void Myobject::NewDowork()
{
    for(int i=0; i<10;i++)
    {
        sleep(1);
        qDebug() << "Second Thread : "<< i;
    }
}

