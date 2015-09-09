#include <iostream>
using namespace std;

int main()
{
  char alfabet[] = "ABCDEFGHIJKLMNOPQRSTUWVZ";
  char *wsk;
  wsk = &alfabet[1];

  for (; *wsk < 'Z'; wsk+=4)
  {
    if (wsk > &alfabet[22]) break;
    cout << *wsk << endl;
  }
}
