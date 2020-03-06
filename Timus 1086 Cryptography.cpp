#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[15001];
    arr[0] = 0;
    arr[1] = 2;
    arr[2] = 3;

    int i, x, c;
    bool isDevided;

    i = 2, x = 4, c = 3;
    while(c < 15001)
    {
        isDevided = false;
        for(i = 2; i <= (int)sqrt(x); i++)
        {
            if(x%i == 0)
            {
                isDevided = true;
                break;
            }
        }
        if(!isDevided)
        {
            arr[c] = x;
            c++;
        }
        x++;
    }

    int n, t;
    cin >> n;
    while(n--)
    {
        cin >> t;
        cout << arr[t] << endl;
    }

    return 0;
}