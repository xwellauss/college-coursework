#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int arr[N][N];

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}


	int g = N*N-1;
	int i = 0;
	int moves = 0;

	while(i < g)
	{
		int x = i / N;
		int y = i % N;

		i += arr[x][y];
		moves++;
	}

	printf("%d\n", moves);

	return 0;
}
