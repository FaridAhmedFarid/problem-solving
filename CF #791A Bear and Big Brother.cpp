#include <iostream>

using namespace std;

int main()
{
    int wL = 0, wB = 0, years =0;
    cin >> wL >> wB;

    while(wL <= wB)
    {
        wL *=3;
        wB *=2;
        years++;
    }
    cout << years;
}
