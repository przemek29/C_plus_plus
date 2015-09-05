#include <iostream>
using namespace std;

#define GRUDZIEN_2007   1                                               // Dostępne wersje programu
#define SIERPIEN_2005   2

#define WERSJA_EKSPERYMENTU             SIERPIEN_2005                   // Tutaj wpisujemy wersję programu, którą chcielibyśmy użyć

int main()
{
  #if(WERSJA_EKSPERYMENTU == GRUDZIEN_2007)                               // W zależności od WERSJI_EKSPERYMENTU wykonywane są odpowiednie instrukcje
  #define TYP_SPREZARKI   3000
        cout << "TYP_SPREZARKI = " << TYP_SPREZARKI << endl;
  #elif(WERSJA_EKSPERYMENTU == SIERPIEN_2005)
  #define TYP_SPREZARKI   2050
                cout << "TYP_SPREZARKI = " << TYP_SPREZARKI << endl;
  #else                                                                   // A jak wersja programu została źle zdefiniowana to wyskakuje error (kompilator w ogóle nie chce tego skompilować, bo wie już,
                                                                        // że jest tu błąd
  #error "Nieokreslony zostal typ eksperymentu";
  #endif // WERSJA_EKSPERYMENTU - warunek
}
