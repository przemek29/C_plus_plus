#include <iostream>
using namespace std;

int main()
{
  char obj;
  char *wch1;
  char *wch2;
  double *wd;

  wch1 = &obj;
  wch2 = wch1;

  wd = (double *)wch2;

  wd = reinterpret_cast<double*>(wch2);
}
