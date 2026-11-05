/*
Filename: fileRead-fgetc.c
Description: Read from a file using fgetc
*/
#include<stdio.h>

int main()
{
	char filename[30];
	char ch;
	FILE *ptr;

	printf("\n Enter the file name: ");
	scanf("%s",filename);	

	ptr=fopen(filename,"r");
	if (ptr==NULL)
	{
		printf("\n Open Error");
		return 1;				// Exit main after displaying an open error
	}
	
	while(!feof(ptr))
	{
		ch=fgetc(ptr);
		printf("\n %c",ch);
    }

	return 0;
}
