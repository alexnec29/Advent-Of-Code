#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

ifstream f("input.txt");

int main()
{
    int l,w,h;
    char line[100];
    long long unsigned int s=0;
    while (f.getline(line, 100)) {
        char* token = strtok(line, "x");

        l = atoi(token);
        token = strtok(NULL, "x");
        w = atoi(token);
        token = strtok(NULL, "x");
        h = atoi(token);

        s= s+ 2*l*w + 2*l*h + 2*w*h;
        if(l*w<l*h&&l*w<w*h) s+=l*w;
        else if(l*h<=l*w&&l*h<w*h) s+=l*h;
        else s+=w*h;
    }
    cout<<s;
    return 0;
}
