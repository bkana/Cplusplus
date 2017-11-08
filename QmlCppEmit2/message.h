#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QDebug>
#include <QTimer>

class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int count READ getCount WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(bool second READ getSecond WRITE setSecond NOTIFY secondChanged)
public:
    explicit Message(QObject *parent = nullptr);
    QString getName();
    void setName(QString);

    int getCount();
    void setCount(int count);

    bool getSecond();
    void setSecond(bool state);

signals:
     void nameChanged(QString);
     void countChanged(int);
     void secondChanged();
public slots:
   void call_MeFronQml();
   void slots_Count();
   void slots_second();
private:
   QString m_name;
   int m_count;
   bool m_state;
};

#endif // MESSAGE_H
