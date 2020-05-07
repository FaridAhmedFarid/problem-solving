#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stones, instructions;
    cin >> stones >> instructions;
    int ptr = 0;

    for(int i = 0; i < instructions.length(); i++)
    {
        if(stones[ptr] == instructions[i]) ptr++;
    }
    cout << ptr+1;
}
