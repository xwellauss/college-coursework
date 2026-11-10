#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    double marks;
};

int main(void)
{
    struct Student st1={1,"abc", 60.0};
	struct Student st2;
	
	printf("Enter second students roll num, name and marks:\n");
	scanf("%d", &st2.roll);
	scanf(" %s",st2.name);
	scanf("%lf", &st2.marks);	
	
	
	printf(" Student 1 details\n: %d\n, %s\n, %f\n", st1.roll, st1.name,st1.marks);


	st2.marks=100;

	printf(" Student 2 details\n: %d\n, %s\n, %f\n", st2.roll, st2.name,st2.marks);




    return 0;
}