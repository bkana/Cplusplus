#include "Widerstand.h"
#include <iostream>

using namespace std;


CWiderstand::CWiderstand()
{
}
CWiderstand::CWiderstand(double r, int x, int y, double preis) : CBauelement(x, y, preis)
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
void CWiderstand::printElementSpecificValues()
{
	cout << "R = " << m_r << " Ohm" << endl;
}
CWiderstand::~CWiderstand()
{
}
