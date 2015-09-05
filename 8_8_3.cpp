#include <iostream>
using namespace std;

int main()
{
  int tablica [15];
  int *wsk_a, *wsk_b, *wsk_c;

  wsk_a = &tablica[5];
  wsk_b = &tablica[10];
  wsk_c = &tablica[11];

  cout << "wsk_b - wsk_a = " << (wsk_b - wsk_a)
       << "\nwsk_c - wsk_b = " << (wsk_c - wsk_b)
       << "\nwsk_a - wsk_c = " << (wsk_a - wsk_c)
       << "\nwsk_c - wsk_a = " << (wsk_c - wsk_a) << endl;
}
