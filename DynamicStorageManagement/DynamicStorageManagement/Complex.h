#pragma once
class CComplex
{
public:
	CComplex();
	CComplex(double real, double imag);
	CComplex add(CComplex c);
	void print();
	void setValues(double real, double imag);
	~CComplex();
private:
	double m_real;
	double m_imag;
};

