#include "Bauelement.h"
#include <iostream>

using namespace std;

CBauelement::CBauelement()
{
}
void CBauelement::setPreis(double preis)
{
	m_preis = preis;
}
double CBauelement::getPreis()
{
	return m_preis;
}
void CBauelement::setPosition(int x, int y)
{
	m_x = x;
	m_y = y;
}
int CBauelement::getX()
{
	return m_x;
}
int CBauelement::getY()
{
	return m_y;
}

//void CBauelement::printElementSpecificValues()
//{
//	cout << "Keine spezifischen Werte" << endl;
//}


CBauelement::~CBauelement()
{
}
