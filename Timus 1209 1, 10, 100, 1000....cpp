#include <iostream>
using namespace std;

#define size 2147483647
#define arr_size 65536

int binary_search(int ara[], int n, int ara_size)
{
    int min, max, mid;

    min = 0;
    max = ara_size - 1;

    while(min <= max)
    {
        mid = min + (max - min) / 2;

        if(ara[mid] == n) {
            return 1;
        } else if(ara[mid] < n) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int i;
    unsigned index = 1;

    int arr[arr_size];

    for(i = 0, index = 1; index <= size; i++, index += i)
    {
        arr[i] = index;
    }

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        cout << binary_search(arr, n, arr_size) << "\n";
    }

    return 0;
}