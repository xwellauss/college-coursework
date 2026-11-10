#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	
	int numrows, numcols;
	
	numrows = 3;
	numcols = 5;
	
	int i=0,j=0;
	
	while(i<numrows) 
	{
		 j=0;  // reset the column counter j	
		while(j<numcols) {
			printf("* ");
			j=j+1; //increment j
		}
		
		printf("\n"); // go to next line
		i=i+1; //increment i
	}
	
	printf(" i and j are: %d, %d \n", i, j);
	return 0;
}