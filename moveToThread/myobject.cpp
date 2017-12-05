#include "myobject.h"
#include <unistd.h>

Myobject::Myobject(QObject *parent) : QObject(parent)
{

}

void Myobject::Dosetup(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()), this, SLOT(Dowork()));


}
void Myobject::Dowork()
{
    for(int i=0; i<10; i++)
    {
        qDebug() <<"first Thread "<< i;
        sleep(1);

        if(i==5)
        {
            //m_valeur = 5;
            //emit(test(m_valeur));
        }
    }
}


