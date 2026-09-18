#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];

	int total_sum = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		total_sum += arr[i];
	}

	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		int n = arr[i];
		
		while(n > 0)
		{
			sum += n % 10;
			n /= 10;
		}
	}

	int f_sum = 0;
	while(sum > 0)
	{
		f_sum += sum % 10;
		sum /= 10;
	}


	// Check palindrome
	bool is_palindrome = false;
	//
	int j = 0;
	int i = 0;
	while(i < n/2)
	{
		if(arr[i] == arr[n - 1 - i]) j++;

		i++;
	}

	if(i == j)
	{
		is_palindrome = true;
	}

	// Check Prime
	bool is_prime = true;

	if(n <= 1)
	{
		is_prime = false;
	}
	else
	{
		int k = 2;
		while(k * k < n)
		{
			if(n % k == 0)
			{
				is_prime = false;
				break;
			}

			k++;
		}
	}

	// Check sum
	bool check_sum = false;
	for(int i = 0; i < n; i++)
	{
		int left_sum, right_sum;
		for(int l = 0; l < i+1; l++)
		{
			left_sum += arr[l];
		}

		right_sum = total_sum - left_sum;

		if(left_sum == right_sum)
		{
			check_sum = true;
			break;
		}
	}

	if(is_palindrome && is_prime && check_sum) printf("YES\n");
	else printf("NO\n");

	printf("%d\n", f_sum);

	return 0;
}
