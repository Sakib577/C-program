#include <stdio.h>
#include <math.h>

int main()
{
    double x1 = 25;
    double x2 = 35;
    double y1 = 15, y2 = 10;

    double result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("The distance between two points is %f.", result);
    return 0;
}