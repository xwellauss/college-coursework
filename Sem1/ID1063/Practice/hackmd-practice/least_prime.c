#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int f = 2;
	while(n % f != 0)
	{
		f++;
	}

	printf("%d\n", f);
	return 0;
}
