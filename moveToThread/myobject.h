#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>
#include <QThread>
#include <QDebug>

namespace moveToThread {
class Myobject : public QObject
{
    Q_OBJECT
public:
    explicit Myobject(QObject *parent = nullptr);
    void Dosetup(QThread &cThread);
    void NewDosetup(QThread &cThread);
signals:
     void test(int);
public slots:
    void Dowork();
    void NewDowork();
private:
    int m_valeur;
};
}



#endif // MYOBJECT_H
