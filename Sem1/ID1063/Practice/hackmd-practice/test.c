#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "AzByC";
	int n = strlen(s);

	int val = 0;

	for(int i = 0; i < n; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
			s[i] = (s[i] - 'A' + i) % 26 + 'A';
	}


	printf("%s\n", s);
	return 0;
}
