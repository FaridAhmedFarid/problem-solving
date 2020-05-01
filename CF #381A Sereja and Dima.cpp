#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int SerejaCtr = 0, DimaCtr = 0;
    int SerejaSum = 0, DimaSum = 0;
    int i = 0, j = n-1, cards[n];

    for(int ctr = 0; ctr < n; ctr++) cin >> cards[ctr];

    while(n)
    {
        if(SerejaCtr == DimaCtr)
        {
            SerejaCtr++;
            if(cards[i] > cards[j])
            {
                SerejaSum += cards[i];
                i++;
            }else{
                SerejaSum += cards[j];
                j--;
            }
        }else{
            DimaCtr++;
            if(cards[i] > cards[j])
            {
                DimaSum += cards[i];
                i++;
            }else{
                DimaSum += cards[j];
                j--;
            }
        }
        n--;
    }

    cout << SerejaSum << " " << DimaSum;
}
