#include <iostream>
using namespace std;

void wypisz(double tab[10][5][30]);
void wypelnij(double tab[10][5][30]);
void wyzeruj(double tab[10][5][30]);

int main()
{
  double tab[10][5][30];

  wypelnij(tab);
  wypisz(tab);
  wyzeruj(tab);
  wypisz(tab);
}

void wyzeruj(double tab[10][5][30])
{
  cout << "Zerowanie tablicy..." << endl;
  for(int a = 0; a < 10; a++)
  {
    for(int b = 0; b < 5; b++)
    {
      for(int c = 0; c < 30; c++)
      {
        tab[a][b][c] = 0;
      }
    }
  }
}

void wypelnij(double tab[10][5][30])	
{
  cout << "Wypelnianie tablicy..." << endl;
  for(int a = 0; a < 10; a++)
  {
    for(int b = 0; b < 5; b++)
    {
      for(int c = 0; c < 30; c++)
      {
        tab[a][b][c] = (a+b+c)/2;
      }
    }
  }
}

void wypisz(double tab[10][5][30])
{
  cout << "Wypisanie tablicy: " << endl;
  for(int a = 0; a < 10 ;  a++)
  {
    cout <<  "Tablica " << a << endl;
    for(int b = 0; b < 5;  b++)
    {
      cout << "Tablica " << a << " " << b << endl;
      for(int c = 0; c < 30; c++)
      {
        cout<< tab[a][b][c] << "\t";
      }
      cout<<endl;
    }
    cout<< "\n\n------------------------------------" << endl;
  }
}
