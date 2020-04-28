#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string text;
    int unq = 0;

    cin >> text;
    sort(text.begin(), text.end());

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] != text[i+1])
            unq++;
    }

    if(unq%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
