#include "datastorage.h"
#include <QDebug>

Datastorage::Datastorage(QObject *parent) : QObject(parent), count(0), msg("%1 Hits")
{

    msg.arg(count);
}

void Datastorage::callMeFromQml()
{
    qDebug() << "Inside callMeFromQml()";
    count++;
    emit increaseOne(msg.arg(count));
}
