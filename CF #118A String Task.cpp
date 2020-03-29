#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word, wordM = "";
    int wordLength;

    cin >> word;
    wordLength = word.length();
    transform(word.begin(), word.end(), word.begin(), ::tolower);

    for(int i = 0; i < wordLength; i++)
    {
        if(word[i] == 'a' || word[i] == 'i' || word[i] == 'o' || word[i] == 'y' || word[i] == 'e' || word[i] == 'u' )
            continue;
        else
            {
                wordM += '.';
                wordM += word[i];
            }
    }
    cout << wordM;
}
