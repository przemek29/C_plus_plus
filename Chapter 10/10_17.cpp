#include <iostream>
#include <cstring>
using namespace std;
enum yesOrNo { no, yes};

class Feather
{
	int pos_x, pos_y;
	static int permit;
	char colour[30];

    public:
	void ride(int x, int y)
	{
	    cout << "There " << colour << " feather : ";
	    if(permit)
	    {
	        pos_x = x;
		pos_y = y;
		cout << "I'm riding to point (" << pos_x << ", " << pos_y << ")\n";
	    }
	    else
	    {
		cout << "I can't ride !!!\n";
	    }
	}

	static void canOrCannot(yesOrNo answer)
	{
	    permit = answer;
	}

	Feather(const char *col)
	{
	    strcpy(colour, (col ? col : ""));
	    pos_x = pos_y = 0;
	}
};

int Feather::permit;

int main()
{
    Feather::canOrCannot(yes);

    Feather black("Tarry"), green("Green");
    black.ride(0,0);
    green.ride(1100, 1100);

    Feather::canOrCannot(no);

    black.ride(10,10);
    green.ride(1020, 1020);

    green.canOrCannot(yes);
    black.ride(50,50);
    green.ride(1060, 1060);
}
