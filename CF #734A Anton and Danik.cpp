#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    long A = 0, D = 0;
    string result;

    cin >> n >> result;

    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] == 'A')
            A++;
        else if (result[i] == 'D')
            D++;
    }
    if(A > D)
        cout << "Anton";
    else if (A < D)
        cout << "Danik";
    else if (A == D)
        cout << "Friendship";

}
