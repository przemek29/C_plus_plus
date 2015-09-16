#include<iostream>
#include <curses.h>
using namespace std;
/****************************************************************/
short symbol_cyfrowy()
{
    short symbol=0;
    do
    {
        cin.clear();
        cin.sync();
        cout<<"Podaj symbol cyfrowy: ";
        cin>>symbol;
    } while(cin.fail()||symbol<1||symbol>8);
    return symbol-1; //odejmujemy 1 dlatego ze indeksowanie naszej tablicy zaczyna sie od 1, nie od 0.
}
/****************************************************************/
short symbol_literowy()
{
    char symbol;
    do
    {
        cin.clear();
        cin.sync();
        cout<<"Podaj symbol literowy: ";
        cin>>symbol;
    } while((cin.fail()||symbol<'A'||symbol>'H')&&symbol!='X');
    return symbol;
}
/****************************************************************/
void wypisz(long * wsk[],short i)
{
    for (short k=0; k<i;k++)
    {
        cout<<"Figury["<<k<<"] o adresie "<<wsk[k]<<" z trescia "<<*wsk[k]<<endl;
    }
}
/****************************************************************/
int main()
{
    char *szachownica=new char [256];
    long *figury[64];
    char sym_l;
    short sym_c;
    short i=0;
    void *gdzie;
    long co;
    cout<<"Gdzie na szachownicy (A-H) i (1-8) chcesz umiescic objekt long?\nPodaj X w symbolu aby wyjsc.\n";
    do
    {
        sym_l=symbol_literowy();
        if(sym_l!='X')
        {
            sym_c=symbol_cyfrowy();
            co=(((sym_l-'A') * 8 ) + sym_c ) * sizeof(long );//nie bedę teraz tlumaczyl o co chodzi w tym wzorze(podany jest on w Symfonii przez J.Grębosza). Najlepiej będzie jeśli każdy sam go przeanalizuje. Jeśli ktoś naprawde nie będzie sobie radził, wtedy wytłumaczę.
            gdzie=&szachownica[co];
            figury[i]=new(gdzie) long(co);
            i++;
        }
    } while(sym_l!='X'&& i!=63);
    wypisz(figury ,i);
    delete szachownica;
//    delete [] figury;
}
