#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int first = 1;

	while(n > 1)
	{
		int f = 2;
		while(n % f != 0)
		{
			f++;
		}

		if(!first) printf(", ");
		printf("%d", f);
		first = 0;

		n /= f;
	}

	printf("\n");
	return 0;
}
