#include <stdio.h>
#include <string.h>

int main()
{
	int x = 50;
	char str[x];

	fgets(str, x, stdin);

	int len = strlen(str);

	int i = 0;
	int j = 0;

	while(i < len/2)
	{
		if(str[i] == str[len-1-i])
		{
			j++;
		}

		i++;
	}

	if(j == i)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a Palindrome\n");
	}

	return 0;
}
