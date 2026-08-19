#include <stdio.h>
#include <math.h>

int main()
{
	float r;
	scanf("%f", &r);
	float x = 1 + r/100;

	int n = ceil(log(2.0)/log(x));

	printf("Years: %d\n", n);

	return 0;
}
