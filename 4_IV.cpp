// Jaką wartość ma wyrażenie ++i, a jaką i++.
#include <iostream>
using namespace std;

int main()
{
        short i = 20;

        cout << "i++ = " << (i++) << "\tale i = " << i;
        i = 20;
        cout << "\n++i = " << (++i) << "\ta i = " << i << endl;
}
