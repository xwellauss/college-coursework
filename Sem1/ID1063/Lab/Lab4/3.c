#include <stdio.h>
#include <math.h>

int main()
{
	float r;
	scanf("%f", &r);
	float x = 1 + r/100;

	float p = 1.0f;
	int n = ceil(log(2.0)/log(x));
	// int n;




	printf("Years: %d\n", n);

	return 0;
}
