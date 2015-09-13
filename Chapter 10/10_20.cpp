#include <iostream>
#include <cstring>
using namespace std;

class ClockModule
{
	mutable long myCurrentTime;

	char name[100];
	int periodAccelerated;

    public:
	ClockModule(const char *description, int innacuracy)
	{
	    strcpy(name, (description ? description : "No description "));
	    periodAccelerated = innacuracy;
	    myCurrentTime = 0;
	}

	void passesMillisecond() const
	{
	    myCurrentTime ++;
	    if(!(myCurrentTime % periodAccelerated))
	    {
		myCurrentTime++;
	    }
	}

	long enterMilliseconds() const
	{
	    return myCurrentTime;
	}

	long enterSeconds() const
	{
	    return myCurrentTime / 1000;
	}

	void printTime()
	{
	    cout << name << " : " << myCurrentTime / 1000.0 << " s ";
	}

	void synchronizeWith(const ClockModule *ptr)
	{
	    long referenceTime = ptr->enterMilliseconds();
	    if (myCurrentTime != referenceTime)
	    {
		cout << name << ": Correction in "
		     << (referenceTime / 1000)
		     << "sec. ("
		     << referenceTime - myCurrentTime
		     << " ms)" << endl;

		myCurrentTime = referenceTime;
	    }
	}

	void resetTime()
	{
	    myCurrentTime = 0;
	}
};

int main()
{
    ClockModule gamma("Gamma", 4000);
    ClockModule separ(" SEPAR", 5010);
    ClockModule alfap("Alfafab", 9200);

    cout << "Check the accurancy of clocks\n";

    while(true)
    {
	gamma.passesMillisecond();
	separ.passesMillisecond();
	alfap.passesMillisecond();
	cout << endl;

        if (!(separ.enterMilliseconds() % 20000))
	{
	    gamma.printTime();
	    separ.printTime();
	    alfap.PrintTime();
	    cout << endl;
	}

	if (separ.enterSeconds() > 60)
		break;
    }

    cout << "As you can see the clocks run unevenly, and the differences they will now magnified\n";

    cout
