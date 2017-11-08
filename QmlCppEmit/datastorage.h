#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include <QObject>

class Datastorage : public QObject
{
    Q_OBJECT
public:
    explicit Datastorage(QObject *parent = nullptr);

signals:
    void increaseOne(QString ms);

public slots:
    void callMeFromQml();
private:
    int count;
    QString msg;
};



#endif // DATASTORAGE_H
