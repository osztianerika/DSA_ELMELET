#include <stdio.h>
#include "marks.h"
int main() {
    STUDENT *student;
    createStudent(&student);
    setStudent(student,"Szikla Szilard",6.7,7.8,6,8);
    printStudent(student);
    return 0;
}
