#include <iostream>
#include <cstring>
using namespace std;

class osoba
{
  char nazwisko[80];
  int wiek;

public:
  void zapamietaj(const char *napis, int lata);

  void wypisz()
  {
    cout << "\t" << nazwisko << ", lat: " << wiek << endl;
  }
};

void osoba::zapamietaj(const char *napis, int lata)
{
  strcpy(nazwisko, (napis ? napis : "Anonim"));
  wiek = lata;
}

int main()
{
  osoba student1,
	student2,
	profesor,
	pilot;

  cout << "Dla informacji podaje, ze obiekt klasy osoba\n ma rozmiar: "
       << sizeof(osoba)
       << "bajty. To samo inaczej: "
       << sizeof(student1) << endl;

  profesor.zapamietaj("Albert Einstein", 55);
  student1.zapamietaj("Ruediger Schubart", 26);
  student2.zapamietaj("Claudia Bach", 25);
  pilot.zapamietaj("Neil Amstrong", 37);

  cout << "Po wpisaniu informacji do obiektow. Sprawdzamy: \n";
  cout << "dane z obiektu profesor\n";
  profesor.wypisz();

  cout << "dane z obiektu student1\n";
  student1.wypisz();

  cout << "dane z obiektu student2\n";
  student2.wypisz();

  cout << "dane z obiektu pilot\n";
  pilot.wypisz();

  cout << "Podaj swoje nazwisko(tylko nazwisko): ";
  char magazynek[80];
  cin >> magazynek;

  cout << "Podaj swoj wiek: ";
  int ile;
  cin >> ile;
  pilot.zapamietaj(magazynek, ile);

  cout << "oto dane ktore teraz sa zapamietane w obiektach profesor i pilot \n";
  profesor.wypisz();
  pilot.wypisz();
}
