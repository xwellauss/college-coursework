/* Lab 6 P5: palindrome */


#include<stdio.h>


int main(void) {
	
	setvbuf(stdout, NULL, _IONBF, 0);
		
	char str[100];
	int len=0;
	
	printf("Enter the string: ");
	scanf(" %s", str);


	/* find the length */
	for(int i=0; str[i]!='\0'; i++) {
		len=len+1;
	}
	
	int isPalindrome=1; //will be set to 0 if violation is found
	
	/* check palindrome */
	for(int i=0; i<len/2; i++) { //IMP: why is i<len/2? What if len is odd?
		if(str[i]!=str[len-i-1]) {
			isPalindrome=0;
			break;
		}
	}
	
	// final check
	
	if(isPalindrome==0) {
		printf("Not a palindrome");
	}
	else {
		printf("Palindrome");
	}

	return 0;

	
	
}