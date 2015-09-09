#include <iostream>
using namespace std;

void zerowanie (int *ptr);
int main()
{
  int tab[] = {1,2,3,4,5,6,7,8,9};

  for(int i = 0; i < 9; i+=2)
  {
    zerowanie(&tab[i]);
  }

  for(int k = 0; k < 9; k++)
  {
    cout << tab[k] << " ";
  }
  cout << endl;
}

void zerowanie (int *ptr)
{
  *ptr = 0;
}
