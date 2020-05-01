#include <iostream>

using namespace std;

int main()
{
    long long i, crimes = 0, n;
    cin >>n;
    int officers = 0, arr[n];

    for(i =0; i < n; i++) cin >> arr[i];

    for(i = 0; i < n; i++)
    {
        if(arr[i] == -1)
        {
            if(officers == 0) crimes++;
            else officers--;
        }
        else
        {
            if(arr[i] >=10)
            {
                officers += 10;
            }
            else officers+= arr[i];
        }
    }
    cout << crimes;
}
