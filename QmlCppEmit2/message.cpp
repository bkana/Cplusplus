#include "message.h"

Message::Message(QObject *parent) : QObject(parent)
{
    m_name = " ";
    m_count = 0;
    m_state = false;
    connect(this, SIGNAL(countChanged(count)), this, SLOT(slots_Count()));
    connect(this, SIGNAL(secondChanged()), this, SLOT(slots_second()));
    connect(this, SIGNAL(nameChanged(newName)), this, SLOT(call_MeFronQml()));
}

QString Message::getName()
{
    return m_name;

}

void Message::setName(QString newName)
{
    m_name = newName;
    emit nameChanged(newName);

}

int Message::getCount()
{
    return m_count;
}

void Message::setCount(int count)
{
    m_count = count;
    m_count++;
    emit countChanged(count);
}

bool Message::getSecond()
{
    return m_state;
}

void Message::setSecond(bool state)
{
    m_state = state;
    if(state)
        emit(secondChanged());
}

void Message::call_MeFronQml()
{
    qDebug() << "Inside C++";
    setName(QString("%1").arg(m_name));
}

void Message::slots_Count()
{
    qDebug() << "Call Slots_count from C++";
    setCount(m_count);

}

void Message::slots_second()
{
    qDebug() << "state is false";
    setSecond(false);
}
