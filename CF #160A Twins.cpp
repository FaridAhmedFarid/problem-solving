#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sumG = 0, sum = 0, numC = 0, sze;

    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>> arr[i];
        sum += arr[i];
    }

    sze = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+sze, greater<int>());

    for(int i = 0; i < n; i++)
    {
        sumG += arr[i];
        sum -= arr[i];
        if(sumG > sum)
        {
            cout << i+1;
            break;
        }
    }
}
