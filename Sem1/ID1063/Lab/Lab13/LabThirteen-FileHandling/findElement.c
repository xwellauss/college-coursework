#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,an;
    char num[4],symbol[5],element[30],mass[10];
	
    FILE *ptr;    

    if ((ptr=fopen("chemicalElements.txt","r"))==NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    printf("\n*** Program to print the element corresponding to an atomic number ***");
    printf("\n Enter the atomic number: ");
    scanf("%d",&n);
    while (!feof(ptr))
    {
		fscanf(ptr,"%d %s %s %s",&an,symbol,element,mass);		
		if (an==n)
		{
			printf("%d %s %s %s",an,symbol,element,mass);
		}
        /*
		// Using only string reads
		fscanf(ptr,"%s %s %s %s",num,symbol,element,mass);
        if (atoi(num)==n)
            printf("The element with atomic number %d is %s",n,element);
		*/
    }
    fclose(ptr);
	printf("\n Done!");
	return 0;
}
