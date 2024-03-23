#include <stdio.h>

int main()
{
    int n;

    printf("Input an integer: \n");
    scanf("%d", &n);

    printf("Original value: %d\n", n);

    if (n < 0)
    {
        n = -n;
    }

    printf("Absolute value: %d\n", n);
    return 0;
}