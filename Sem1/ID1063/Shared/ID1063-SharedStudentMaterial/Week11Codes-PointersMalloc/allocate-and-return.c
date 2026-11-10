#include <stdio.h>
#include <stdlib.h>

int* make_squares(int n) {
    /*allocate and return array */
	int *ptr = malloc(n* sizeof(int));
	
	if(ptr==NULL) return NULL; //failure check
	
	for(int i=0; i<n; i++) {
		ptr[i] = i*i;
	}
	
	return ptr; //NOT dangling pointer, since malloc allocates on heap memory
	
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

    int n;
    printf("How many squares? ");
    scanf("%d", &n);

    int *s = make_squares(n);
    
	if (s == NULL) { //failure check
        printf("Out of memory\n");
        return 1;
    }
	
    for (int i = 0; i < n; i++)
        printf("%d ", s[i]);
    printf("\n");

    free(s);                  /* caller frees what the function allocated */
    return 0;
}