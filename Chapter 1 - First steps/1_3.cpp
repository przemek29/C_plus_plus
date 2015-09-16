#include <iostream>

int main()
{
  double cale;
  double centymetry;
  double przelicznik = 2.54;
  std::cout << "Wprowadź wartość w calach: ";
  std::cin >> cale;
  centymetry = cale * przelicznik;
  std::cout << "Wynik: " << centymetry;
}
