#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int roll;
    char name[20];
    double marks;
} Student;


void printStudent(const Student *sp)
{
	//sp->marks=100.0; //compiler error as it is const
    printf("%4d  %-10s %6.1f\n", sp->roll, sp->name, sp->marks);
}


void addBonus(Student st, double bonus) {
	
	st.marks = st.marks+10; 
	//st->marks = st->marks + bonus;
	
}

int main(void) {
	
	//int n;
    //printf("Enter n, then one line per student: roll name marks\n");
    //scanf("%d", &n);
	
	
	Student asha={42, "Asha", 80.0};
	
	Student *ptr = &asha;
	
	printf("Marks are: %f\n", ptr->marks);
	
	addBonus(asha, 10);
	
	printStudent(ptr);
	//printf("New marks are: %f\n", ptr->marks);
	
	  /* Create n records on the heap */
	  

	  
	  
	  
	  return 0;
}