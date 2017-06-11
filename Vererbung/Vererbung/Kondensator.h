#pragma once
#include "Bauelement.h"
class CKondensator : public CBauelement
{
public:
	CKondensator();
	~CKondensator();

	void setC(double c);
	double getC();

	void printElementSpecificValues();
private:
	double m_c;
};

