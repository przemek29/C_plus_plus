#include <iostream>
using namespace std;

int main()
{
  int *wsk;
  int liczba = 5;
  cout << wsk << endl;
  wsk = &liczba;

  cout << wsk << endl << liczba << endl << (*wsk) << endl;
}
