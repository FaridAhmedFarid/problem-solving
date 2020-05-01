#include <iostream>

using namespace std;

int main()
{
    string text;
    cin >> text;
    int big = 0, small = 0;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
            {
                big++;
            }
        else
        {
            small++;
        }
    }

    for(int i = 0; i < text.length(); i++)
    {
        if(small > big)
        {
            if(text[i] >= 'A' && text[i] <= 'Z') text[i] = text[i] + 32;
        }
        else if(small < big)
        {
            if(text[i] >= 'a' && text[i] <= 'z') text[i] = text[i] - 32;
        }
        else{
            if(text[i] >= 'A' && text[i] <= 'Z') text[i] = text[i] + 32;
        }
    }
    cout << text;
}
