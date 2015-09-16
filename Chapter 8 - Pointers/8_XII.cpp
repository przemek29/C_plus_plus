#include <iostream>
using namespace std;

int main()
{
  char cc;
  void *wv = &cc;
  char *wc;
  wc = reinterpret_cast<char *>(wv);
}
