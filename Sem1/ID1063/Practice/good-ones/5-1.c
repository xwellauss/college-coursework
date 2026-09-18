#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long int nums[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &nums[i]);
	}

	long long int time[n];
	time[0] = nums[0];
	for(int i = 1; i <= n; i++)
	{
		time[i] = nums[i] - nums[i-1];
	}

	char str[n+1];
	for(int i = 0; i < n; i++)
	{
		scanf(" %c", &str[i]);
	}

	str[n] = '\0';

	for(int i = 0; i < n; i++)
	{
		printf("%c %lld\n", str[i], time[i]);
	}

	return 0;
}
