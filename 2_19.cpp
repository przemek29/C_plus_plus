#include <iostream>

int main()
{
  int wybor ;
  char dzialanie;
  std::cout << "Wprowadź działanie: \n";
  std::cin >> wybor;
  if (wybor == 6)
     dzialanie = 'A';
  if  (wybor == 12)
      dzialanie = 'B';
  if (wybor > 12)
     dzialanie = 'C';
   
  std::cout << "\nWybrane dzialanie to: " << dzialanie << "\n";
}
