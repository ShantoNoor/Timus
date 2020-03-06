#include <iostream>
using namespace std;

int main()
{
    int n, k, i, j, result = 1;
    char mark[21];

    cin >> n >> mark;

    for(k = 0; mark[k] != '\0'; k++);

    if(n % k)
    {
        for(i = n, j = 0; ((n - k*j) >= (n % k)); i--, j++)
        {
            result = result * (n - k*j);
        }
    }
    else
    {
        for(i = n, j = 0; ((n - k*j) >= k); i--, j++)
        {
            result = result * (n - k*j);
        }
    }

    cout << result << endl;

    return 0;
}