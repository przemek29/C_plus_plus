#include <iostream>
using namespace std;

void przelad(int k);
void przelad(double x);

void pierwsza(void(*adrfun)(int));
void druga(void(*adrfun)(double));

int main()
{
  pierwsza(przelad);
  cout << "---------------------------\n";
  druga(przelad);
}

void pierwsza(void (*adrfun)(int))
{
  cout << "Jestem wewnatrz funkcji PIERWSZA\n"
	  "teraz wywolam funkcje ktorej adres przyslano jako argument\n";
  adrfun(5);
  cout << "Po wywolaniu funkcji\n";
}

void druga(void(*adrfun)(double))
{
  cout << "Jestem wewnatrz funkcji DRUGA\n"
	  "teraz wywolam funkcje ktorej adres przyslano jako argument\n";
  adrfun(3.14);
  cout << "Po wywolaniu funkcji\n";
}

void przelad (int k)
{
  cout << "*** Funkcja przelad - wersja: przelad(int) \n"
	  "argument k = " << k << endl;
}

void przelad (double x)
{
  cout << "*** Funkcja przelad - wersja: przelad(double) \n"
          "argument x = " << x << endl;
}
