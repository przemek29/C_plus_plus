#include <iostream>
using namespace std;

int main()
{
  int i, input;
  char sign = 'A';
  for (i = 1; i <= 4; i++)
  {
    cout << sign << " ";
    sign++;
    cout << sign << endl;
    sign++;
  }
  cout << "Ile liter ma być wypisanych w rzędzie? : \n";
  cin >> input;
  for (i = 1; i <= 18; i++)
  {
    cout  <<  sign  <<  " ";
    if (!(i % input)) 
    {
      cout << "\n";
    }
    sign++;
  }
}
