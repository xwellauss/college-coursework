

#include<stdio.h>

typedef struct {
    int roll;
    char name[20];
    double marks;
} Student;


void printStudent(const Student *sp)
{
	//sp->marks=100.0; //compiler error
    printf("%4d  %-10s %6.1f\n", sp->roll, sp->name, sp->marks);
}


int main(void) {
	/*
	FILE* out = fopen("testfile.txt", "a");
	
	if(out==NULL) {
		printf("error opening file\n");
		return 1;
	}
	
	fprintf(out, "This is another test file\n");
	fprintf(out, "Line 2\n");
	
	fclose(out);
	*/
	
	
	Student s;
	
	FILE* fp = fopen("class.txt", "r");
	
	if(fp==NULL) {
		
		printf("Error opening file\n");
		return 1;
	}
	
	int count=0;
	/*
	while(fscanf(fp, "%d %s %lf",&s.roll, s.name, &s.marks)==3) {
		
		printStudent(&s);
		count++;
	}
	*/
	
	char line[100];
	
	while(fgets(line, 99, fp)!=NULL) {
		
		/* read in the line using fgets */
		
		printf("Read the line:  %s", line);
		
		/* process this using sscanf */
		if(sscanf(line, "%d %s %f", &s.roll, s.name, &s.marks)==3) {
			printf("Found valid student record: ");
			printStudent(&s);
			
		}
		
		else {
			printf("Invalid line, skipping\n");
		}
		count++;
	}
	
	printf("Read and printed %d students.\n", count);
	
	fclose(fp);
	
	return 0;
}