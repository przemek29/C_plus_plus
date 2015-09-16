#include <iostream>
#include <string>

using namespace std;

int main()
{
    string poem;
    string::size_type prevVal = poem.capacity();

    for (int k = 1; k < 500; k++)
    {
	poem += 'A';

	string::size_type val = poem.capacity();

	if(val != prevVal)
	{
	    cout << "When letters is = " << k
	         << " ,I increased val = " << val
		 << ", (+"
		 << (val - prevVal)
		 << ")" << endl;
	    prevVal = val;
	}
    }

}

