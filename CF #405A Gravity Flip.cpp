#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sze;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sze = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+sze);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

}
