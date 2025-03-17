#include <iostream>
#include <fstream>
#include <set>
#include <string>
using namespace std;

int main() {
    ifstream f("input.txt");
    string directions;
    f>>directions;

    int x = 0, y = 0;

    set<pair<int, int> > visited; //Unique coordinates
    visited.insert(make_pair(x, y));

    for (int i = 0; i < directions.size(); i++) {
        char dir = directions[i];
        if (dir == '^') {
            y++;
        } else if (dir == 'v') {
            y--;
        } else if (dir == '>') {
            x++;
        } else if (dir == '<') {
            x--;
        }
        visited.insert(make_pair(x, y));
    }
    cout << visited.size() << endl;
    return 0;
}
