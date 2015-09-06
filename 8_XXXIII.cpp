#include <iostream>
using namespace std;

void fillTable (double *t, int size);
void printTable(double *t, int size);
void mix(double *t1, double *t2, double *result, int size);

int main()
{
  double *t1, *t2, *t3;
  int size;

  cout << "Enter a size of array: ";
  cin >> size;

  t1 = new double [size];
  t2 = new double [size];
  t3 = new double [size];

  fillTable(t1, size);
  fillTable(t2, size);
  fillTable(t3, size);

  mix(t1, t2, t3, size);

  printTable(t1, size);
  printTable(t2, size);
  printTable(t3, size);
}

void fillTable(double *t, int size)
{
  for(int i = 0, k = 3; i < size; i++, k *= 2)
  {
    *(t++) = k;
  }
}

void printTable(double *t, int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << *(t++) << "  ";
  }
  cout << endl;
}

void mix(double *t1, double *t2, double *result, int size)
{
  for (int i = 0; i < size; i++)
  {
    *(result++) = (*(t1++)) * (*(t2++));
  }
}
