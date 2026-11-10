#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);


	int a, b, c; //rock sample dimensions
	double contamination; //single cell contamination
	
	double total_cont=0; 
	
	printf("Enter dimensions a,b,c :");
	scanf("%d %d %d",&a, &b, &c);
	
	int i=0,j=0,k=0; //coordinates of cell currently probed
	
	while(i<a) {
		j=0;
		while(j<b) {
			k=0;
			while(k<c) {
				printf("Enter contamination in cell (%d, %d, %d) :", i,j,k);
				scanf(" %lf",&contamination);
				total_cont = total_cont+contamination;
				k=k+1;	
			}
			j=j+1;
			
		}
		i=i+1;
	}
	
	double average_cont = total_cont/(a*b*c);

	printf("Average sample contamination is: %f", average_cont); 


	return 0;
	
}