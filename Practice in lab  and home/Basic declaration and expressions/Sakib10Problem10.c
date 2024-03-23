// product
#include <stdio.h>

int main()
{
    float a;
    float b;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);

    float c = a * b;

    printf("Result:%.2f", c);
    return 0;
}