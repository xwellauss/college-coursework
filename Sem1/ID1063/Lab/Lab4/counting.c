/********************************
*Filename: counting.c
*Description: This program illustrates the while loop with a simple example - printing the numbers from 1 to 10.
*Author: Instructor, ID1063
*********************************/

#include<stdio.h>

int main(void)
{
    int count = 10;
    while (count>0) 
    {
          printf("\n %d",count);
		  count--;
		  // Replacing the above with count=count+2; prints the odd numbers.
    }
    return 0;
}

/*
Trace of variables: count
count:1
count:2
...
count:10
count:11


*/
