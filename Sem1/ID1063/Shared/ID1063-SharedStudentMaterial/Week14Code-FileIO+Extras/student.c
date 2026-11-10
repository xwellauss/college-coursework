#include <stdio.h>
#include "student.h"
 
void printStudent(const Student *sp)
{
    printf("%d %s %.1f\n", sp->roll,
           sp->name, sp->marks);
}
