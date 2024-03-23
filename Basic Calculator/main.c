#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    double num2;

    printf("Enter the first number:\n");
    scanf("%f",&num1);

    printf("Enter the second number:\n");
    scanf("%lf",&num2);

    printf("Answer=%f",num1+num2);

    return 0;
}
