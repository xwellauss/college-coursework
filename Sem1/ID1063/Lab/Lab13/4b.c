#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("LabThirteen-FileHandling/capitals.txt", "r");

	char country[100];
	scanf("%99[^\n]", country);

	while(!feof(fp))
	{
		char c[100], d[100];

		fscanf(fp, " %99[^-] - %99[^\n]", c, d);
		c[strlen(c) - 1] = '\0';

		if(strcmp(country, c) == 0)
		{
			printf("%s\n", d);
		}
	}

	fclose(fp);
	return 0;
}
