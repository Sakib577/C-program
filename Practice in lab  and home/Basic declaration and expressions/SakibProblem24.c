#include <stdio.h>

int main()
{
    int x, y;

    printf("Input the first and second number one by one:\n");
    scanf("%d%d", &x, &y);

    if ((x % y == 0) || (y % x == 0))
    {
        printf("Multiplied.");
    }
    else
    {
        printf("Not multiplied.");
    }
    return 0;
}
