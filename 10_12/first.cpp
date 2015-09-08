#include "person.h"
#include "ticket.h"

void presentation(person);
void functionInOtherFile();

int main()
{
    person composer, author;

    composer.remember("Fryderyk Chopin" , 36);
    author.remember("Marcel Proust", 34);

    presentation(composer);
    presentation(author);

    cout << "\nWe're using  in this file class of ticket\n";

    ticket yellow, blue;

    yellow.remember("Franfurkt", "Paris", ticket::express, 1);
    yellow.print();

    blue.remember("Zurich", "Genewa", ticket::accelerated);
    blue.print();

    blue.changeTypeOfTrain(ticket::hasty);
    cout << "\nAfter change a ticket...\n";
    blue.print();

    functionInOtherFile();
}

void presentation(person someone)
{
    cout << "I have the honor to present you, \nHere in person: ";
    someone.print();
}
