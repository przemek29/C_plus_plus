#include <iostream>
#include <cstring>
using namespace std;

class number
{
	int amount;
	char name[40];
    public:
	number(int k, const char *description);

	void hide(int m)
	{
	    amount = m;
	    give();
	}

	int returner() {return amount;}

	void give()
	{
	    cout << name << amount << endl;
	}
};

number::number(int k, const char *description)
{
	amount = k;
	strcpy(name, (description ? description : " "));
}

int main()
{
	number  plane(1200, "Current attitude ");
	number  atmosphere(920, "Atmosphere pressure "),
		course(63, "Flight direction ");

	plane.give();
	course.give();
	atmosphere.give();

	cout << "\nCorrection of flight -----------\n";
	plane.hide(1201);

	course.hide(course.returner() + 3);

	atmosphere.hide(919);
	cout << endl;
}
