#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i, j, count = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m+1; j++)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}