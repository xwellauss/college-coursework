#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int c_max = 0;
	while(n--)
	{
		int a;
		scanf("%d", &a);

		if(a > c_max) c_max = a;
	}

	printf("Max: %d\n", c_max);

	return 0;
}
