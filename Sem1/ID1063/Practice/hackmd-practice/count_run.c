#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr_c[n];

	int count = 0;
	int final = 0;

	for(int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);

		if(a > 0)
		{
			count++;
			final = count;
		}
		else
		{
			count = 0;
		}
	}

	printf("%d\n", final);

	return 0;
}
