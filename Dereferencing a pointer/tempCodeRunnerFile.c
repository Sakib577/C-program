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

    printf("%d\n",*pAge);
    /*This is the sturcture of derefferencing the *pAge pointer variable.
    It just shows the value of the variable which was stored in the memory adress.*/
    printf("%f\n",*pGpa);
    printf("%c\n",*pGrade);

    printf("%d\n", *&age);
    /*This is also a sturcture of derefferencing the *pAge pointer variable.*/

    printf("%p\n", &*&age);
    /*If we dereference this again,we get the memory adress back*/

    printf("%d\n", *&*&age);
    /*If we dereference this again,we get the value back again*/

    return 0;
}