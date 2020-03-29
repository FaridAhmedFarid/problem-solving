#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    short n, k, ctr = 0, sz;
    cin >> n >>k;
    int numbers[n];
 
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
 
    sz = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers+n, greater<int>());
 
    for(int i = 0; i < n; i++)
    {
        if(numbers[i] >= numbers[k-1] && numbers[i] > 0)
            ctr++;
    }
    cout << ctr;
}
