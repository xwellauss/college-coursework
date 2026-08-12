#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d", &a);

	int b;
	scanf("%d", &b);

	int c = abs(a+b)/2 + abs(a-b)/2;

	printf("Max: %d, Min: %d\n", c, a+b-c);

	return 0;
}
