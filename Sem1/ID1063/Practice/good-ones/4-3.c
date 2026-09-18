#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int k = 1;

	for(int i = 0; i < N; i++)
	{
		int t = k;

		if(N % 2 == 0)
		{
			int first_even = 0;

			while(t < 4 + k)
			{
				if(t % 2 == 0 && !first_even)
				{
					first_even = 1;
					t++;
					k++;
					continue;
				}

				printf("%d ", t);

				t++;
			}

			k += 4;
		}
		else
		{
			int first_odd = 0;

			while(t < 3 + k)
			{
				if(t % 2 == 1 && !first_odd)
				{
					first_odd = 1;
					t++;
					k++;
					continue;
				}

				printf("%d ", t);
				t++;
			}
	
			k += 3;
		}

		printf("bus\n");
	}	

	return 0;
}
