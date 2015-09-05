#include <iostream>
using namespace std;

int silnia(long int n);
long int n, result;
int main()
{
  cout << "Wprowadź wartość dla której chcesz obliczyć silnię: " << endl;
  cin >> n;
  cout << endl;
  result = silnia(n);
  cout << "Silnia to: " << result << endl;
}

long int silnia(long int n)
{
  if (n == 0) return 1;
  else return n*silnia(n-1);
}
