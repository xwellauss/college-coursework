#include<stdio.h>

long calls = 0;                 /* global counter used in Part B */

/* Print two spaces per level of recursion, so the output shows the depth */
void indent(int depth)
{
    for (int i = 0; i < depth; i++)
        printf("  ");
}

/* ------ Prints the trace by indenting
Larger indent = greater depth ---------- */
int fibTrace(int n, int depth)
{
    indent(depth);
    printf("fib(%d)\n", n);

    if (n <= 1)                                 /* base cases: fib(0)=0, fib(1)=1 */
        return n;
    return fibTrace(n - 1, depth + 1)           /* first branch  */
         + fibTrace(n - 2, depth + 1);          /* second branch */
}


/* actual fibonacci function that returns the nth fib number */
int fib(int n) {
	
	if(n<=1) {
		return n;
	}
	return fib(n-1) + fib(n-2);

}
int main(void)
{
    int r=4;
	printf("The %d-th fibonacci number is %d \n",r, fib(r));


		int f = fibTrace(4, 0);
    printf("fib(4) = %d\n\n", f);

    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//printf("Part B\n");
    //int ns[] = {10, 20, 30};    /* add 40 to feel the wait (about 331 million calls) */
    //int count = sizeof ns / sizeof ns[0];
    //for (int i = 0; i < count; i++) {
      //  calls = 0;
        //int value = fib(ns[i]);
        //printf("fib(%d) = %d  needed %ld calls\n", ns[i], value, calls);
    //}

    //printf("\nPart C\n");
    //char s[4];                  /* 3 characters + '\0' */
    //binary(s, 0, 3);
	
	/*/
	
	
    return 0;
}