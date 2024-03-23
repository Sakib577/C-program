#include <stdio.h>

int main()
{
    int a = 25, b = 35, c = 15;
    int result;

    if (a >= b && a >= c)
    {
        result = a;
    }
    else if (b >= a && b >= c)
    {
        result = b;
    }
    else

        result = c;

    printf("The maximum number of the three is %d.", result);

    return 0;
}