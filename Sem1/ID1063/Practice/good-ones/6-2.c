#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int mat[n][n];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	int row_sums[n];
	for(int i = 0; i < n; i++)
	{
		row_sums[i] = 0;
		for(int j = 0; j < n; j++)
		{
			row_sums[i] += mat[i][j];
		}

		printf("%d\n", row_sums[i]);
	}

	int k = row_sums[0];
	for(int i = 0; i < n; i++)
	{
		if(row_sums[i] != k)
		{
			printf("Discord\n");
			return 0;
		}
	}

	printf("Harmony\n");

	return 0;
}
