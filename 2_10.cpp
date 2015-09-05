#include <iostream>

int main()
{
  for(int k = 0 ; k < 12 ; k = k + 1)
  {
    std::cout << "A";
    if(k > 1) 
      continue;
    std::cout << "b\n" ;
  }
}
