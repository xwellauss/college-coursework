#include<stdio.h>

int factorial(int n){ 

	//if(n==0) return 1;
		
	int ans = n * factorial(n-1);
	
	return ans;

}



int main(void){
	
	int n=5;
	
	printf("Factorial of %d is %d\n",n, factorial(n)); 
	
	return 0;
}