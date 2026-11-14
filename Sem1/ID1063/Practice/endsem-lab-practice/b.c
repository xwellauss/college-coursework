#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int mat[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &mat[i][j]);

	int mat2[n+2][m+2];
	for(int i = 0; i < n+2; i++)
	{
		for(int j = 0; j < m+2; j++)
		{
			if(i == 0 || i == n+2-1 || j == 0 || j == m+2-1)
			{
				mat2[i][j] = 0;
			}
			else
			{
				mat2[i][j] = mat[i-1][j-1];
			}
		}
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(mat2[i][j] == 0)
			{
				if(mat2[i][j-1] == 1 || mat2[i][j+1] == 1 || mat2[i+1][j-1] == 1 || mat2[i+1][j] == 1 || mat2[i+1][j+1] == 1 || mat2[i-1][j-1] == 1 || mat2[i-1][j] == 1 || mat2[i-1][j+1] == 1) mat2[i-1][j-1]++;
			}
			else if(mat2[i][j] == 1)
			{
				mat[i-1][j-1] = -1;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d", mat[i][j]);
			if(j != m-1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}
