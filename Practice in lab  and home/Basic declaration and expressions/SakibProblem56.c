#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Input an integer:\n");
    scanf("%d", &x);

    printf("Integer: %d\n", x);

    y = x << 2;

    printf("Left shifted value: %d\n", y);

    z = y >> 2;

    printf("Again Right shifted value: %d\n", z);

    return 0;
}