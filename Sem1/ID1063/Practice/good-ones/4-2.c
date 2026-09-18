#include <stdio.h>
#include <stdbool.h>

bool is_prime(int a)
{
	for(int i = 2; i * i <= a; i++)
	{
		if(a%i == 0) return false;
	}

	return true;
}

int next_prime(int a)
{
	static int is_first = 1;

	if(is_prime(a))
	{
		if(!is_first) return a;
		is_first = 0;
	}
	
	return next_prime(a+1);
}

int main()
{
	int P, N;
	scanf("%d %d", &P, &N);

	int resonant_echo = 0;

	int n = 0;
	int k = P;

	while(1)
	{
		if(n >= N) break;

		int t = k;
		int sum_digits = 0;
		while(t > 0)
		{
			sum_digits += t % 10;
			t /= 10;
		}

		if(is_prime(k) && is_prime(sum_digits))
		{
			n++;
			resonant_echo = k;
		}

		k++;
	}

	printf("The Resonant Echo is: %d\n", resonant_echo);


	return 0;
}
