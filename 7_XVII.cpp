#include <iostream>
using namespace std;

void coDrugi(char pierwszy[], char drugi[]);
void pokaz(char input[]);

int main()
{
  char napis1[15] = {"ababababababa"};
  char napis2[15];

  coDrugi(napis2, napis1);
  pokaz(napis2);
}

void coDrugi(char wklej[], char kopiuj[])
{
  for (int i = 0, j = 0; i += 2; j++ )
  {
    wklej[j] = kopiuj[i];

    if (wklej[j] == 0) 
       break;
  }
}

void pokaz(char input[])
{
  for(int i = 0; ;i++)
  {
    if (input[i] == 0) break;
    cout << input[i];
  }
  cout << endl;
}
