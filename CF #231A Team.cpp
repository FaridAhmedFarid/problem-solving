#include <iostream>

using namespace std;

int main()
{
    int n, ctr = 0;
    int num, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 0; j < 3; j++)
        {
            cin >> num;
            if(num == 1)
                sum++;
            num = 0;
        }
        if(sum >= 2)
        {
                ctr++;
                continue;
        }
    }
    cout << ctr;
}
