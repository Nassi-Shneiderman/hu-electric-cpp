/*
    HEADER
*/
#include <iostream>
#include <cstdlib>
#include "electric.hpp"

using namespace std;

int main()
{
	ELECTRIC R; //Objekt-Instanz

	cout << "Das Objekt 'R' der Klasse 'ELECTRIC' hat per default den Wert " << R.getResistor() << endl;
	float Rin;
	cout << "Eingabe: ";
	cin >> Rin;
	cout << "Das Objekt 'R' der Klasse 'ELECTRIC' hat nun den Wert " << Rin << endl;
	R.setResistor(Rin); //Methoden aufruf
}
