#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>

class Timer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString theChange READ getTheChange NOTIFY changeOfStatus)
public:
    explicit Timer(QObject *parent = nullptr);
    QString getTheChange();
    Q_INVOKABLE void someFunction(int i);

signals:
    void changeOfStatus(int i);

public slots:
    void testSlot();
private:
    bool m_changeMe;
    int m_theValue;
    QTimer *m_myTimer;
};

#endif // TIMER_H
