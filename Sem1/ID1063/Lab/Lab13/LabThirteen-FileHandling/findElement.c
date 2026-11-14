#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int atomic_number;
	char symbol[5];
	char name[30];
	double mass;
} Element;

int main()
{
    int n,an;
    char num[4],symbol[5],element[30],mass[10];
	
	Element elems[120];

    FILE *ptr;

    if ((ptr=fopen("chemicalElements.txt","r"))==NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("\n*** Program to print the element corresponding to an atomic number ***");
    printf("\n Enter the atomic number: ");
    scanf("%d",&n);
	int i = 0;
    while (!feof(ptr))
    {
		Element e;
		fscanf(ptr,"%d %s %s %lf",&e.atomic_number,e.symbol,e.name,&e.mass);


		elems[i++] = e;

		// if (an==n)
		// {
		// 	printf("%d %s %s %s",an,symbol,element,mass);
		// }
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
