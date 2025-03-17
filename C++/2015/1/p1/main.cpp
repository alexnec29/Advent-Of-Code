#include <iostream>
#include <fstream>

using namespace std;

ifstream input("input.txt");

int main()
{
    char character;
    int floor=0;
    while(input>>character)
    {
        if(character=='(') floor++;
        else if(character==')') floor--;
    }
    cout<<endl;
    cout<<floor;
    return 0;
}
