#include <iostream>
using namespace std;

class ChineseBoard
{
    public:
	enum {maxPawns = 16, maxPlayers = 4};
	static const int countFields = 120;
	static const int countColours = 4;

	void oneQueue()
	{
	    for (int i = 0; i < maxPlayers ; i++)
	    {
	        if (player[i]) 
			cout << "Your move...\n";	
	    }
	}

    private:
	bool player[maxPlayers];
	double field[countFields];
};

const int ChineseBoard::countColours;

void printFromReference(const int &ref)
{
    cout << "Print from reference has amount: " << ref << endl;
}

void printFromPointer(const int *ptr)
{
    cout << "Print from the pointer has amount: " << *ptr << endl;
}

int main()
{
    //ChineseBoard club;

    cout << "\nBefore the game, we must ask about Maximum Players Value "
	 << ChineseBoard::maxPlayers
	 << ", fields= " << ChineseBoard::countFields
	 << ", colours= " << ChineseBoard::countColours
 	 << endl;

    cout << "Address the const of ChineseBoard::countColours= "
	 << &ChineseBoard::countColours << endl;

    printFromReference(ChineseBoard::countColours);
    printFromPointer(&ChineseBoard::countColours);

   // cout << "Address the const ChineseBoard::countFields= "
   //	 << &ChineseBoard::countFields << endl;
   // printFromReference(ChineseBoard::countFields);

    //cout << "Address the const ChineseBoard::maxPawns= "
    //	 << &ChineseBoard::maxPawns << endl;
    // printFromReference(ChineseBoard::maxPawns);
    cout << endl;
}
