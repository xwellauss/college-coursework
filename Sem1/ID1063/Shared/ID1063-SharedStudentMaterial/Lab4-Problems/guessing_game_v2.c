#include<stdio.h>

int main()
{
	int x=6,y;
	
	printf("Enter your guess: ");
	while(1)
	{		
		scanf("%d",&y);		
		if (x==y)
		{
			break;
		}		
		else
		{
			printf("Wrong answer! Guess again: ");
		}
	}
	
	printf("\n Correct answer!");
	
	return 0;
}
	