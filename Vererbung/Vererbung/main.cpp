#include <iostream>
#include "Bauelement.h"
#include "Widerstand.h"
#include "Spule.h"
#include "Kondensator.h"

using namespace std;


int main()
{
	CWiderstand r;
	CSpule l;
	CKondensator c;

	r.setPosition(5, 2);
	r.setPreis(1.99);
	r.setR(20);

	l.setPosition(4, 9);
	l.setPreis(8.50);
	l.setL(45);

	c.setPosition(4, 9);
	c.setPreis(8.50);
	c.setC(45);

	cout << "Position: (" << r.getX() << " , " << r.getY() << ")\n";
	cout << "Preis: " << r.getPreis() << " EUR \n";
	cout << "Widerstand: " << r.getR() << " Ohm\n";
	//cout << "Widerstand: " << r.getPreis << " EUR\n";
	cout << "Position: (" << l.getX() << " , " << l.getY() << ")\n";
	cout << "Preis: " << l.getPreis() << " EUR \n";
	cout << "Spule: " << l.getL() << " F\n";

	cout << "Position: (" << c.getX() << " , " << c.getY() << ")\n";
	cout << "Preis: " << c.getPreis() << " EUR \n";
	cout << "Kondensator: " << c.getC() << " C\n";

	r.printElementSpecificValues();
	l.printElementSpecificValues();
	c.printElementSpecificValues();
	system("PAUSE");
}