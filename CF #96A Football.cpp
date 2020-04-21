#include <iostream>
#include <string>

using namespace std;

int main()
{
    string formation = "";
    short zeros = 0, ones = 0;

    getline(cin, formation);
    //cout << formation.length()<<endl;
    for(int i = 0; i < formation.length(); i++)
    {
        if(formation[i] == '0')
            {
                zeros++;
                ones = 0;
            }
        if(formation[i] == '1')
            {
                ones++;
                zeros = 0;
            }
        if(zeros >= 7 || ones >= 7)
        {
            cout << "YES";
            return 0;
        }
    }
        cout << "NO";
}
