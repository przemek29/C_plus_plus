#include <iostream>
#include <string>
using namespace std;

int main()
{
    for(int i = 0; i < 15; i++)
    {
        string fileName("device");
	int number = i;

	number %= 100;
	char tens = '0' + (number / 10);

	number %= 10;
	char units = '0' + (number / 1);

	fileName += tens;
	fileName += units;
	fileName += ".parameters";

	cout << "for i = " << i << " fileName = " << fileName << endl;
    }
}
