#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{
    char g; // there is no short char data type in c
    g = 'D';
    printf("%c\n", g);

    /*there is no data type named long float but there is double which is actually long float
    That's  why %lf*/

    int R, C;
    float perimeter, area;
    C = PI;
    R = 5;
    perimeter = 2 * C * R;
    area = C * R * R;

    printf("%f\n%f", perimeter, area);

    int x = 100;
    printf("\n%d/n", 10 + x++);
    printf("%d\n", 10 + ++x);

    return 0;
}