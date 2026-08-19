#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	while(n > 0)
	{
		int a = n % 10;

		printf("%d,", a);

		n /= 10;
	}
	printf("\n");

	// TODO: try 6c
	return 0;
}
