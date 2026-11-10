/* LAB 5 Problem 3 *: Star Rectangle*/


#include<stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	
	
	int m=0, n=0;
	scanf("%d %d", &m, &n); //assume positive integers
	
	for(int i=0; i<m; i++) {
		
		for(int j=0; j<n; j++) {
		
			if(i==0 || j==0 || i==m-1 || j== n-1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;

}