#include <stdio.h>

int main()
{
	char dirs[4] = {'N', 'E', 'S', 'W'};

	char init_dir;
	scanf(" %c", &init_dir);

	int n;
	scanf("%d", &n);

	int offset = 0;
	while(dirs[offset] != init_dir)
	{
		offset++;
	}



	char fin_dir = dirs[offset];
	for(int i = 0; i < n; i++)
	{
		offset = (offset + 1) % 4;

		printf("%c ", dirs[offset]);
		fin_dir = dirs[offset];
	}

	printf("Final Direction: %c\n", fin_dir);

	return 0;
}
