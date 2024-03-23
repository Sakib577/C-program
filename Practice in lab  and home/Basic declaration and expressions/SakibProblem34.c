#include <stdio.h>

int main()
{
    int x, y, max, min, sum = 0;
    printf("Enter 2 integers:\n");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        max = x;
        min = y;
    }
    else if (y > x)
    {
        max = y;
        min = x;
    }
    else
    {
        printf("Integers are same.\n");
    }
    for (min; min <= max; min++)
    {
        if (min % 2 != 0)
        {
            sum += min;
        }
    }
    printf("Sum of consecutive odd numbers between %d and %d is: %d\n", x, y, sum);

    return 0;
}