#include <iostream>
#include "Bauelement.h"
#include "Widerstand.h"

using namespace std;


int main()
{
	CWiderstand r;
	CWiderstand t;

	r.setPosition(5, 2);
	r.setPreis(1.99);
	r.setR(20);

	cout << "Position: (" << r.getX() << " , " << r.getY() << ")\n";
	cout << "Preis: " << r.getPreis() << " EUR \n";
	cout << "Widerstand: " << r.getR() << " Ohm\n";
	cout << "Widerstand: " << r.getPreis << " EUR\n";
	system("PAUSE");
}