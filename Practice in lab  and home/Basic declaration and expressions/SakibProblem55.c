#include <stdio.h>

int main()
{
    int x, y;
    printf("Input x and y simultaneously:\n");
    scanf("%d%d", &x, &y);

    printf("Before swapping the value of x & y: %d %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Before swapping the value of x & y: %d %d\n", x, y);
    return 0;
}