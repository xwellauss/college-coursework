#include <stdio.h>

double max_arr(double* arr, int i, int n)
{
	if(i == n-1) return arr[i];

	double rest = max_arr(arr, i + 1, n);

	if(arr[i] > rest) return arr[i];
	else return rest;
}

int main()
{
	int n;
	scanf("%d", &n);

	double A[n];
	for(int i = 0; i < n; i++) scanf("%lf", &A[i]);

	printf("%f\n", max_arr(A, 0, n));
	
	return 0;
}
