#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	float a[n];
	float avg = 0.0f;
	for(int i = 0; i < n; i++)
	{
		scanf("%f", &a[i]);
		avg += a[i];

	}

	avg /= n;

	int k = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > avg) k++;
	}

	printf("%d\n", k);

	return 0;
}
