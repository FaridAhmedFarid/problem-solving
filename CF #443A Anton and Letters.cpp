#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string text;
    getline(cin, text);
    set <char> unq;


    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 97 && text[i] <=122)
        {
            unq.insert(text[i]);

        }
    }

    cout << unq.size();

}
