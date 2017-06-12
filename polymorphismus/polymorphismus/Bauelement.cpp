#include "Bauelement.h"
#include <iostream>

using namespace std;

CBauelement::CBauelement()
{
	m_preis = 0.0;
	m_x = 0;
	m_y = 0;
}
CBauelement::CBauelement(int x, int y, double preis)
{
	m_x = x;
	m_y = y;
	m_preis = preis;
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


CBauelement::~CBauelement()
{
}
