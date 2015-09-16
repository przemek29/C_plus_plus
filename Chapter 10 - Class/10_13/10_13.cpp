#include <iostream>
using namespace std;
#include "person.h"

void presentation(person &someone);

int main()
{
    person composer, author;

    composer.remember("Fryderyk Chopin", 36);
    author.remember("Marcel Proust", 34);

    presentation(composer);
    presentation(author);
}

void presentation(person &someone)
{
    cout << "I have the honor to present you, \nHere in person: ";
    someone.print();
}
