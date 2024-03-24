#include <stdio.h>

int main()
{
    int x;
    printf("x       x+2     x+4     x+6\n");
    printf("-------------------------------\n");
    for (int i = 1; i <= 13; i += 3)
    {
        x = i;
        printf("%2d       %2d      %2d      %2d\n", x, x + 2, x + 4, x + 6);
    }

    return 0;
}