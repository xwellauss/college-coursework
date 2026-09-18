#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	int diff = b - a;

	int c, d;
	scanf("%d", &c);
	while(1)
	{
		scanf("%d", &d);

		if(diff > 0)
		{
			if(d - c > 0)
			{
				c = d;
			}
			else if(d - c < 0) break;
		}
		else if(diff < 0)
		{
			if(d - c < 0)
			{
				c = d;
			}
			else if(d - c > 0) break;
		}
	}

	return 0;
}
