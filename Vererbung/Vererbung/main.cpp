#include <iostream>
#include "Bauelement.h"
#include "Widerstand.h"
#include "Spule.h"

using namespace std;


int main()
{
	CWiderstand r;
	CSpule l;

	r.setPosition(5, 2);
	r.setPreis(1.99);
	r.setR(20);

	l.setPosition(4, 9);
	l.setPreis(8.50);
	l.setL(45);

	cout << "Position: (" << r.getX() << " , " << r.getY() << ")\n";
	cout << "Preis: " << r.getPreis() << " EUR \n";
	cout << "Widerstand: " << r.getR() << " Ohm\n";
	//cout << "Widerstand: " << r.getPreis << " EUR\n";
	cout << "Position: (" << l.getX() << " , " << l.getY() << ")\n";
	cout << "Preis: " << l.getPreis() << " EUR \n";
	cout << "Spule: " << l.getL() << " F\n";

	r.printElementSpecificValues();
	l.printElementSpecificValues();
	system("PAUSE");
}