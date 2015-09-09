#include <iostream>
using namespace std;

int main()
{
  char tC[10];
  long tL[10];

  char *ptr_tC = tC;
  long *ptr_tL = tL;

  ptr_tC += 4;
  ptr_tL += 4;
}
