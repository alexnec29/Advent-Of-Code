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

        if(l>=w&&l>=h) s+=w+w+h+h;
        else if(w>=l&&w>=h) s+=l+l+h+h;
        else s+=l+l+w+w;
        s+=l*w*h;
    }
    cout<<s;
    return 0;
}
