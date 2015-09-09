#include <string>
#include <vector>
#include <iostream>

using namespace std;

void join(const vector<string>& v, string& s) {

   s.clear();

   for (vector<string>::const_iterator p = v.begin();
        p != v.end(); ++p) {
      s += *p;
      //if (p != v.end() - 1)
       // s += c;
   }
}

int main() {

    bool result[2][5] = 
	{
		{false, true, true, true, false},
		{false, false, false, true, false}
	};
    vector<string> vectorString;
    string outputString;
    
    for(int i = 0; i < 2; i++)    
    {    
        for (int j = 0; j < 5;  j++)
        {
            if (result[i][j])
            {
                vectorString.push_back(string("*"));
            }

            else
            {
                vectorString.push_back(".");
            }
//	 join(vectorString, '/', outputString);
        }
	if(i != 1)
		vectorString.push_back("\n");
//	join(vectorString, '/', outputString);
    } 
    join(vectorString, outputString);  

	cout << outputString;
}
