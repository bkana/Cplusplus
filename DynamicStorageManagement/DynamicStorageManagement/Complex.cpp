#include "Complex.h"
#include <iostream>
using namespace std;

CComplex::CComplex()
{
	m_real = 0;
	m_imag = 0;
}

CComplex::CComplex(double real, double imag)
{
	m_real = real;
	m_imag = imag;
}
CComplex CComplex::add(CComplex c)
{
	double real = m_real + c.m_real;
	double imag = m_imag + c.m_imag;

	CComplex ret(real, imag);
	return ret;
}
void CComplex::print()
{
	cout << m_real << " + " << m_imag << "j \n";
}

void CComplex::setValues(double real, double imag)
{
	m_real = real;
	m_imag = imag;
}


CComplex::~CComplex()
{
}
