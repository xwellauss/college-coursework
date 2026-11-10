#include<stdio.h>

int main(void)
{
	double a,b,result;	
	int choice;
	
	printf("\n What operation do you want to do?");
	printf("\n Enter 1 for +, 2 for -, 3 for *, 4 for /");
	scanf("%d",&choice);
	printf("Enter the two numbers: ");
	scanf("%lf %lf",&a,&b);
	
	if (choice==1)
	{
		result=a+b;		
	}
	else if (choice==2)
	{
		result=a-b;
	}
	else if (choice==3)
	{
		result=a*b;
	}
	else if (choice==4)
	{
		result1=a/b;
		//What can go wrong here?
	}
	else
	{
		printf("Invalid choice");
	}
	
	printf("\n %3.4f",result);
	
	return 0;
}
	