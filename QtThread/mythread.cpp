#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QString s) : name(s)
{

}

void MyThread::run()
{
    for(int i=0; i<=100; i++)
        qDebug() << this->name << " " << i;

}
