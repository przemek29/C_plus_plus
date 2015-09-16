#include <iostream>

int main()
{
  char litera;
  do
  {
    std::cout << "Napisz jakąś literę: ";
    std::cin >> litera;
    std::cout << "\n Napisales: " << litera << " \n";
  } while (litera != 'K');
  std::cout << "\n Skoro napisałeś K to kończymy !";
}
