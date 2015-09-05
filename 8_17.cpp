#include <iostream>
using namespace std;

int main()
{
  const char *stacja[] = {
			   "Wansee", "Nikolassee", "Grunewald",
			   "Westkreuz", "Charlotenburg",
			   "Savigny Platz", "Zoologischer Harten"};

  const char *www[3];
  int i;

  for(i = 0; i < 7; i++)
  {
    cout << "Stacja: " << stacja[i] << endl;
  }

  www[0] = stacja[2];
  www[1] = stacja[5];
  www[2] = "Taki tekst";

  cout << "O 3 elementy tablicy: \n" << www[0] << ", " << www[1] << ", " << www[2] << endl;

}
