#include <iostream>
using namespace std;

void printDiamond(int N);

int main()
{
	cout << "Podaj liczbe: ";
	int N;
	cin >> N;
	printDiamond(N);
}

void printDiamond (int N)
{
    for (int i = 1; i <= N; i += 2)
    {
        for (int j = 0; j < (N - i) / 2; j++)
        {
            cout << ' ';
        }

        for (int j = 0; j < i; j++)
        {
            cout << char(j + 'A');
        }

        cout << endl;
    }

    for (int i = N - 2; i >= 1; i -= 2)
    {
        for (int j = 0; j < (N - i) / 2; j++)
        {
            cout << ' ';
        }

        for (int j = 0; j < i; j++)
        {
            cout << char(j + 'A');
        }

        cout << endl;
    }
}
