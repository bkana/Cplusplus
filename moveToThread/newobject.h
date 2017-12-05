#ifndef NEWOBJECT_H
#define NEWOBJECT_H

#include <QObject>
#include <QThread>
#include <QDebug>


class NewObject : public QObject
{
    Q_OBJECT
public:
    explicit NewObject(QObject *parent = nullptr);
    void NewDosetup(QThread &cThread);
signals:
     void newtest(int);
public slots:
     void NewDowork();
private:
     int m_newValeur;
};

#endif // NEWOBJECT_H
