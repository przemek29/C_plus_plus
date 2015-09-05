#include <iostream>
using namespace std;


int main()
{
  int a = 44, b = 77;

  cout << "Przed wywolaniem funkcji: zer \n";
  cout << "a = " << a << ", b = " << b << endl;
  zer(a, b);

  cout << "Przed wywolaniem funkcji: zer \n";
  cout << "a =" << a << ", b = " << b << endl;
}

void zer(int wart, int &ref)
{
  cout << "\t W funkcji zer przed zerowaniem  \n";
  cout << "\twart = " << wart << ", ref = "
       << ref << endl;

  wart = 0;
  ref = 0;

  cout << "\t W funkcji zer po zerowaniu \n";
  cout << "\twart = " << wart << ", ref = "
       << ref << endl;
}
