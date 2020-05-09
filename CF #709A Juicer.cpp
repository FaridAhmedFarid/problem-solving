#include <iostream>

using namespace std;

int main()
{
    long long n, b , d, sumO = 0, ctr = 0;
    cin >> n >> b >> d;
    long long arr[n];
    for(long long i = 0; i < n; i++) cin >> arr[i];

    for(long long i = 0; i < n; i++)
    {
        if( arr[i] > b)
            continue;
        sumO += arr[i];
        if(sumO > d) {ctr++; sumO = 0;}
    }
    cout << ctr;
}
