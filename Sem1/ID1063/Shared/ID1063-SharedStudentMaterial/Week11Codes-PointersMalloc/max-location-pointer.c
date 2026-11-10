#include <stdio.h>

int* find_max(int a[], int n) {
    int *best = &a[0];
	//fill in code here
	
	for(int i=0; i<n; i++) {
		if(a[i]> *best) {
			best=&a[i];
		}
	}
   return best;              /* points into the caller's array */
}

int main(void) {
    int marks[] = {72, 91, 58, 85, 66};
    int *p = find_max(marks, 5);

	/*compute location and max using p */
	int max_index=0;
	int max;
	max= *p;
	// max_index=(int)(p-marks); //short method: uses pointer arithmetic
	
	//longer method to find max_index
	//increment a temp pointer till it reaches p
	int* tempptr= &marks[0];
	while(tempptr != p) {
		tempptr=tempptr+1; //shifts tempptr by one int step
		max_index++;
	}

	/* print the results */
	
    printf("Max = %d at index %d\n", max, max_index);
    
	*p = 100;                 /* modifies marks[1] directly */
    printf("marks[1] is now %d\n", marks[1]);
    return 0;
}