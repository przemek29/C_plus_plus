#include <iostream>
using namespace std;
#include <cstdlib>

int main(int argc, char *argv[])
{
  cout << "Wydruk parametrow wywolania: \n";

  for(int i = 0; i < argc; i++)
  {
    cout << "Parametr nr " << i << "to C-String: " << argv[i] << endl;
  }

  float x;
  x = atof(argv[2]);
  x = x + 4;
  cout << "x = " << x << endl;
}
