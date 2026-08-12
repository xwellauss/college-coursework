#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int min_v;


	if(a < b) min_v = a;
	else min_v = b;

	if(c < a) min_v = c;

	printf("The minimum is: %d\n", min_v);
	return 0;
}

