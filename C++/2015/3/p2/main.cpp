#include <iostream>
#include <fstream>
#include <set>
#include <string>
using namespace std;

int main() {
    ifstream f("input.txt");
    string directions;
    f>>directions; 

    int x1 = 0, y1 = 0;
    int x2 = 0, y2 = 0;

    set<pair<int, int> > visited; //Unique coordinates
    visited.insert(make_pair(x1, y1));

    for (int i = 0; i < directions.size(); i++) {
        char dir = directions[i];
        if (dir == '^') {
            if(i%2==0) y2++;
            else y1++;
        } else if (dir == 'v') {
            if(i%2==0) y2--;
            else y1--;
        } else if (dir == '>') {
            if(i%2==0) x2++;
            else x1++;
        } else if (dir == '<') {
            if(i%2==0) x2--;
            else x1--;
        }
        visited.insert(make_pair(x1, y1));
        visited.insert(make_pair(x2, y2));
    }
    cout << visited.size() << endl;
    return 0;
}
