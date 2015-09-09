#include <iostream>

int main()
{
  int wybor ;
  char dzialanie;
  std::cout << "Wprowadź działanie: \n";
  std::cin >> wybor;
  switch(wybor)
  {
    case 6:
      dzialanie = 'A';
      break;
    case 12:
      dzialanie = 'B';
      break;
    default:
      dzialanie = 'C';
      break;
  }

  std::cout << "\nWybrane dzialanie to: " << dzialanie << "\n";
}
