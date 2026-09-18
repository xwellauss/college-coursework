#include <stdio.h>

int power(int x, int y)
{
	int r = 1;
	for(int i = 0; i < y; i++)
	{
		r *= x;
	}

	return r;
}

int num_digits(int a)
{
	int t = 0;
	while(a > 0)
	{
		t++;
		a /= 10;
	}

	return t;
}

int power_sum_digits(int a)
{
	int k = a;
	int sum = 0;
	while(k > 0)
	{
		int t = power(k%10, num_digits(a));

		sum += t;
		k /= 10;
	}
	return sum;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int t = 0;
	for(int i = a; i <= b; i++)
	{
		if(i == power_sum_digits(i))
		{
			t++;
			printf("%d\n", i);
		}
	}

	printf("TOTAL: %d\n", t);

	return 0;
}
