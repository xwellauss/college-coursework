#include <stdio.h>

int compareStrings(char s1[], char s2[])
{
	int i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
		i++;

	if(s1[i] == s2[i]) return 0;
	
	return (s1[i] > s2[i]) ? 1 : 2;
}

int findSmallest(char words[][101], int n)
{
	int k = 0;

	for(int i = 0; i < n; i++)
	{
		if(compareStrings(words[i], words[k]) == 1) k = i;
	}

	return k;
}

int main()
{
	return 0;
}
