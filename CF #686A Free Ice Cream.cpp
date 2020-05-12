#include <iostream>

using namespace std;

int main()
{
    long long distress = 0, icc = 0, d, i;
    int n;
    char sgn;
    cin >> n >> icc;

    for(i = 0; i <n; i++)
    {
        cin >> sgn >> d;
        if(sgn == '+')
            icc += d;
        else
        {
            if(icc >= d)
                icc -= d;
            else
                distress++;
        }
    }
    cout << icc << " " << distress;
}
