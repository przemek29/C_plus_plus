#include <iostream>
using namespace std;

void sender (int *tab, int amount);

int main()
{
  int table[] = {0,1,2,3,4,5,6,7,8,9};

  sender(table, 10);
  sender(table, 5);
}

void sender (int *tab, int amount)
{
  for (int i = 0; i < amount; i++)
  {
    tab[i] += 44;
    cout << tab[i] << " ";
  }
  cout << endl;
}
