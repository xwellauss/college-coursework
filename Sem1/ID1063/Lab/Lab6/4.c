#include <stdio.h>

int main()
{
	int x = 50;
	char str[x];

	fgets(str, x, stdin);

	char c;
	scanf("%c", &c);

	for(int i = 0; i < x; i++)
	{
		if(str[i] == c)
		{
			printf("%d\n", i);

			return 0;
		}
	}

	printf("-1\n");
	
	return 0;
}
