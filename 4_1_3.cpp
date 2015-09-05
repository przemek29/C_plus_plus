#include <iostream>
using namespace std;

int main ()
{
  int a = 5,
  b = 5,
  c = 5,
  d = 5;
  cout << "A oto wartość poszczególnych wyrazen\n"
       << "(nie mylić ze zmiennymi)\n";
  cout << "++a = " << ++a << endl
       << "b++ = " << b++ << endl
       << "--c = " << --c << endl
       << "d-- = " << d-- << endl;

  cout << "Po obliczeniu tych wyrażeń, same"
 	  "zmienne maja wartości\n"
       << "a = " << a << endl
       << "b = " << b << endl
       << "c = " << c << endl
       << "d = " << d << endl;
}
