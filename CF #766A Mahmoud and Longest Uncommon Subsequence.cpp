#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    long long len;



    cin >> str1 >> str2;
    len = (str1.length() > str2.length()) ? str1.length() : str2.length();
    if(str1 == str2) len = -1;

    cout << len;
}
