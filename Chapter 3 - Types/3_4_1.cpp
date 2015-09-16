#include <iostream>

int main()
{
  int i;
  int k, n, m, j;

  i = 5;
  k = i + 010;
  std::cout << "k= " << k << std::endl;

  m = 100;
  n = 0x100;
  j = 0100;

  std::cout << "m+n+j= " << (m+j+n) << "\n";

  std::cout << "Wypisujemy: "
	    << 0x22
	    << " " << 022
	    << " " << 22 << "\a"; 
}
