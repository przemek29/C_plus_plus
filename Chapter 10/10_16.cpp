#include <iostream>
using namespace std;

class GamePiece
{
    private:
	int position;
	static int pension;
    public:
	static int countGamePieces;

	GamePiece()
	{
	    position = 0;
	    countGamePieces ++;
	}

	int move(int amount)
	{
	    return (position +=  amount);
	}

	int countSalary()
	{
	    return pension - 800;
	}
};

int GamePiece::pension = 3000;
int GamePiece::countGamePieces;

int main()
{
    cout << "Begin program, now is the pieces = " << GamePiece::countGamePieces;

    GamePiece red, green;

    cout << "\nAfter a definition of game pieces " << GamePiece::countGamePieces << endl;
    cout << "red is " << red.countGamePieces << endl;
    cout  << "green is " << green.countGamePieces << endl;

    GamePiece white;

    cout << "After a definition of another one is : "
         << green.countGamePieces << endl;

    green.move(2);
    red.move(6);
    white.move(3);

    cout << "Red, how much you earn ?" << red.countSalary();
    cout << "\nWhite, how much you earn ?" << white.countSalary();
}
