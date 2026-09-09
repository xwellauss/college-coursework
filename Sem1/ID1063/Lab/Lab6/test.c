#include <stdio.h>

int main()
{
	char str[50];

	printf("Enter a full sentence: ");

	scanf("%12[^\n]", str);

	printf("You entered: %s\n", str);
	return 0;
}
