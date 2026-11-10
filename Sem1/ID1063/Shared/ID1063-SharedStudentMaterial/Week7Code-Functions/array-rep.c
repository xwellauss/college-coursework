/* Lab 5 problem 6*/

#include<stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	
	int n;
	printf("Enter n :");
	scanf("%d", &n);
	
	int a[n]; //array 
	
	/*takeinput*/
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	/* check for repetition */
	
	int x; //number that we will search for
	int f, l; //positions of repetition, if repeat is found
	int isRepeated = 0;
	
	for(int i=0; i<n; i++) {
		x = a[i]; //will search for x in remaining array
		
		for(int j=0; j<n; j++) {
			if(a[j] ==x && j!=i ) {
				f=i; //first index
				l = j; //repeated index of x
				isRepeated=1; 
				break;
			}
			
		}
		if (isRepeated==1)  { 
			break;
		}
		
	}
	
	if(isRepeated==1) {
	 printf("%d is repeated at locations %d, %d \n", x, f, l);
	}
	else{ 
		printf("No repetitions found");
	}
	
	return 0;
}
	
