#include <iostream>
using namespace std;

void connect (char source[], int size, char extra[]);
void print (char table[]);

int main()
{
  char source[40] = {"Czy ten Pan i Pani"};
  char extra[] = {"sa w sobie zakochani"};

  connect(source, 40, extra);
  print(source);
}

void connect (char source[], int size, char extra[])
{
  for (int i = 0; ;i++)
  {
    if (source[i] == 0)
    {
       for(int j = 0; ;j++, i++)
       {
         source[i] = extra[j];
         if (extra[j] == 0) break;
       }
    }
  }
}

void print (char table[])
{
  for (int i = 0; ; i++)
  {
    if (table[i] == 0) break;
    cout << table[i];
  }
  cout << endl;
}
