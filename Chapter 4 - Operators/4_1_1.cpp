#include <iostream>
using namespace std;

int main()
{
  int i;
  for(i = 0; i < 64; i++)
  {
    if(i % 8)
    {
      cout << "\t";
    }
    else
    {
      cout << "\n";
    }
    cout << i;
  }
  cout << "\n";
}
