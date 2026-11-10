/*
Filename: fgetc-bmpExample.c
Description: Read from a bitmap file using fgetc and write to a bitmap file using fputc,fwrite.
*/

#include<stdio.h>

int main()
{
	char inputFilename[30]="redSanta.bmp",outputFilename[30]="redSantaCopy.bmp";
	char headerInfo[55];
	unsigned char R,G,B;
	unsigned char temp;
	// 0 to 255
	FILE *ptr,*opt;


	ptr=fopen(inputFilename,"rb");	// rb is for binary mode

	if (ptr==NULL)
	{
		printf("\n Open Error");
		return 1;				// Exit main after displaying an open error
	}


	opt=fopen(outputFilename,"wb");
	if (opt==NULL){
        printf("Open Error");
        return 1;
	}

	/* The first 54 bytes of a bmp file contains some header information*/
	/* The RGB pixel values are stored after the header file. */
	fread(headerInfo,54,1,ptr);
	fwrite(headerInfo,54,1,opt);

	while(!feof(ptr))
	{
		B=fgetc(ptr);
		G=fgetc(ptr);
		R=fgetc(ptr);

		temp=R;
		R=G;
		G=temp;

		fputc(B,opt);
		fputc(G,opt);
		fputc(R,opt);

	}
	fclose(opt);
	fclose(ptr);

	printf("Success!");

	return 0;
}
