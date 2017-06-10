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

void CComplex::setReal(double real)
{
	m_real = real;
}
void CComplex::setImag(double imag)
{
	m_imag = imag;
}
double CComplex::getReal()
{
	return m_real;
}
double CComplex::getImag()
{
	return m_imag;
}
CComplex CComplex::add(CComplex c)
{
	double real = m_real + c.m_real;
	double imag = m_imag + c.m_imag;

	CComplex ka(real, imag);
	return ka;
}

void CComplex::print()
{
	
	cout << m_real << " + " << m_imag << "j" << endl;
}


CComplex::~CComplex()
{
}
