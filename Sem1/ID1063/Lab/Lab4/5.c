#include <stdio.h>

int main()
{
	int x = 7;

	while(1)
	{
		int n;
		scanf("%d", &n);

		if(n == x)
		{
			printf("You got it!\n");
			break;
		}
		else
		{
			printf("Wrong answer! Try again\n");
		}
	}
	
	return 0;
}
