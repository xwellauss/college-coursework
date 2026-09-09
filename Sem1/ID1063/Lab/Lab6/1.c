#include <stdio.h>

double calculate_area(double l, double w)
{
	return l*w;
}

int main()
{
	double l, w;

	scanf("%lf %lf", &l, &w);
	printf("%lf\n", calculate_area(l, w));
	return 0;
}
