#ifndef STUDENT_H
#define STUDENT_H
 
typedef struct {
    int roll;
    char name[20];
    double marks;
} Student;
 
void printStudent(const Student *sp);
 
#endif
