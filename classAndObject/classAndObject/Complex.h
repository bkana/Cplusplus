#pragma once
class CComplex
{
private:
	double m_real;
	double m_imag;
public:
	CComplex add(CComplex c);
	void print();

	void setReal(double real);
	double getReal();
	void setImag(double imag);
	double getImag();


	CComplex();
	CComplex(double real, double imag);
	~CComplex();
};

