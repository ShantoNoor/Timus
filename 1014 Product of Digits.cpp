#include <stdio.h>

using namespace std;

class primes
{
	int i = 0;
	long long x = 0;
	int two = 0;
	int three = 0;
	int five = 0;
	int seven = 0;
	int total = 0;

public:

	primes(long long k)
	{
		x = k;
		while(x != 1)
		{
			if(x % 2 == 0)
			{
				two++;
				total++;
				x = x/2;
			}
			else if(x % 3 == 0)
			{
				three++;
				total++;
				x = x/3;
			}
			else if(x % 5 == 0)
			{
				five++;
				total++;
				x = x/5;
			}
			else if(x % 7 == 0)
			{
				seven++;
				total++;
				x = x/7;
			}
			else 
				break;
		}
	}

	void print()
	{
		if(x != 1 || total == 1)
			printf("-1\n");
		else
		{
			if(two != 0)
				for(i = 0; i < two; i++)
					printf("2");
			if(three != 0)
				for(i = 0; i < three; i++)
					printf("3");
			if(five != 0)
				for(i = 0; i < five; i++)
					printf("5");
			if(seven != 0)
				for(i = 0; i < seven; i++)
					printf("7");
			printf("\n");
		}
	}
};

int main()
{
	long long x;
	scanf("%lld", &x);

	if(x == 0)
	{
		printf("10\n");
		return 0;
	}
	else if(x == 1)
	{
		printf("1\n");
		return 0;
	}

	primes n(x);

	n.print();

	return 0;
}