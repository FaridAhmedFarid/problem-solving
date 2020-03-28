#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long n, m, a;
    long long result;
    cin >> n >> m >> a;
    result = ((n+a-1)/a) * ((m+a-1)/a);
    cout << result << endl;
}
