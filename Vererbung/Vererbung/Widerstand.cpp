#include "Widerstand.h"
#include <iostream>

using namespace std;


CWiderstand::CWiderstand()
{
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
