#include <iostream>
#include <string>

using namespace std;

int main()
{
    string opr;
    int n, x = 0;

    cin >> n;
    while(n)
    {
        cin >> opr;
        if(opr[1] == '-')
            x--;
        else
            x++;
        n--;
    }
    cout << x;
}
