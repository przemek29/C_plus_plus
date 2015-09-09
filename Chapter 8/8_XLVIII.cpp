#include <iostream>
using namespace std;

char ** reserve(int size);
void copy_index(char * ptr1, int w);

int main()
{
        int size = 10;
        char * *line = reserve(size);

        for(int i = 0; i < 10; i++, line++)
        {
                *line = new char [80];
                copy_index(*line, i);
        }
        line -= 10; 

        for(int i = 0; i < 10; i++)
        {
                cout << *(line++) << endl;
        }
        line -= 10; 

        char *wsk = line[3];
        line[3] = line[6];
        line[6] = wsk;

        cout << endl;

        for(int i = 0; i < 10; i++)
        {
                cout << *line++ << endl;
        }
        line -= 10; // reset


        for(int i = 0; i < 10; i++, line++)
        {
                cout << *line << endl;
                delete [] *line;
                *line = 0;
        }
}

char ** reserve(int size)
{
        char ** ptr;
        ptr = new char * [size];
        return ptr;
}

void copy_index(char * ptr, int w)
{
        char tab[21] = {"It's line:  "};       
        char * ptr = tab;   

        for(int i = 0; i < 20; i++)
        {
                *(w1++) = *(w2++);
        }

        *(w1++) = ('0' + ktory);        
        *w1 = 0;        
                
}
