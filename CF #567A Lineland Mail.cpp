#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long minimum, maximum, n;
    cin >> n;
    long long x[n];

    for(long long i = 0; i < n; i++) cin >> x[i];

    for(long long i = 0; i < n; i++)
    {
        if(i == 0)
            minimum = abs(x[i] - x[i+1]);
        else
            minimum = min(abs(x[i] - x[i-1]), abs(x[i] - x[i+1]));
        maximum = max(abs(x[i] - x[n-1]), abs(x[i] - x[0]));
        cout << minimum << " " << maximum<< endl;
    }
}
