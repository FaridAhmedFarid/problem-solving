#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ctr = 0, arr[4], n;

    for(int i = 0; i < 4; i++) cin >>arr[i];
    n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);

    for(int i = 0; i < 3; i++) if(arr[i] == arr[i+1]) ctr++;
    cout << ctr;
}
