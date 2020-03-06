#include <iostream>
using namespace std;

#define i_size 2147483647
#define arr_size 65536

int binary_search(int ara[], int n, int ara_size)
{
    int min, mid, max;
    min = 0;
    max = ara_size - 1;
    while(min <= max)
    {
        mid = min + (max - min) / 2;
        if(ara[mid] == n)
        {
            return 1;
        } 
        else if(ara[mid] > n)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int i, ones[arr_size];
    unsigned index;

    for(i = 0, index = 1; index <= i_size; i++, index += i)
    {
        ones[i] = index;
    }

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << binary_search(ones, n, arr_size) << endl;
    }

    return 0;
}