#include <iostream>
using namespace std;

int main()
{
  int *ptr;

  cout << ptr << endl;
  cout << reinterpret_cast<int>(ptr) << endl;
}
