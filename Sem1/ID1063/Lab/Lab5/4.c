#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	// m is height; n is width
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == 0 || i == m-1) printf("*");
			else
			{
				if(j == 0 || j == n-1) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
