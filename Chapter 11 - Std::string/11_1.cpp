#include <iostream>
#include <string>
using namespace std;
void poster(string s);

int main()
{
    string club1("Wisla");
    string club2("Unia");

    string city1 = "Cracow";
    string city2 = "Tarnow";

    string connections;
    connections = club1 + club2;
    cout << "Adding two string [" << connections << "]\n\n";

    string declaration = club1 + "-" + city1;

    declaration = declaration + " vs. ";

    declaration += club2;
    declaration += ('-' + city2);

    cout << "Enjoy the game !!!\n";
    poster(declaration);

    declaration += "  Result of game ";

    cout << "\n\nSpecify result of game: ";
    string result;
    cin >> result;

    cout << "\n\nNote: Yesterday took place the match\n";
    poster(declaration + result);
}

void poster(string contents)
{
    string stars(contents.length() + 6, '*');
    cout << stars << '\n'
	 << stars << "\r"
	 << "** " << contents << " **\n"
	 << stars << endl;
}
