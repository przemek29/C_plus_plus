#include <iostream>
using namespace std;

void intToBin(int input);
static int input, count, result;

int main()
{
  count = 0;
  cout << "Wprowadź wartość do konwersji: " << endl;
  cin >> input;
  intToBin(input);
  cout << endl;
}

void intToBin(int input)
{
  int  rest = input % 2;
  count++;

  if(input > 1)
    intToBin(input / 2);

  if(!(count % 4))
    cout << " ";
  count --;
  cout << rest;
  return; 
}
