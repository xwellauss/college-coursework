#include<stdio.h>

int main()
{
	int x=6,y;
	
	printf("Enter your guess: ");
	scanf("%d",&y);
	while(x!=y)
	{
		printf("Wrong answer! Guess again: ");
		scanf("%d",&y);
	}	
	printf("\n Correct answer!");
	
	return 0;
}
	