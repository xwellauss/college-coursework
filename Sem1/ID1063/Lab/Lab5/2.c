#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	float a[n], b[n];

	printf("A: \n");
	for(int i = 0; i < n; i++)
	{
		scanf("%f", &a[i]);
	}

	printf("B: \n");
	for(int i = 0; i < n; i++)
	{
		scanf("%f", &b[i]);
	}

	float dot = 0.0f;
	for(int i = 0; i < n; i++)
	{
		dot += a[i] * b[i];
	}

	printf("Dot Product: %f\n", dot);

	return 0;
}
