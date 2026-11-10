#include <stdio.h>
#include <stdlib.h>

int* make_squares(int n) {
    /*allocate and return array */
	int *ptr = malloc(n*sizeof(int)); //allocated
	
	int *temp=ptr;
	for(int i=0; i<n; i++) {
		//ptr[i] = i*i;
		*temp = i*i;
		temp= temp+1; //pointer arithmetic
		
	}
	
	return ptr; // pointer to the allocated array
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

    int n;
    printf("How many squares? ");
    scanf("%d", &n);

  
	// call function to populate array

	int *s = make_squares(n);


  
    for (int i = 0; i < n; i++)
        printf("%d ", s[i]);
    printf("\n");

    free(s);                  /* caller frees what the function allocated */
    return 0;
}