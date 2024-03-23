#include <stdio.h>

int main()
{
    int x, y;
    printf("Input the value of x and y simultaneously:");
    scanf("%d%d", &x, &y);

    if (x % y == 0)
    {
        printf("%d is a multiple of %d", x, y);
    }
    else
    {
        printf("%d is not a multiple of %d", x, y);
    }

    return 0;
}