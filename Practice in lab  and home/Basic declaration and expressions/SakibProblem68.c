#include <stdio.h>
#include <math.h>

int main()
{
    long int p;
    int n;
    double q;

    printf("\n=======================================");
    printf("\n n    2 to power n      2 to power -n  ");
    printf("\n=======================================");

    for (n = 0; n <= 10; n++)
    {
        p = pow(2, n);
        q = pow(2, -n);
        printf("\n%2d   %8d     %20.12lf", n, p, q);
    }

    printf("\n======================================");

    return 0;
}