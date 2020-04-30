#include <iostream>

using namespace std;

int main()
{
    int n, h, hMax, sum = 0;
    cin >> n >> hMax;

    for(int i = 0; i < n; i++)
    {
        cin >> h;
        if(h <= hMax)
            sum++;
        else if(h > hMax)
            sum += 2;
    }
    cout << sum;
}
