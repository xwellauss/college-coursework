#include <stdio.h>

// Function definition: Defines how to print a border line
void printBorder() {
   for (int i = 0; i < 30; i++) {
        printf("#");
    }
   printf("\n"); 
}

int main() {
    // Reuse the function instead of rewriting the loop
	printBorder();
    printf("   ATMOSPHERIC DATA LOG\n");
	printBorder();
	

    printf("\nStatus: All sensors operational.\n\n");


	printBorder();
    printf("   END OF REPORT\n");
	printBorder();

    return 0;
}