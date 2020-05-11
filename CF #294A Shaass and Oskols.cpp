#include <iostream>

using namespace std;

int main()
{
    int wires, shots, x, y;
    cin >> wires;

    int fBirds[wires+1] = {0};
    for (int i = 1; i <= wires; i++){
        cin >> fBirds[i];
    }
    cin >> shots;

    for(int i = 1; i <= shots; i++)
    {
        cin >> x >> y;
        if(x == 1)
        {
            fBirds[2] = fBirds[2] + fBirds[1]- y;
            fBirds[1] = 0;
        }
        else if (x == wires)
        {
            fBirds[x-1] = fBirds[x-1] + y - 1;
            fBirds[x] = 0;
        }
        else if (x != 1 && x != wires)
        {
            fBirds[x-1] = fBirds[x-1] + y -1;
            fBirds[x+1] = fBirds[x+1] + fBirds[x] -y;
            fBirds[x] = 0;
        }
    }
    for(int i = 1; i <= wires; i++) cout << fBirds[i] << endl;
}
