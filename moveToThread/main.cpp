#include <QCoreApplication>
#include "myobject.h"

//using namespace moveToThread;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    moveToThread::Myobject cObject, newObject;

    QThread cThread;
    cObject.Dosetup(cThread);
    cObject.moveToThread(&cThread);


    QThread newThread;
    newObject.NewDosetup(newThread);
    newObject.moveToThread(&newThread);


    newThread.start();
    cThread.start();

    return a.exec();
}
