#include <stdio.h>
#include <stdlib.h>

/*Struct is a data structure which is used to
store all type of data in one single data structure.*/

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
    double grade;
};

int main()

{
    struct Student student1;

        /*We can't use strings directly
        because strings are actually arreys not variable.
        So we have to use the (strcopy) string copy fynction */
        strcopy(student1.name="Abdullah As Sakib");
        strcopy(student1.major="CS");
        student1.age=22;
        student1.gpa=3.2;
        student1.grade='B';

        printf("Name:%s\n",student1.name);
        printf("Major:%s\n",student1.major);
        printf("Age:%f\n",student1.age);
        printf("Gpa:%f\n",student1.gpa);
        printf("Grade:%c\n",student1.grade);
     
    return 0;
}