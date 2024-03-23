#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter 2 integers:\n");
    scanf("%d%d", &x, &y);

    if (y != 0)
    {
        float result = (float)x / y;
        printf("Result of devision: %f\n", result);
    }
    else
    {
        printf("Division not possioble.\n");
    }

    return 0;
}