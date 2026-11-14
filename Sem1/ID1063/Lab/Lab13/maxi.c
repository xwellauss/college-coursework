#include <stdio.h>
#include <stdlib.h>

int maxi(int* a, int n)
{
	if(n == 1) return a[0];

	int m = maxi(a, n-1);

	return (a[n-1] > m) ? a[n-1] : m;
}

int main()
{
	int a[5] = {4, 5, 1, 9, 2};
	int* p = malloc(5*sizeof(int));
	calloc(1, 5*sizeof(int));

	realloc(p, 10*sizeof(int));
	free(p);

	printf("%d\n", maxi(a, 5));

	return 0;
}
