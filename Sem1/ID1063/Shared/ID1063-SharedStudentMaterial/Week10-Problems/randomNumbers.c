#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));   // seed once, near the start of the program
    
    double x;
	int y,z;
	int n,a,b;
	
	/* pseudorandom real number in [0, 1] */
	/* RAND_MAX is a large predefined integer */
	/* rand() outputs a pseudorandom integer in [0,RAND_MAX] */
	x=(double) rand() / RAND_MAX;

    /* Example to generate pseudorandom natural number in [1, n] */
    n = 10;
    y = 1 + rand() % n;

    /* Generate a pseudorandom integer z in [a, b] */
	a = -100;
	b = 50;
	// Uncomment and write a suitable RHS for the next line
	// z = ;
    
    printf("%f %d %d\n", x, y, z);
}