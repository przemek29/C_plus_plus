#include <iostream>
#include <string>

using namespace std;

int main()
{
    //First way
    string letter("To throw, You must use right hand");
    string::size_type position;
    position = letter.find("use");

    if(position != string::npos)
    {
	cout << "Terroristic word in position " << position << endl;
    }
    else
	cout << "Suspect group of characters does not exist" << endl;

    //Second way
    string badWord("must");
    position = letter.find(badWord);
    if(position != string::npos)
    {
	cout << "Terroristic word in position " << position << endl;
    }
    else
	cout << "Suspect group of character does not exist" << endl;
}
