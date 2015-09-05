#include <iostream>
using namespace std;

inline double funkcja(double dzielna, double dzielnik);

int main()
{
  int dzielna, dzielnik;
  cout << "Wprowadź dzielną: ";
  cin  >> dzielna;
  cout << "Wprowadź dzielnik: ";
  cin  >> dzielnik; 
  cout << "Wynik to: " << funkcja(dzielna, dzielnik) << endl;
}

inline double funkcja(double dzielna, double dzielnik)
{
  return dzielna/dzielnik;
}
