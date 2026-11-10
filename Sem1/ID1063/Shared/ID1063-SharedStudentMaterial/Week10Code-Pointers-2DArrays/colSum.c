#include<stdio.h>

//matrix multiplication (all matrices are 3x3)

void matrixMult(int A[][3], int B[][3], int C[][3], int numrowsA, int numrowsB, int numrowsC) {
	
	//3-way nested loop to populate entries of C:
	
	//fill in this function and call it from the main program
	
}



// returns column sum at colindex in arr
int columnSum(int arr[][3], int numrows, int colindex) {
	int total=0;
	
	for(int i=0; i<numrows; i++) {
		total = total+ arr[i][colindex];
	}
	return total;

}	


int main(void) {
	// declaration
	int data[3][3]={ {1,2,3},
					{4,5,6},
					{1,3,5}};
					
	
	for(int j=0; j<3; j++) {
		//prints column sums for each column
		int sum = columnSum(data,3, j);
		printf("The column sum at column %d is %d\n", j, sum);
		
	}
	
	
	/*
	for(int i=0; i<3; i++) {
		
		for(int j=0; j<3; j++) {
			
			printf("%4d", data[i][j]);
		}
		printf("\n");
	}
	*/
	
	
	
	
	return 0;
}