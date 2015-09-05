#include <iostream>
using namespace std;

#define MAKRODEFINICJA(obiekt)  cout << "W linii " <<  __LINE__ << ", wartość wyrażenia \"" << ##obiekt << "\" = " << obiekt << endl;

int main()
{
  MAKRODEFINICJA(3);
}

