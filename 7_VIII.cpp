#include <iostream>
using namespace std;

enum ruch
{
  w_przod, w_tyl, stop
};

int main()
{
  ruch tab[15] = {w_przod, stop, stop, w_tyl, w_przod};
  cout << tab[7] << endl;
}
