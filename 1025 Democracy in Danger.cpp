#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	int arr[101];
	memset(arr, -1, 101*sizeof(int));
	int n, temp, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[i] = (1+temp)/2;
		sum += arr[i];
	}
	sort(arr, arr+n);

	n = (n+1)/2;

	temp = 0;
	for (int i = 0; i < n; i++)
		temp += arr[i];

	cout << temp << endl;

	for (std::vector<>::iterator i = .begin(); i != .end(); i++)
	{
					p
	}

	return 0;
}


