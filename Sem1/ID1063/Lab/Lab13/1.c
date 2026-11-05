#include <stdio.h>

int T(int n)
{
	if(n <= 0) return 0;
	if(n == 1 || n == 2) return 1;

	return T(n-1) + T(n-2) + T(n-3);
}

int t(int n)
{
	if(n == 0) return 1;

	return 2 + 1/t(n-1);
}

int main()
{
	printf("T: %d, t: %d\n", T(3), t(1));
	return 0;
}
