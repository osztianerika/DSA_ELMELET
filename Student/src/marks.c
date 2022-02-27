//
// Created by erika on 2/25/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../header/marks.h"


char *getMarksType(enum MarksType type) {
    switch(type){
        case EXCELLENT:
            return "EXCELLENT";
            break;
        case INSUFFICIENT:
            return "INSUFFICIENT";
            break;
        case GOOD:
            return "GOOD";
            break;
        case SATISFACTORILY:
            return "SATISFACTORILY";
            break;
        case BAD:
            return "BAD";
            break;
        default:
            return "UNDEFINED";
    }
}

void createStudent(STUDENT **student) {
    *student = (STUDENT *) malloc(sizeof(STUDENT));
    if (!(*student)) {
        printf("Unsuccesfull helyfoglalas!");

    }
}

void setStudent(STUDENT *student, char *name,float lab_mark, float t_test, float examen_t_test, float examen_practice) {

    strcpy(student->name, name);
    student->t_test = t_test;
    student->examen_t_test = examen_t_test;
    student->examen_practice = examen_practice;
    student->lab_mark = lab_mark;
    student->final_mark =
    ((student->t_test * k1 + student->examen_t_test * k2) * k3 + student->examen_practice * k3) * k4 +
    student->lab_mark * k5;
    if (student->final_mark == 10)
        student->result = EXCELLENT;
    if (student->final_mark < 10 && student->final_mark >= 8)
        student->result = GOOD;
    if (student->final_mark < 8 && student->final_mark >= 6)
        student->result = SATISFACTORILY;
    if (student->final_mark < 6 && student->final_mark >= 5)
        student->result = BAD;
    if (student->final_mark < 4)
        student->result = INSUFFICIENT;
    }

void printStudent(STUDENT *student) {
    if (student) {
        printf("Student: %s\n", student->name);

        printf("\t\tLabor: %.2f\n", student->lab_mark);
        printf("\t\tTeory test: %.2f\n", student->t_test);
        printf("\t\tExamen teory: %.2f\n", student->examen_t_test);
        printf("\t\tExamen practice: %.2f\n", student->examen_practice);
        printf("\t\tMarks type: %s\n", getMarksType(student->result));
        printf("\tFinaly mark: %.2f\n", student->final_mark);
    } else {
        printf("is null");
    }
}



