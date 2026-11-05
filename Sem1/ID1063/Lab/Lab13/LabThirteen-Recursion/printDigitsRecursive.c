#include<stdio.h>
#include<string.h>

void printDigits(unsigned int n)
{    
	if (n==0) return;	
	
	/* Modify the code below so that the digits are printed from left-to-right
	instead of right-to-left*/
    printf(" %u",n%10);
	printDigits(n/10);
}
int main()
{
	printf("\n");
    printDigits(1234567);    
    return 0;
}
