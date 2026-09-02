#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int r = 0;
	int x, y, z;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j) continue;
			if(a[i] == a[j])
			{
				r++; x = i; y = j; z = a[i];
			}
		}
	}

	printf("%d\n", r);

	if(r == 2) printf("Repeated: %d at %d, %d\n",z, y, x);
	else if(r == 0)printf("No repeated\n");


	return 0;
}
