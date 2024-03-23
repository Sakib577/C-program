#include <stdio.h>
#include <math.h>

int main()
{
    float x, Sin;
    printf("Enter the value of x:\n");
    scanf("%f", &x);

    if (x != 0)
    {
        Sin = sin(1 / x);
        printf("value of sin(1/x) is %.4f\n", Sin);
    }
    else
    {
        printf("The value of x should not be 0\n");
    }

    return 0;
}