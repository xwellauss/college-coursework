#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	for(int i = 1; i <= N; i++)
	{
		int row_total = 0;
		for(int j = 1; j <= i; j++)
		{
			row_total += j;
		}

		while(row_total < M)
		{
			row_total++;
		}

		printf("Final Volume for Row %d is: %d ml\n", i, row_total);
	}

	return 0;
}
