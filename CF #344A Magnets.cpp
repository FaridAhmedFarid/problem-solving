#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n, i, groups = 0;
    short ctr = 0;
    cin >> n;
    string magnets[n];

    if(n == 0) groups = 0;
    else groups = 1;

    for(i = 0; i < n; i++) cin >> magnets[i];

    for(i = 1; i < n; i++)
    {
        if(magnets[i-1]!= magnets[i])
        {
            groups++;
            ctr = 0;
        }
    }
    cout << groups;
}
