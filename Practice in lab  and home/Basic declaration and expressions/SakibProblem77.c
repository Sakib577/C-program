#include <stdio.h>

int main()
{
    int principle, days;
    float rate, interest;
    printf("Enter the value of principle, rate and days in sequence:\n");
    scanf("%d%f%d", &principle, &rate, &days);

    int year = days / 365;

    interest = principle * rate * year;
    printf("$%.f", interest);
    return 0;
}