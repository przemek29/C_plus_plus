#include <iostream>

int main()
{
  std::cout << " Ilu pasażerów leci? ";
  int ile;
  std::cin >> ile;

  for(int i = 1; i <= ile; i++)
  {
    std::cout << "Pasazer nr " << i << "prosze zapiać pasy !\n";
  }
  std::cout << "Skoro wszyscy już zapieli, to lądujemy. ";
}
