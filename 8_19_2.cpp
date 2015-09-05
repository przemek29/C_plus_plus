#include <iostream>
using namespace std;

int okno_dialogowe( const char *opis,
		    const char *pyt,
 		    bool (*wsk_fun_zatwierdz)(int));

bool czy_parzysta(int liczba);
bool czy_dozwolona_dla_detektora(int liczba);

int main()
{
  int odp;

  odp = okno_dialogowe(
		"Pomiar widma promieniowania zakonczony\n# Mozemy"
		"przystapic do filtrowania tla",
		"Podaj liczbe znakow tla ?:",
		&czy_parzysta);

  cout << "Dokonujemy filtrowania tla w zaznaczonych " << odp/2 << "obszarach\n\n\n";

  odp = okno_dialogowe(
		"Ustawienie temperatury chlodzenia detektora",
		"Podaj docelowa temperature: ",
		&czy_dozwolona_dla_detektora);

  cout << "Otwieram zawory z cieklym azotem \naz do chwili osiagniecia temperatury "
       << odp << "stopni\n\n\n";

  odp = okno_dialogowe(
		"Dialog bez koniecznosci sprawdzania",
		"Podaj jakakolwiek liczbe: ", 0);

  cout << "Otrzymana liczba to " << odp << "stopni\n";
}

int okno_dialogowe( const char *opis, const char *pyt, bool (*wsk_fun_zatwierdz)(int))
{
  cout
	<< "################# OKNO DIALOGOWE ###############\n"
	<< opis
	<< "\n##--------------------------##\n#";

  int odpowiedz_uzytkownika;
  bool zatwierdzone = true;

  do
  {
    cout << pyt;
    cin >> odpowiedz_uzytkownika;

    if(wsk_fun_zatwierdz)
    {
      zatwierdzone = wsk_fun_zatwierdz(odpowiedz_uzytkownika);
    }
    else
    {
      zatwierdzone = true;
    }
  }while (!zatwierdzone);

  cout << "#########################################\n\n";
  return odpowiedz_uzytkownika;
}

bool czy_parzysta(int liczba)
{
  if(liczba % 2)
  {
    cout << "# BLAD !!! \n# Podales liczbe" << liczba
         << ", a to nie liczba parzysta\n"
	    "# Ponawiamy probe\n# >>>";
    return false;
  }
  else
   return true;
}

bool czy_dozwolona_dla_detektora(int liczba)
{
  if(liczba >= -70)
  {
    cout 
		<< "# BLAD!!!\n# Podales liczbe "
		<< liczba
		<< ", a detektor powyzej\n# temperatury -70 stopni "
		   "ulegnie uszkodzeniu\n# Ponawiamy probe\n#>>>";
    return false; 
  }
  else
    return true;
}
