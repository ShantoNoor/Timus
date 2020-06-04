#include <stdio.h>
#include <cmath>

int main()
{
	int n;
	long long r;

	scanf("%d", &n);

	r = pow(2, n-1);

	printf("%lld\n", r);


	return 0;
}