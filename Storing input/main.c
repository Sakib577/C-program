#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("You're %d years old.\n",age);

    float grade;
    printf("Enter your grade:\n");
    scanf("%f", &grade);
    printf("Your grade is %.2f\n",grade);
    /* Using "%.2f" to print two decimal places.otherwise it would be %f*/


    char Schoolshrt[10];
    printf("Enter the short form of your school:\n");
    scanf("%s",Schoolshrt);
    printf("Your school is %s\n",Schoolshrt);
     /*we don't need & here*/

    getchar();
    /*getchar(); here is used to take the newline character for fgets*/

    char School[30];
    printf("Enter the name of your school:\n");
    fgets(School,30, stdin);
    printf("Your school is %s\n",School);

    char name[30];
    printf("Enter your name:\n");
    fgets(name, 30,stdin);
    printf("Your name is %s\n",name);

    double gpa;
    printf("Enter your gpa:");
    scanf("%lf",&gpa);
    printf("Your gpa is %.2lf\n",gpa);

    /* Using "%.2lf" to print two decimal places.otherwise it would be %f*/

    char Okhor;
    printf("Enter your letter:\n");
    scanf(" %c",&Okhor);
    printf("Your letter is %c \n",Okhor);

    /*if we don't put a space before %c,it won't work*/



    return 0;
}
