#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int sum = 0;

	for(int i = 0; i < k; i++)
		sum += arr[i];

	int max = sum;

	for(int i = 1; i <= n-k; i++)
	{
		sum += arr[i+k-1] - arr[i-1];

		if(sum > max) max = sum;
	}

	printf("%d\n", max);

	return 0;
}
