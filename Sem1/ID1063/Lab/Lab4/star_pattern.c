#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	// 2_A
	int a = n;
	while(a > 0)
	{	
		printf("*");

		a--;
	}
	
	printf("\n");

	int b = n;


	return 0;
}
