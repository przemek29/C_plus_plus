
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class person
{
	char name[80];
	int age;
    public:
	void remember(const char *inscription, int years);

	void print()
	{
	    cout << "\t" << name  << ", years" << age << endl;
	}
};
#endif
