#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int count=1000;
	int *ptr = malloc(count * sizeof(int));
	//check that allocation succeeds
	if(ptr==NULL) { //allocation failed, inform user and quit
		printf("Allocation failed \n");
		return 1;
	}
	
	for(int i=0; i<count; i++) {
		//ptr[i]= i; //initialization
		*(ptr+i) = i;	
	}
	
	//*ptr=4;
	
	printf("Value in location 10 is: %d\n", ptr[10]);
	printf("Location of ptr is %p\n:", ptr);
	
	free(ptr);
	free(ptr); //BUG:freeing twice may cause error on some systems
	ptr = NULL;
	//printf("Value in ptr is: %d\n", *ptr); //will lead to a segfault
	
	
	printf("Location of ptr after NULL is %p\n", ptr);
	
	return 0;


}