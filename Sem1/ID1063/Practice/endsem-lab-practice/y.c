#include <stdio.h>
#include <string.h>

int main()
{
	int N, k;

	scanf("%d %d", &N, &k);

	char s[1001];
	scanf(" %s", s);
	
	int len = strlen(s);

	int i = 0;
	while(s[i] != '\0')
	{
		if(k == N && s[i] == 'R')
		{
			i++;
			printf("%d\n", i);
			return 0;
		}

		if(s[i] == 'L')
		{
			if(k > 0) k -=1;
		}
		else if(s[i] == 'R')
		{
			if(k < N) k += 1;
		}

		i++;
	}

	printf("-1\n");



	return 0;
}
