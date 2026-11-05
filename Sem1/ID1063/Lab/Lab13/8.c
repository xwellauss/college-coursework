#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = fopen("LabThirteen-FileHandling/redSanta.bmp", "r");

	// char buffer[2048];

	char line[128];
	while(fgets(line, sizeof(line), fp))
	{
		printf("%s", line);
	}


	
	fclose(fp);
	return 0;
}
