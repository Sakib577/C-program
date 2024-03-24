#include <stdio.h>

int main()
{
    int x = 10, y = 15;
    printf("Predecrementing\n"); // Printing before decrementing
    printf("x   = %d\n", x);
    printf("x-- = %d\n", x--);
    printf("After x--,\nx   = %d\n\n", x);

    printf("Postdecrementing\n"); // Printing after decrementing
    printf("y   = %d\n", y);
    printf("--y = %d\n", --y);
    printf("After y--\nx   = %d\n", y);

    return 0;
}