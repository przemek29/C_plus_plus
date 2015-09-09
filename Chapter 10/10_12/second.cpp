#include <iostream>
using namespace std;

#include "ticket.h"

void functionInOtherFile()
{
    cout << "\nWe're in other file, \nin this area we should use a ticket\n";
    ticket white;
    white.remember("Cracow", "Tarnow", ticket::personal);
    white.print();

    cout << "We're late, we change ticket to: " << endl;
    white.changeTypeOfTrain(ticket::hasty);
    white.print();
}
