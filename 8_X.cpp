#include <iostream>
using namespace std;

int main()
{
  int *ptrInt;
  ptrInt = reinterpret_cast<int *>(0xa2ff4);

  ptrInt = 0;
}
