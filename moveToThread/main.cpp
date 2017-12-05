#include <QCoreApplication>
#include "myobject.h"
#include "newobject.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QThread cThread, newThread;
    Myobject cObject;
    NewObject newObject;

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
