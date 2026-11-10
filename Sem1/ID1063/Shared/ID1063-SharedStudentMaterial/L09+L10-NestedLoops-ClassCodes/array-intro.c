#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	int marks[5] = {78, 85, 92, 64, 88};
	int i=0;
	int j=10;
	while(i<=6) {
		printf(" marks[%d] is %d \n", i, marks[i]);
		
		i=i+1;
	}







	return 0;
	
}