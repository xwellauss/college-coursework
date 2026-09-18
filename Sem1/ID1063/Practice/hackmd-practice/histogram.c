#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int n_t = n;
	int nums[n];

	while(n_t--)
	{
		int x;
		scanf("%d", &x);

		if(x >= 0 && x <= 9) nums[n_t] = x;
	}

	int freq[10] = {0};
	for(int i = 0; i < n; i++)
	{
		freq[nums[i]]++;
	}

	// for(int i = 0; i < 10; i++)
	// {
	// 	for(int j = 0; j < 11; j++)
	// 	{
	// 		if(j == 10) printf("%d", i);
	// 		else
	// 		{
	// 			int f = freq[i];
	// 			while(f--)
	// 			{
	// 				printf("*\n");
	// 			}
	// 		}
	// 	}
	// }
	
	for(int row = 10; row >= 1; row--)
	{
		for(int i = 0; i < 10; i++)
		{
			if(freq[i] >= row)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

			if(i != 9) printf(" ");
		}
		printf("\n");
	}

	for(int i = 0; i < 10; i++)
	{
		printf("%d", i);
		if(i != 9) printf(" ");
	}

	printf("\n");
}
