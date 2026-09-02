#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);

		if(x >= 0 && x <= 9) a[i] = x;
	}

	int b[10];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(a[i] == j) b[j]++;
		}
	}

	for(int i = 0; i < 10; i++)
	{
		printf("%d: %d\n", i, b[i]);
	}

	return 0;
}

