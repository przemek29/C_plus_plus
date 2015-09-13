#include <iostream>
using namespace std;

class Position
{
	int x;
	int y;
    public:
	Position (int a, int b)
	{
	    x = a;
	    y = b;
	}

	void print(void) const;
	void move(int a, int b);
};

void Position::print() const
{
    cout << x << ", " << y << endl;
}

void Position::move(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    Position car(40, 50);
    Position dog(30, 80);

    const Position house(50, 50);

//const function
    car.print();
    dog.print();
    house.print();

//none-const function
    car.move(4, 10);
    dog.move(50, 50);
    //house.move(0, 0);  //error!!
}
