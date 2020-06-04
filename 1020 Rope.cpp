#include <stdio.h>
#include <cmath>
#include <vector>

#define PI acos(-1)

inline double path(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
}

int main()
{
	int n, i;
	double r;
	scanf("%d %lf", &n, &r);

	double arr[100][2];

	for (i = 0; i < n; i++)
	{
		scanf("%lf %lf", &arr[i][0], &arr[i][1]);
	}

	double pathlen = 0;

	for (i = 0; i < n-1; i++)
	{
		pathlen += path(arr[i][0], arr[i][1], arr[i+1][0], arr[i+1][1]);
	}
	pathlen += path(arr[i][0], arr[i][1], arr[0][0], arr[0][1]);

	pathlen += 2*PI*r;

	for (int i = 0; i < count; i++)
	{
		/* code */
	}

	printf("%0.2f\n", pathlen);

	return 0;
}