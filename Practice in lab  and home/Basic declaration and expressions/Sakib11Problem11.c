// C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
#include <stdio.h>

int main()
{
    double w1, c1, w2, c2, result;

    printf("Enter weight of the first item:");
    scanf("%lf", &w1);

    printf("Enter number of the first item:");
    scanf("%lf", &c1);

    printf("Enter weight of the second item:");
    scanf("%lf", &w2);

    printf("Enter number of the first item:");
    scanf("%lf", &c2);

    result = (w1 * c1 + w2 * c2) / (c1 + c2);
    printf("Result:%.2f", result);
    return 0;
}