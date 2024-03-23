#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2;
    printf("input a:");
    scanf("%lf", &a);

    printf("input b:");
    scanf("%lf", &b);

    printf("input c:");
    scanf("%lf", &c);

    int discriminant, rtdis;
    discriminant = pow(b, 2) - (4 * a * c);
    rtdis = sqrt(discriminant);

    if (discriminant > 0 && a != 0)
    {
        x1 = (-b + rtdis) / (2 * a);
        x2 = (-b - rtdis) / (2 * a);

        printf("Root1 = %.3lf\nRoot2 = %.3lf", x1, x2);
    }
    else
    {
        printf("Impossible to find a root.");
    }

    return 0;
}