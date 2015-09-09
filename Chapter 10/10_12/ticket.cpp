#include "ticket.h"
#include <iostream>
using namespace std;
#include <cstring>

void ticket::remember( const char *sk, const char *dok, typeOfTrain train, int cat)
{
    strcpy(from, (sk ? sk : "No data"));
    strcpy(where, (dok ? dok : "No data"));
    whichTrain = train;
    category = cat;
}

void ticket::print()
{
    char line[] = "[--------------------------------------]\n";
    char edges[] = "[                                      ]\r[";

    cout << line << edges
	 << " Ticket: " << from << "-->" << where
	 << ", category " << category << "\n"
	 << edges
	 << "     on train " << descriptionType() << "\n"
	 << line;
}

const char *ticket::descriptionType()
{
    const char *names[] = {
		"personal (or regional)",
		"accelerated",
		"hasty",
		"InterCity express"
		};

    return names[whichTrain];
}
