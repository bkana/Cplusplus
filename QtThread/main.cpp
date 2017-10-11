#include <QCoreApplication>
#include "mythread.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread thread1("A"), thread2("B"), thread3("C");
    qDebug() << "hello from GUI thread " << a.thread()->currentThreadId();
    //thread1.start(QThread::LowestPriority);
    thread1.start();
    thread2.start();
    thread3.start();
    //thread3.start(QThread::HighestPriority);
    return a.exec();
}
