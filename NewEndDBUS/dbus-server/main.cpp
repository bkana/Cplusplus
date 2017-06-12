#include <QCoreApplication>
#include "interfacedescription.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   // qDebug() << "Initializing DBUS Server ...";
    //qDebug() << "Creating interface...";

    //Create a dbus instance

     //new interfacedescription();
    interfacedescription* demo = new interfacedescription;
    new ifadapter(demo); // Cleans itselfup

    // Use session bus
    QDBusConnection dbus = QDBusConnection::sessionBus();
    // Expose interface to others
    bool ret = dbus.registerService("com.dbus.m-plan.interface");

    // Register object on the bus
    ret = dbus.registerObject("/interfacedescription",demo);


    return a.exec();
}
