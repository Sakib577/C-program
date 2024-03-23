#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=30;
    int * pAge = &age;
    double gpa =3.5;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade;

    printf("age's memory adress: %p\n",&age);
    printf("gpa's memory adress: %p\n",&gpa);
    printf("grade's memory adress: %p\n",&grade);
    return 0;
}