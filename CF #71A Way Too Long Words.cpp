#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    short n, wordLength; //number of words
    string word;
 
    cin >> n;
 
    while (n)
    {
        cin >> word;
        wordLength = word.length();
        if (wordLength <= 10)
            cout << word << endl;
        else if (wordLength > 10)
            cout << word[0] << (wordLength-2) << word[wordLength-1] << endl;
        n--;
    }
}
