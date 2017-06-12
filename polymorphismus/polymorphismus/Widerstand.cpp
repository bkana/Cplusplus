#include "Widerstand.h"
#include <iostream>

using namespace std;


CWiderstand::CWiderstand(int x, int y, double preis, double r) : CBauelement(x, y, preis)
{
	m_r = r;
}

void CWiderstand::setR(double r)
{
	m_r = r;
}
double CWiderstand::getR()
{
	return m_r;
}

void CWiderstand::printElementSpecificValue()
{
	cout << "R = " << m_r << " Ohm" << endl;
	cout << "X position : " << m_x << " Y position : "<< m_y <<endl;
}

CWiderstand::~CWiderstand()
{
}
