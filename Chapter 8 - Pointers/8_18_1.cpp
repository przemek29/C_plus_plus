#include <iostream>
using namespace std;

char *strcat(char *cel, const char*zrodlo);

int main()
{
  char co[] = {"urzadzen sterowych"};
  char komunikat[80] = {"Alarm: "};

  strcat(komunikat, co);
  cout << "po dopisaniu = " << komunikat << endl;
  cout << (strcat(komunikat, ", o godz 17:12")) << endl;

}

char *strcat(char *cel, const char *zrodlo)
{
  char *poczatek = cel;

  while(*(cel++));

  cel--;

  while((*(cel++) = *(zrodlo++)));

  return poczatek;
}
