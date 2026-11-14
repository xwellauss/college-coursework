#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("LabThirteen-FileHandling/capitals.txt", "r");

	char country[100];
	scanf("%99[^\n]", country);


	char c[100], d[100];
	while(fscanf(fp, " %99[^-] - %99[^\n]", c, d) == 2)
	{
		int len = strlen(c);

		if(strcmp(country, c) == 0)
		{
			printf("%s\n", d);
		}
	}

	fclose(fp);
	return 0;
}
