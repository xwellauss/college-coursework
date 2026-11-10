#include<stdio.h>

int main()
{
	int x=6,y;
	
	printf("Enter your guess: ");
	do
	{		
		scanf("%d",&y);
		if (x!=y)
		{
			printf("Wrong answer! Guess again: ");
		}
	}while(x!=y);
	
	printf("\n Correct answer!");
	
	return 0;
}
	