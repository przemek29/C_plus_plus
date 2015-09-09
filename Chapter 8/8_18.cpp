#include <iostream>
using namespace std;

void przedzielacz_tabl(const char tab[]);
void przedzielacz_wsk(const char *w);

main()
{
  char ostrzezenie[80] = {"Alarm trzeciego stopnia"};

  cout << "\nwersja tablicowa \n ";
  przedzielacz_tabl(ostrzezenie);

  cout << "\n wersja wskaznikowa \n";
  przedzielacz_wsk(ostrzezenie);

}

void przedzielacz_tabl(const char tab[])
{
  int i = 0;

  while(tab[i])
  {
    cout << tab[i++] << "-";
  }
}

void przedzielacz_wsk(const char *w)
{
  while(*w)
  {
    cout << *(w++) << "-";
  }

  cout << endl;
}
