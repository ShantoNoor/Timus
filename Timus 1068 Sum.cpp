#include <iostream>
using namespace std;

int main()
{
    int n, sum, x;
    cin >> n;

    if(n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    if(n < 0)
    {
        x = n*(-1);
    }
    else
    {
        x = n;
    }
    
    sum = (x*(x+1)) / 2;

    if(n < 0)
    {
        sum = (sum-1)*(-1);
    }

    cout << sum << endl;

    return 0;
}