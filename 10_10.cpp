#include <iostream>
using namespace std;

int balcony = 77;
void singing();

class opera
{
    public:
	int n;
	double balcony;

	void function();
	void singing()
	{
	    cout << "Singing function (in opeara): tra-la-la !\n";
	}
};

void opera::function()
{
    cout << "balcony (component of class) = " << balcony << endl;
    cout << "balcony (global variable) = " << ::balcony << endl;


    char baclony = 'M';

    cout << "\nAfter definition of local variable --\n";
    cout << "balcony(local variable) = " << balcony << endl;
    cout << "balcony(component of class) = " << opera::balcony << endl;
    cout << "balcony(global variable) = " << ::balcony << endl;

    singing();
    int singing;
    singing = 7;


    cout << "After hiding names, we can call singing function only this way:\n ";
    opera::singing();
}

int main()
{
    opera Lohengrin;

    Lohengrin.balcony = 6;
    Lohengrin.function();
    singing();
}

void singing()
{
    cout << "Normal function of singing (It has nothing to do with class)\n";
}
