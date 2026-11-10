#include<stdio.h>


int main(void) {
	
	float score=12; //normal variable
	
	float *ptr; //declares a pointer variable of type integer
	
	ptr = &score; //& gives memory address of the variable
	
	
	printf("%f\n", *ptr);
	
	*ptr = 14;
	
	printf("%f\n", score);
	
	//printmemory address stored  by ptr
	printf("Mem address stored in ptr is : %p\n", ptr);
	
	printf("Mem address of score variable is : %p\n", &score);
	
	return 0;
	
}