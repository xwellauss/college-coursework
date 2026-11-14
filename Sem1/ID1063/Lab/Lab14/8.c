#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	int max = 1;
	int min = 10;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}

	for(int i = max; i >= 1; i--)
	{
		for(int j = 0; j < n; j++)
		{
			if(arr[j] >= i)
				printf("*");
			else
				printf(" ");

			if(j != n-1) printf(" ");
		}
		printf("\n");
	}
}
