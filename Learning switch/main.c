#include<stdio.h>
#include<stdlib.h>

int main(){

    char grade;
    double gpa;

    printf("Enter your gpa:");
    scanf("%lf", &gpa);

    /*
    switch (gpa)
    {
    case '>=4':
        grade = 'A';
        break;
    case '>=3':
        grade = 'B';
        break;
    case '>=2':
        grade = 'C';
        break;
    case '>=1':
        grade = 'D';
        break;
    case '<1 || =0':
        grade = 'F';
        break;

    default:
        printf("Invalid gpa.");
        break;
    }
    */
    /*in c's switch function we can't use numerical ranges.
    we can only use constant values or character constants.
    so we have to make do this using if else statements*/

    // that's why switch case is mostly used when we deal with constants.

    if (gpa >=4)
    {
        grade= 'A';
    }
    else if (gpa >=3)
    {
        grade= 'B';
    }
    else if (gpa >=2)
    {
        grade= 'C';
    }
    else if (gpa >=1)
    {
        grade= 'D';
    }
    else if (gpa <1 || gpa ==0) /*We have to specify both sides of condition*/
    {
        grade= 'F';
    }
    
    else{printf("Invalid gpa");
    return 1;}

    switch (grade)
    {
    case 'A':
        printf("Your grade is A\nYou did awsome.");
        break;
    
    case 'B':
        printf("Your grade is B\nYou did great.");
        break;
    
    case 'C':
        printf("Your grade is C\nYou did poorly.");
        break;
    
    case 'D':
        printf("Your grade is D\nYou did very bad.");
        break;

    case 'F':
        printf("Your grade is F\nYou have failed to get promotion to the next class.");
        break;

    default:
    printf("Invalid grade.");
        break;
    }
    /*default is like else and switch is like if*/

    return 0;
}