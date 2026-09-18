#include <stdio.h>
#include <stdbool.h>

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

	int least_in_rows[n];
	for(int i = 0; i < n; i++)
	{
		int m = mat[i][0];
		for(int j = 0; j < n; j++)
		{
			if(mat[i][j] < m) m = mat[i][j];
		}
		least_in_rows[i] = m;
	}

	int max_in_cols[n];
	for(int i = 0; i < n; i++)
	{
		int m = mat[0][i];
		for(int j = 0; j < n; j++)
		{
			if(mat[j][i] > m) m = mat[j][i];
		}
		max_in_cols[i] = m;
	}

	bool found_one = false;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(least_in_rows[i] == max_in_cols[j])
			{
				printf("%d\n", least_in_rows[i]);
				found_one = true;
			}
		}
	}

	if(!found_one) printf("NO SPECIAL VALUE\n");



	return 0;
}
