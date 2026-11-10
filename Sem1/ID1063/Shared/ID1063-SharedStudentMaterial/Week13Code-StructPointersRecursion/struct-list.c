

#include<stdio.h>

typedef struct Person {
	
	char name[20];
    struct Person *parent;
	
} Person;


void printancestory(Person *p){
	
	while(p!=NULL) {
		printf("%s \n", p->name);
		p=p->parent;
	}
}

int main(void) {
	
	Person lakshmi = {"Lakshmi", NULL};
	Person meena   = {"Meena", &lakshmi};
	Person ravi    = {"Ravi", &meena};

	Person *p = &meena;
	printancestory(p);
	
	
	return 0;
}