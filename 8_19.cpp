#include <iostream>
using namespace std;

int pierwsza();
int druga();

int main()
{
  int i;
  int (*wskaz_fun)();

  cout << "Na ktora funkcje ma pokazac wskaznik?" << endl;
  cout << "pierwsza -\t1 \nczy druga -\t2 \n"
	  "napisz numer: ";

  cin >> i;

  switch(i)
  {
    case 1:
      wskaz_fun = &pierwsza;
      break;

    case 2:
      wskaz_fun = &druga;
      break;
    default:
      wskaz_fun = 0;
      break;
  }

  cout << "Według rozkazu kapitanie! \n";

  if(wskaz_fun)
  {
    for(i = 0; i < 3; i++)
    {
      (*wskaz_fun)();
    }
  }
}

int pierwsza()
{
  cout << "funkcja pierwsza! \n";
  return 9;
}

int druga()
{
  cout << "funkcja druga! \n";
  return 106;
}
