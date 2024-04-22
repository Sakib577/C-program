#include <stdio.h>
#include <string.h>

int main()
{
    int mark;
    char grade[2];

    printf("Enter your mark:\n");
    scanf("%d", &mark);

    switch (mark)
    {
    case 80 ... 100:
        strcpy(grade, "A+");
        break;
    case 70 ... 79:
        strcpy(grade, "A");
        break;
    case 60 ... 69:
        strcpy(grade, "B");
        break;
    case 50 ... 59:
        strcpy(grade, "C");
        break;
    case 45 ... 49:
        strcpy(grade, "D");
        break;
    case 0 ... 44:
        strcpy(grade, "F");
        break;

    }

    printf("Your grade is %s\n", grade);
    
    return 0;
}