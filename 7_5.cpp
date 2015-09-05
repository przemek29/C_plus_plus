#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char napis1[] = {"Nocny lot"};
  char napis2[] = {'N', 'o', 'c', 'n', 'y',' ', 'l', 'o', 't'};
  cout << "rozmiar tablicy pierwszej: " << sizeof(napis1) << endl;
  cout << "rozmiar tablicy drugiej: " << sizeof(napis2) << endl;
  char t1[2] = {"a"};
  //strona 207
  char start[] = {"taki sobie zwykly tekst"};
  char meta[80];

  strcpy(meta, start);
  cout << meta << b <<endl;
}
