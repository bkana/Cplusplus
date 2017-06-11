#include "Rectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle()
{
	m_long = 0;
	m_larg = 0;
}

CRectangle::CRectangle(int Long, int Larg)
{
	m_long = Long;
	m_larg = Larg;
}


CRectangle::~CRectangle()
{
}

void CRectangle::calcCircumference()
{
	cout << "the circumference is : " << (m_long + m_larg) * 2 << endl;
}
void CRectangle::calcArea()
{
	cout << "the area is : " << m_long*m_larg << endl;
}