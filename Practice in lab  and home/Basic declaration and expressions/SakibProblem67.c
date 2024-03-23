#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float x, y;

    printf("Input the values of x and n:\n");
    scanf("%f%d", &x, &n);

    y = pow(x, n);

    printf("x=%f; n=%d; \nx to power n=%f", x, n, y);

    return 0;
}