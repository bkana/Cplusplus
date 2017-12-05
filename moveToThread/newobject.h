#ifndef NEWOBJECT_H
#define NEWOBJECT_H

#include <QObject>

class NewObject : public QObject
{
    Q_OBJECT
public:
    explicit NewObject(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NEWOBJECT_H