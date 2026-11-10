#include<stdio.h>

int main(void)
{
	int a,sum;
	int count=1;
	
	sum=0;
	count=1;
	while (count<=5)
	{
		printf("\n Enter number: ");
		scanf("%d",&a);
		sum=sum+a;
		count=count+1;
	}
	
	printf("\n The sum of the five numbers is %d",sum);
	
	return 0;
}