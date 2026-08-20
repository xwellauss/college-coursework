#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int x = 0;
	scanf("%d", &n);

	int t = n;
	while(t > 0)
	{
		int a = t % 10;

		printf("%d,", a);

		t /= 10;
		x++;
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
	int p = n;
	while(x > 0)
	{
		int a = p / (int)pow(10, x-1);
		printf("%d,", a);
		p -= a*(int)pow(10, x-1);
		x--;
	}
	printf("\n");

	return 0;
}
