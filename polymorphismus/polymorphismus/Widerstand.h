#pragma once
#include "Bauelement.h"

class CWiderstand : public CBauelement
{
public:
	CWiderstand(int x, int y, double preis, double r);
	~CWiderstand();


	void setR(double r);
	double getR();

	void printElementSpecificValue();
private:
	double m_r;
};

