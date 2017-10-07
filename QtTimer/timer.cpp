#include "timer.h"

Timer::Timer(QObject *parent) : QObject(parent)
{
    m_changeMe = false;
    m_myTimer = new QTimer(this);
    m_myTimer->start(500);

    connect(m_myTimer, SIGNAL(timeout()), this, SLOT(testSlot()));

}

QString Timer::getTheChange()
{
    if(m_theValue == 0)
        return "The text changed";
    if(m_theValue == 1)
    {
        return "New text change";
    }
    return "nothing has happened yet";
}

void Timer::someFunction(int i)
{
    if(i == 0){
        m_theValue = 0;
    }
    if(i == 1){
        m_theValue = 1;
    }
    emit changeOfStatus(i);
}

void Timer::testSlot()
{
    if(m_changeMe){
        someFunction(0);
    } else {
        someFunction(1);

    }
    m_changeMe = !m_changeMe;
}


