#include <iostream>
#include <fstream>
using namespace std;

ifstream f("input.txt");

int main()
{
    char character;
    int floor=0;
    int position=0;
    while(f>>character)
    {
        position++;
        if(character=='(') floor++;
        else if(character==')') floor--;
        if(floor==-1)
        {
            cout<<position;
            return 0;
        }
    }
    cout<<endl;
    cout<<floor;
    return 0;
}
