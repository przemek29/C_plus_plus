#include <iostream>
using namespace std;

#include<new>

int main()
{
  // Wstepna rezerwacja dużego obszaru pamieci (czyli kupujemy grunt na osiedle domów)
  int *osiedle = new int[5000];

  //Niwelowanie zdobytego wlasnie obszaru
  for(int i = 0; i < 5000; i++)
  {
    osiedle[i] = 1;
  }

  //Teraz na tym terenie możemy tworzyć obiekty

  //umieszczenie nowego obiektu===============

  void *gdzie = &osiedle[100];
  int *wskint = new (gdzie) int;

  //--- praca z tym obiektem ---
  *wskint = 222;
  cout << "*wskint= " << (*wskint) << endl;

  //========================================
  gdzie = &osiedle[102];
  int *wTabi = new (gdzie) int[3];

  //--- praca z tą tablicą ---
  for(int m = 0; m < 3; m++)
  {
    wTabi[m] = 1000 + m;
    cout << "wTabi["<<m<<"] =" << wTabi[m] << " ";
  }

  cout << endl;

  //========================================
  gdzie = &osiedle[106];
  double *wTabd = new (gdzie) double[3];

  //--- praca z tą tablicą ---
  for (int n = 0; n < 3; n++)
  {
    wTabd[n] = 1 + (0.1 * n);
    cout << "wTabd[" << n << "]="  << wTabd[n]  << " ";
  }

  cout << endl;

  // w miejscu o adresie podanym liczbowo======================
  cout << "Napisz jakis adres pomiedzy:"
       << reinterpret_cast<int>(&osiedle[112])
       << "-"
       << reinterpret_cast<int>(&osiedle[116])
       << "\na ja tam zbuduje Ci obiekt: ";

  int adres;
  cin >> adres;
  gdzie = reinterpret_cast<void *>(adres);
  int * wskA = new (gdzie) int;

  //--- praca z tym obiektem ---
  *wskA = 114;
  cout << "Wartosc= " << (*wskA) << endl;

  cout << "Zobaczmy na te dzialke \n";
  for (int k = 99; k < 116 ; k++)
  {
    cout << "[" << k << "]" << osiedle[k] << endl;
  }

  delete [] osiedle;
}
