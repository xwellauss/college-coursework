#include<stdio.h>

int main()
{
	int n;
	int d;	
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	// Check if n<=1.
	
	d=2;
	
	while(d<n)
	{		
		if (n%d==0)
		{
			printf("\n It is composite and has least prime factor %d",d);
			break;
		}	
		d=d+1;
	}
	if (d==n)
	{
		printf("It is prime.");
	}
	
	return 0;
}

