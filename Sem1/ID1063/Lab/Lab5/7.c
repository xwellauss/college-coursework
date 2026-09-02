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

	for(int i = n-1; i >= 0; i--)
	{
		float r_new;

		float r_x = a[i] + b[i];
	}

	
	return 0;
}
