#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
using namespace std;

class osoba
{
	char nazwisko[80];
	int wiek;
    public:
	void zapamietaj(const char *napis, int lata);

	void wypisz()
	{
	    cout << "\t" << nazwisko >> ", lat" << wiek << endl;
	}
};
#endif
