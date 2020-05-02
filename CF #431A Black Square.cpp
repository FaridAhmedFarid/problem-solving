#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long i = 0, sum = 0;
    int a1, a2, a3, a4;
    string squares;

    cin >> a1>> a2>> a3>> a4;
    cin >>squares;

    for(i = 0; i < squares.length(); i++)
    {
        if(squares[i] == '1')
            sum +=a1;
        else if (squares[i] == '2')
            sum += a2;
        else if( squares[i] =='3')
            sum += a3;
        else
            sum += a4;
    }
    cout << sum;
}
