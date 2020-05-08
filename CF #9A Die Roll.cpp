#include <iostream>

using namespace std;

int main()
{
    short y, w, d;
    cin >> y >> w;
    if (w > y) y = w;

    d = 6 - y + 1;

    if(d == 2 || d == 4)
        cout << d/2 << '/' << 3;
    else if (d == 3)
        cout << 1 << '/' << 2;
    else if (d != 6)
        cout << d << '/' << 6;
    else if (d == 6)
        cout << 1 << '/' << 1;

}
