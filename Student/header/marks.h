//
// Created by erika on 2/25/2022.
//

#ifndef STUDENT_MARKS_H
#define STUDENT_MARKS_H
#define k1 0.3
#define k2 0.7
#define k3 0.5
#define k4 0.6
#define k5 0.4

enum MarksType{
    Excellent,
    GOOD,
    Satisfactorily,
    Bad,
    Insufficient
};

typedef struct {
    char name[20];
    enum MarksType result;
    float  lab_mark;
    float t_test;
    float examen_t_test;
    float examen_practice;
    float final_mark;
}STUDENT;

char* getMarksType(enum MarksType type);

void createStudent(STUDENT** student);

void setStudent(STUDENT *student, char* name,float lab_mark, float t_test, float examen_t_test, float examen_practice);

void print_Student(STUDENT *student);
#endif //STUDENT_MARKS_H
