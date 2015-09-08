#include "person.h"
#include <cstring>

void person::remember(const char *inscription, int years)
{
    strcpy(name, (inscription ? inscription : "Anonymous"));
    age = years;
}
