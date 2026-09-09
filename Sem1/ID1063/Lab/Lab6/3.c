#include <stdio.h>

int main()
{
	char str[50];

	scanf("%49[^\n]", str);


	char a = str[0];
	char b = str[1];

	str[1] = a;
	str[0] = b;

	printf("%s\n", str);
	return 0;
}
