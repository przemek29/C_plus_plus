#include <iostream>
using namespace std;

void print (const double *ptr, int value);

int main()
{
  double table[] = {3.12, 5.32, 53.4, 543.4, 234234.423, 432.432, 342.3};

  print(table, 7);
}

void print (const double *ptr, int value)
{
  for (int i = 0; i < value; i++)
  {
    cout << *(ptr++) << ", ";
  }
  cout << endl;
}
