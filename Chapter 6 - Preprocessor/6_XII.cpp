#include <iostream>
using namespace std;

inline double funkcja(double a, double b);

int main()
{
  int d = 0;
  while(d < 10)
  {
    cout << "Czynnik= " << funkcja(++d, 2.0);
    cout << ", dla d= " << d << endl;
  } 
}

inline double funkcja(double a, double b)
{
  return (a/(a+b));
}
