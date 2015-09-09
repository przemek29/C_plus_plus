#include <iostream>
using namespace std;
#define CZYNNIK(a,b) ((a)/((a)+(b)))

int main()
{
  int d = 0;
  while(d < 10)
  {
    cout << "Czynnik= " << CZYNNIK(++d, 2.0);
    cout << ", dla d= " << d << endl;
  } 
}
