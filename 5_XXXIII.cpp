#include <iostream>
using namespace std;

void f();
static int i  = 0;
int main()
{
  f(); 
}

void f()
{
  if (i < 100)
  {
    i++;
    if (!(i % 12))
    {
      cout << "nowy tuzin" << endl;
    }
    f();
  }
  return;
}
