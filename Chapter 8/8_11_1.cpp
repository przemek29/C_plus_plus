#include <iostream>
using namespace std;

char *producent(void);

int main()
{
  char *w1, *w2, *w3, *w4;

  w1 = producent();
  w2 = producent();
  w3 = producent();
  w4 = producent();

  *w1 = 'H';
  *w2 = 'M';
  *w3 = 'l';

  cout << "Oto 3 znaki: " << *w1 << *w2 << *w3
       << "\noraz smiec w czwartym:" << *w4 << endl;

  delete w1;
  delete w2;
  delete w3;
  
}

char *producent(void)
{
  char *w;
  cout << "Wlasnie produkuje obiekt \n";
  w = new char;
  return w;
}
