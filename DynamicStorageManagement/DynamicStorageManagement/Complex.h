#pragma once
class CComplex
{
public:
	CComplex();
	CComplex(double real, double imag);
	CComplex add(CComplex c);
	void print();
	~CComplex();
private:
	double m_real;
	double m_imag;
};

