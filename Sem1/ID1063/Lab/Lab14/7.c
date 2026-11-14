#include <stdio.h>
#include <math.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += pow(i, k);
	}

	printf("%d\n", sum);


	return 0;
}
