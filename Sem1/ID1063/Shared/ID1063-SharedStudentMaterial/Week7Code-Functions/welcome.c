#include<stdio.h>


void showWelcome(void) {

	printf("Welcome to function class! \n");
	
}

int maximum(int a, int b) {
	if(a>b) {
		return a;
	}
	return b;
}

int main(void){
	int n=10;
	
	float x=3.5;
	showWelcome(); //calls the function
	
	int result = maximum(7, 5);
	
	//printf("Square of %f is %d \n", x, result); 
	
	printf("Maximum is : %d", result);
	showWelcome();
	return 0;
}