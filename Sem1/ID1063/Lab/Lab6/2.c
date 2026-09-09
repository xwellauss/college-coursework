#include <stdio.h>

void print_border(int count)
{
	for(int i = 0; i < count; i++)
	{
		printf("*");
	}

	printf("\n");
}

int main()
{
	print_border(5);
	return 0;
}

