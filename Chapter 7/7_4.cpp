#include <iostream>
using namespace std;

enum etapy
{
  nic, scenopis, proba_czytania,
  proba_kamerowa, nagranie = 6,
  montaz, postsynchron
};

void stan_realizacji(etapy t[], int ile, int dzien_zdjeciowy);

int main()
{
  const int liczba_scen = 10;
  etapy scena[liczba_scen] = {scenopis, proba_czytania, proba_kamerowa};

  int dzien_realizacji = 1;

  scena[2] = nagranie;
  scena[5] = montaz;
  scena[9] = nagranie;
  scena[4] = proba_kamerowa;
  stan_realizacji(scena, liczba_scen, dzien_realizacji);

  dzien_realizacji++;

  scena[1] = proba_kamerowa;
  scena[5] = postsynchron;
  scena[0] = scenopis;
  scena[8] = scenopis;
  stan_realizacji(scena, liczba_scen, dzien_realizacji);
}

void stan_realizacji(etapy s[], int ile, int dzien)
{
  cout << dzien << ". dzien realizacji filmu reklamowego\n" << "Stan realizacji: \n";

  for(int i = 0; i < ile; i++)
  {
    cout << "Scena nr" << i << ", ";
    for(int j = 0; j < s[i]; j++)
    {
      cout << "#";
    }
    cout << endl;
  }
}
