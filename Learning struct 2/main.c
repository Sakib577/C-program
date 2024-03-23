#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Struct is a data structure which is used to
store all type of data in one single data structure.*/

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
    char grade;
};

int main()

{
    struct Student student1;

    /*We can't use strings directly
    because strings are actually arreys not variable.
    So we have to use the (strcopy) string copy fynction */

    printf("Enter name for roll 1:");
    fgets(student1.name, 50, stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';
    // Remove newline character using strcspn function
    // We'll learn more about 'strcspn' later

    printf("Enter major for roll 1:");
    fgets(student1.major, 50, stdin);
    student1.major[strcspn(student1.major, "\n")] = '\0';

    printf("Enter age for roll 1:");
    scanf("%d", &student1.age);

    printf("Enter your gpa:");
    scanf("%lf", &student1.gpa);

    if (student1.gpa >= 4)
    {
        student1.grade = 'A';
    }
    else if (student1.gpa >= 3)
    {
                student1.grade = 'B';
    }
    else if (student1.gpa >= 2)
    {
        student1.grade = 'C';
    }
    else if (student1.gpa >= 1)
    {
        student1.grade = 'D';
    }
    else if (student1.gpa < 1 || student1.gpa == 0) /*We have to specify both sides of condition*/
    {
        student1.grade = 'F';
    }

    else
    {
        printf("Invalid gpa");

        return 1;
    }

    printf("\nName:%s\n", student1.name);
    printf("Major:%s\n", student1.major);
    printf("Age:%d\n", student1.age);
    printf("Gpa:%.2f\n", student1.gpa);

    switch (student1.grade)
    {
    case 'A':
        printf("Roll 1's grade is A\nHe/She did awsome.");
        break;

    case 'B':
        printf("Roll 1's grade is B\nHe/She did great.");
        break;

    case 'C':
        printf("Roll 1's grade is C\nHe/She did poorly.");
        break;

    case 'D':
        printf("Roll 1's grade is D\nHe/She did very bad.");
        break;

    case 'F':
        printf("Roll 1's grade is F\nHe/She is failed to get promotion to the next class.");
        break;

    default:
        printf("Invalid grade.");
        break;

        return 0;
    }
}