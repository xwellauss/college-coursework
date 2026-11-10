#include<stdio.h>

/* addition function */

void addOne(float *ptr) {
	
	*ptr = (*ptr)+1.0;
}

void swap(float *ptr1, float *ptr2) {
	
	float temp=*ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	
}




int main(void) {
	
	float score1=12; //normal variable
	float score2=13.5;
	float arr[]={1.0, 2.0, 3.5, 4.2};
	
	float *ptr1, *ptr2;
	ptr1 = &arr[3];
	
	printf("Pointer current value=%f", *ptr1);
	
	printf("Pointer next value = %f", *(ptr1+1));
	
	//ptr1=&score1;
	//ptr2=&score2;
	
	
	//printf("Value before addOne: %f\n", score1);
	//addOne(ptr1);
	//printf("Value after addOne: %f\n", score1);
	
	//swap(ptr1, ptr2);
	//printf("Value after swap: score1: %f, score 2=%f\n", score1, score2);
	
	
	
	
	return 0;
}
