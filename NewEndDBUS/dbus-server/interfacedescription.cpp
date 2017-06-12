#include "interfacedescription.h"

interfacedescription::interfacedescription(QObject *parent) : QObject(parent)
{

    qDebug() << "Initializing DBUS Server ...";
    qDebug() << "Creating interface...";


}

QString interfacedescription::read()
{
    qDebug() << "Request to read was received!";
    emit somethingHappened("Emitting DBUS Signal Now!");

    return QString("Request to read was received!");
}

QString interfacedescription::write()
{
    qDebug() << "Request to write was received!";
    emit somethingHappened("Emitting DBUS Signal Now!");

    return QString("Request to write was received!");
}

QString interfacedescription::SendMessage(const QString &cmd)
{
    qDebug() << "Message Received by Server!";
    emit somethingHappened("Emitting DBUS Signal Now!");

    return QString("Echoing message received:%1").arg(cmd);
}
