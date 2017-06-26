#ifndef INTERFACEDESCRIPTION_H
#define INTERFACEDESCRIPTION_H

#include <QObject>
#include <QDebug>
#include <QtDBus/QDBusConnection>
#include "ifadapter.h"

class interfacedescription : public QObject
{
    Q_OBJECT
public:
    explicit interfacedescription(QObject *parent = 0);


signals:
    void somethingHappened(const QString &signalMessage);

public slots:
    QString read();
    QString write();
    QString SendMessage(const QString &cmd);

};

#endif // INTERFACEDESCRIPTION_H
