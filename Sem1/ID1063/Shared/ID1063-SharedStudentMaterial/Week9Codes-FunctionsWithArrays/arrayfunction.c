#include<stdio.h>


// Counts the number of occurences of x in the array
int countOccurences(int arr[], int size, int x) {
	
	int result=0;
	for(int i=0; i<size; i++) {
		if(arr[i]==x) {
			result++;
		}
	}
	return result;

}	

//increments array elements by 1 each
void addOneToEach(int arr[], int size) {
	
	for(int i=0; i<size; i++) {
		arr[i] =arr[i]+1;
	}
	
}



//int arraySum(int arr[], int size) { //Method 1

int arraySum(int size, int arr[size]) {
	int result=0;
	
	for(int i=0; i<7; i++) { //out of bounds access
		result = result+arr[i];
	}
	return result;
}


int main(void) {
	
	int data[]={1,2,3,4,6, 1};
	int x=1;
	
	addOneToEach(data, 5);
	
	for(int i=0; i<6; i++) {
			printf("%d\n",data[i]);
		
	}
	
	
	
	//int occur = countOccurences(data,3,x);
	
	//printf("Number of occurences of %d is %d\n",x, occur);
	
	
	//int sum = arraySum(data, 7); //function call method 1
	
	//int sum = arraySum(5,data);
	
	//printf("Sum of array elements is %d\n", sum);
	
	return 0;
	
}