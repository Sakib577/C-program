#include <stdio.h>
#define INCH_TO_CM 2.54
int main()
{
    float inch, cm;

    printf("Input distance in cm:\n");
    scanf("%f", &cm);

    inch = cm / INCH_TO_CM;
    printf("Distance of %.2f cms = %.2f Inches.\n", cm, inch);
    return 0;
}