#include <stdio.h>
#include <cmath>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	unsigned long long int x;
	double d;
	vector<double> vec;

	while(scanf("%llu", &x) != EOF)
	{
		d = sqrt<unsigned long long int>(x);
		vec.push_back(d);
	}

	vector<double>::reverse_iterator rit;

	for(rit = vec.rbegin(); rit != vec.rend(); ++rit)
	{
		printf("%.4f\n", *rit);
	}

	return 0;
}