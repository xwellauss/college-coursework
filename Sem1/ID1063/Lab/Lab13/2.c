#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("LabThirteen-FileHandling/1000CommonWords.txt", "r");

	if(fp == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}

	char str[100];
	while(fscanf(fp, "%99s", str) == 1)
	{
		int l = strlen(str);

		if(l == 7)
			printf("%s\n", str);
	}
	printf("\n");

	fclose(fp);
	return 0;
}
