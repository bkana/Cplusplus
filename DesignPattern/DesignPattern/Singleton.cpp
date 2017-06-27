#include "Singleton.h"
#include <iostream>

CSingleton::CSingleton(){}
void CSingleton::setData(int data)
{
	m_data = data;
}
int CSingleton::getData()
{
	return m_data;
}

