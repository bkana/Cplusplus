#include "mythread.h"
#include <QDebug>
#include <QMutex>

MyThread::MyThread(QString s) : name(s)
{

}

void MyThread::run()
{
    qDebug() << this->name << " " << this->Stop;
    for(int i=0; i<=5; i++)
    {
        QMutex mutex;
        // prevent other threads from changing the "Stop" value
        mutex.lock();
        if(this->Stop) break;
        mutex.unlock();
        qDebug() << this->name << " " << i;
    }

}
