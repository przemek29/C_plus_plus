#include <iostream>
#include <ctype.h>
using namespace std;

int sumator(int jeszcze_krokow, int suma_dotychczas); 
void dwojkowo(int liczba);
void schodki(int ile, char znak);

int main ()
{
  cout << "Ile pierwszych liczb naturalnych "
          "chcesz posumować?: ";
  int n = 0;
  cin >> n;  
  cout << "\nSuma pierwszych " << n
       << " liczb naturalnych to = "
       << sumator(n, 0)
       << endl;
  char g,f;
  cin >> g;
  f = tolower(g);
  cout << f << endl;
  
  int liczba = 241;
  cout << "\n" << liczba << " to dwojkowo ";
  dwojkowo(liczba);
  cout << endl ;

  liczba = 30942;
  cout << "\n" << liczba << " to dwojkowo ";
  dwojkowo(liczba);
  cout << endl;
  return 0;
}

int sumator(int jeszcze_krokow, int suma_dotychczas)
{
  int rezultat = 0;
  static int krok_rekurencji;
  krok_rekurencji++;
  int to_pietro_nr = krok_rekurencji;
  schodki(to_pietro_nr, '>');
  cout << suma_dotychczas << "+ " << to_pietro_nr
       << " = "
       << (suma_dotychczas + to_pietro_nr)
       << endl;

  suma_dotychczas += to_pietro_nr;

  if (jeszcze_krokow > 0 )
  {
    rezultat =
       sumator(jeszcze_krokow - 1 , suma_dotychczas);
  }
  else
  {
    cout << " ........ to ostatni krok, wracamy"
         << endl;
    rezultat = suma_dotychczas ;
  }

  schodki(to_pietro_nr, '<');
  cout << endl;
  krok_rekurencji--;
  return rezultat;
}

void dwojkowo(int liczba)
{
  int reszta = liczba % 2;
  if (liczba > 1)
  {
    dwojkowo(liczba / 2);
  }
  cout << reszta;
  return;
}

void schodki(int ile, char znak)
{
  cout << ile << " pietro: ";
  for (int m = 0; m < ile; m++)
  {
    cout << znak << " ";
  }
  cout << " ";
}
