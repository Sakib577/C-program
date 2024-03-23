#include <stdio.h>

int main()
{
    int x, y, max, min, nondiv = 17, sum = 0;

    printf("Input 2 integers:\n");
    scanf("%d%d", &x, &y);

    if (x == y && x % nondiv != 0)
    {
        sum = x;
    }
    else if (x > y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }

    for (min; min <= max; min++)
    {
        if (min % nondiv != 0)
        {
            sum = sum + min;
        }
    }
    printf("Sum of all numbers not divisible by %d between x and y is: %d\n", nondiv, sum);

    return 0;
}