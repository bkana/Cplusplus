#pragma once
class CBauelement
{
public:
	CBauelement();
	~CBauelement();

	void setPreis(double preis);
	double getPreis();

	void setPosition(int x, int y);
	int  getX();
	int getY();

	virtual void printElementSpecificValues() = 0;
protected: 
	double m_preis;
	int m_x;
	int m_y;
};

