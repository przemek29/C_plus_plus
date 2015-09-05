#include <iostream>
using namespace std;

int liczba;
void fff(void);

int main()
{
  int i;
  liczba = 10;
  i = 4;
  cout << "Wartosci: liczba = " << liczba << endl
       << "i = " << i << endl;
  fff();
}

void  fff(void)
{
  int x;
  x = 5;
  liczba --;
  cout << "sumka = " << (x + liczba) << endl;
}
