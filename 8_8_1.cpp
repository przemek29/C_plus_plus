#include <iostream>
using namespace std;

int main()
{
  int ti[6];
  double td[6];

  int *wi;
  double *wd;

  wi = ti;
  wd = td;

  cout << "Oto jak przy inkrementacji wskazników zmieniają sie ukryte w nich adresy: \n";

  for (int i = 0; i < 6; i++, wi++, wd++)
  {
    cout << "i= " << i
         << ") wi= "
         << reinterpret_cast<unsigned int>(wi)
         << ", wd= "
         << reinterpret_cast<unsigned int>(wd) << endl;
  }
}
