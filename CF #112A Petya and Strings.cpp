#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word1, word2;
    short result = 0;
    cin >> word1 >> word2;

    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
    for(int i = 0; i < word1.length(); i++)
    {
        if(word1[i] > word2[i])
            {
                result = 1;
                break;
            }
        else if(word1[i] < word2[i])
            {
                result = -1;
                break;
            }
        else if(word1[i] == word2[i])
            continue;
    }
    cout << result;
}
