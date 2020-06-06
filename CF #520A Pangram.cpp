#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, ctr = 0;
    string str;
    cin >> num >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    sort(str.begin(), str.end());

    for(int i = 1; i <= num; i++)
    {
        if(str[i] != str[i-1]) ctr++;
    }

    //cout << str;
    //cout << ctr<< endl;
    if(ctr == 26)
        cout << "YES";
    else
        cout << "NO";
}
