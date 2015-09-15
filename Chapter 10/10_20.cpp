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

	void synchronise(const ClockModule *ptr)
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
    ClockModule gamma("GAMMA", 4000);
    ClockModule separ(" SEPAR", 5010);
    ClockModule alfap("   ALFAP", 9200);

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
	    alfap.printTime();
	    cout << endl;
	}

	if (separ.enterSeconds() > 60)
		break;
    }

    cout << "As you can see the clocks run unevenly, and the differences they will now magnified\n";

    cout << "Input of the reference object===\n";

    const ClockModule gold("GOLD", 9999999);

    while(true)
    {
	gamma.passesMillisecond();
	separ.passesMillisecond();
	alfap.passesMillisecond();

	gold.passesMillisecond();

	if(!(gold.enterMilliseconds() % 1000))
	{
	    gamma.synchronise(&gold);
	    separ.synchronise(&gold);
	    alfap.synchronise(&gold);
	}

	if(gold.enterMilliseconds() / 1000.0 >= 600)
	{
	    cout << "Summary after 600 seconds...\n";
	    gamma.printTime();
	    separ.printTime();
	    alfap.printTime();
	    cout << endl;
	    break;
	}
    }
}
