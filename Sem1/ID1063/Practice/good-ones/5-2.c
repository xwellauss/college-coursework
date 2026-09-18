#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	float marks[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%f", &marks[i]);
	}

	int k;
	scanf("%d", &k);

	if(k == 1)
	{
		for(int i = 0; i < n; i++)
		{
			if(marks[i] == 100.0)
			{
				printf("1\n");
				return 0;
			}
		}

		printf("-1\n");
	}
	else if(k == 2)
	{
		float avg = 0.0;
		for(int i = 0; i < n; i++)
		{
			avg += marks[i];
		}
		avg /= n;

		printf("%f\n", avg);
	}
	else if(k == 3)
	{
		float min = marks[0];
		for(int i = 0; i < n; i++)
		{
			if(marks[i] < min) min = marks[i];
		}
		printf("%f\n", min);
	}
	else if(k == 4)
	{
		float max = marks[0];
		for(int i = 0; i < n; i++)
		{
			if(marks[i] > max) max = marks[i];
		}
		printf("%f\n", max);
	}
	

	return 0;
}
