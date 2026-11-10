/* Lab 6 P4: Find first occurrence of char */

#include<stdio.h>

int main(){
	
	setvbuf(stdout, NULL, _IONBF, 0);
	char str[100];
	char c; //to search
	
	printf("enter the string: ");
	
	scanf("%s ", str); //no &str
	printf("enter char to search:");
	
	scanf(" %c ", &c);
	
	
	for(int i=0; str[i]!= '\0'; i++) {
		if(str[i] == c) {
			printf("Found %c at position %d\n", c, i);
			break;
		}
		
		
	}
	
	return 0;
}