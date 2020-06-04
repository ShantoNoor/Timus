#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int x;
	cin >> x;

	stack<int> s;

	if(x == 0)
	{
		cout << 10 << endl;
		return 0;
	}
	else if(x == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	for (int i = 9; i >= 2 && x != 1; i--)
	{
		while(x % i == 0)
		{
			s.push(i);
			x = x/i;
		}
	}

	if(x == 1)
	{
		while(!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	else
		cout << -1 << endl;

	return 0;
}