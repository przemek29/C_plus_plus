#include <iostream>
#include <iomanip>

#include <string>
using namespace std;

void show(string description, string right)
{
    cout << "Contents of object " << setw(15)
	 << description << ":-->" << right << "<--\n";
}

int main()
{
    string inscriptionA;

    string inscriptionB1("Some text");

    char array[20] = {"Abracadabra olla"};
    string inscriptionB2(array);

    string message(&array[5]);

    string warning("Failure wells", 8);

    string stars(25, '*');

    string other = "ABCDEFGH";
    string news(other, 4, 2);

    //====To Check====

    show("inscriptionA", inscriptionA);
    show("inscriptionB1", inscriptionB1);
    show("inscriptionB2", inscriptionB2);
    show("message", message);
    show("warning", warning);
    show("stars", stars);
    show("news", news);
}

