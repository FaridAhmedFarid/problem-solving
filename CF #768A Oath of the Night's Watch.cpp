#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long sze;
    long long n, ctr = 0;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++) cin >> arr[i];

    sze = sizeof(arr)/sizeof(arr[0]);
    sort (arr, arr+sze);

    for(long long i = 1; i < n; i++)
    {
        if(arr[i] > arr[0] && arr[i] < arr[n-1]) ctr++;
    }


    cout << ctr;
}
