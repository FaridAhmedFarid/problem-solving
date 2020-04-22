#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    short adj = 0, len;
    cin >> len;

    char stones[len];
    scanf("%s", stones);

    for (int i = 0; i < len-1; i++)
    {
        if(stones[i] == stones[i+1])
        {
            adj++;
        }
    }

    cout << adj;
}
