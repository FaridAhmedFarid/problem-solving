#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int d, sum = 0;
    string name;
    char ptr ='a';
    cin >> name;

    for(int i = 0; i < name.length(); i++)
    {
        d = abs(name[i] - ptr);
        if(d > 13)
        {
            d = abs(26 - d);
        }
        sum +=d;
        ptr = name[i];
    }
    cout << sum;
}
