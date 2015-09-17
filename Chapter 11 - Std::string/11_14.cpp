#include <iostream>
#include <string>

using namespace std;

int main()
{
    void openFile(const char *ptr);

    for(int group = 0; group < 5; group++)
    {
	for(int segment = 0; segment < 3; segment++)
	{
	    string fileName("miniball_");
	    fileName += char('1' + group);
	    fileName += "_";
	    fileName += char('A' + segment);
	    fileName += ".parameters";

	    openFile(fileName.c_str());
	}
    }

}
