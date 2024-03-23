#include <stdio.h>

int main()
{
    int temp, max, min;

    printf("Input 2 integers:\n");
    scanf("%d%d", &min, &max);

    if (min > max)
    {
        temp = max;
        max = min;
        min = temp;
    }

    printf("Output:\n");
    for (min += 1; min < max; min++)
    {
        if (min % 7 == 2 || min % 7 == 3)
        {
            printf("%d\n", min);
        }
    }

    return 0;
}