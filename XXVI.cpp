#include <iostream>
#include <iomanip>
using namespace std;

void fill(long int table[][3]);
void print(long int table[][3]);

int main()
{
  long int input[10][3]; 
  fill(input);
  print(input); 
}


void fill(long int table[][3])
{
  for (int i = 0; i < 10; i++)
  {
    table[i][0] = i;
    table[i][1] = i*i;
    table[i][2] = i*i*i;
  }
}

void print(long int table[][3])
{
  for (int i = 0; i < 10; i++)
  {
    cout << setw(3) << table[i][0] << " ";
    cout << setw(3) << table[i][1] << " ";
    cout << setw(3) << table[i][2] << endl;
  }
}
