#include "Kondensator.h"
#include <iostream>

using namespace std;

CKondensator::CKondensator()
{
}

void CKondensator::printElementSpecificValues()
{
	cout << "C = " << m_c << " Coulomb" << endl;
}
void CKondensator::setC(double c)
{
	m_c = c;
}
double CKondensator::getC()
{
	return m_c;
}
CKondensator::~CKondensator()
{
}
