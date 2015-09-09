#include <iostream>
using namespace std;

int main()
{
  cout << "Plik programu: " << __FILE__ << ", linia programu to: " << __LINE__ << " kompilacja wystąpiła o godzinie "  << __TIME__;
  cout << " w dniu " << __DATE__ <<  endl;
  cout << "Witaj na pokładzie! " << endl;

  #ifdef _cplusplus
    cout << "Skompilowano plik w kompilatorze C++";
  #else
    cout << "Wybrano kompilator inny niż C++";
  #endif
}
