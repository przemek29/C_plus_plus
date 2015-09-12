#include <cstring>
#include <iostream>
using namespace std;

class chatterbox
{
	int count;
	char text[40];
    public:
	chatterbox(int k, const char *description);
	~chatterbox(void);

	int returner() 
	{
	    return count; 
	}

	void hide(int x) 
	{
	    count = x; 
	}

	void whatIs()
	{
	    cout << text << "has amount " << count << endl;
	}
};

chatterbox::chatterbox(int k, const char *description)
{
    strcpy(text, (description ? description : ""));
    count = k;
    cout << "Construct the object " << text << endl;
}

chatterbox::~chatterbox()
{
    cout << "Descructor is working (cleaning)" << text << endl;
}

chatterbox a(1, "object a (GLOBAL)");
chatterbox b(2, "object b (GLOBAL)");

int main()
{
    a.whatIs();
    b.whatIs();
    {
        cout << "Begin of the local scope -------\n";
        chatterbox c(30, "object c (LOCAL)");
	chatterbox a(40, "object a (LOCAL)");

	cout << "\nWhat we actually have: ?";
	a.whatIs();
	b.whatIs();
	c.whatIs();

	cout << "We can get into hiding global object\n";
	::a.whatIs();
	cout << "Ending a local scope --------\n";
    }
cout << "We are already after a block\n ";
a.whatIs();
b.whatIs();
cout << "Run the descructor of the a object\n";
a.~chatterbox();
cout << "End of the program !!!!!\n";
}
