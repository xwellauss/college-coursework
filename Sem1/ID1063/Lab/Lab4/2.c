#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	// 2A
	int a = n;
	while(a > 0)
	{	
		printf("*");

		a--;
	}
	
	printf("\n");

	// 2B: TODO: take a look again
	int b = 0;
	int x = 0;
	while(b < n)
	{
		x = b*b;
		if(x > n) break;
		printf("%d,", x);
		b++;
	}
	printf("\n");


	return 0;
}
