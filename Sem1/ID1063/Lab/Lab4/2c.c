#include <stdio.h>
#include <math.h>

int main()
{
	float x;
	int n;
	scanf("%f %d", &x, &n);

	int a = 1;
	while(a <= n)
	{
		printf("%.3f ", powf(x,a));
		a++;
	}
	printf("\n");

	return 0;
}
