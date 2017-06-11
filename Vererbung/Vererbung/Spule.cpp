#include "Spule.h"
#include <iostream>

using namespace std;

CSpule::CSpule()
{
}

void CSpule::setL(double l)
{
	m_l = l;
}

double CSpule::getL()
{
	return m_l;
}

void CSpule::printElementSpecificValues()
{
	cout << "L = " << m_l << " F" << endl;
}

CSpule::~CSpule()
{
}
