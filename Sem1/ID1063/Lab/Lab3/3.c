#include <stdio.h>

int main()
{
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	int disc = b*b - 4 * a * c;

	if(disc < 0)
	{
		printf("Roots are imaginary.");
	}
	else if(disc == 0)
	{
		printf("Roots are repeated.");
	}
	else if(disc > 0)
	{
		printf("Roots are real.\n");
	}

	return 0;
}
