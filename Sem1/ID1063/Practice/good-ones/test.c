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
	int a;
	scanf("%d", &a);
	
	printf("Next Prime: %d\n", next_prime(a));
	return 0;
}
