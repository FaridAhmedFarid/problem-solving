#include <iostream>

using namespace std;

int main()
{
    int k , r, i = 0, sum = 0;
    bool flag = true;

    cin >> k >>r;
    sum = k;
    while (3)
    {
        if( sum % 10 == 0 || (sum - r) % 10 == 0)
            break;

        sum += k;
        i++;
    }
    cout << i <<endl;
}
