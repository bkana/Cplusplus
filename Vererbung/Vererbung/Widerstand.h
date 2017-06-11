#pragma once
#include "Bauelement.h"
class CWiderstand : public CBauelement
{
public:
	CWiderstand();

    // Initialisierung in abgeleiteten Klassen
	CWiderstand(double r, int x, int y, double preis); 
	~CWiderstand();

	void setR(double r);
	double getR();

	void printElementSpecificValues();
private:
	double m_r;
};

