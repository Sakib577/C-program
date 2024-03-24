#include <stdio.h>
#include <math.h>

int main()
{
    printf("Number Square Cube\n=========================\n");
    for (float i = 0; i <= 20; i++)
    {
        printf("%2.f %7.f %7.f\n", i, pow(i, 2), pow(i, 3));
    }

    return 0;
}