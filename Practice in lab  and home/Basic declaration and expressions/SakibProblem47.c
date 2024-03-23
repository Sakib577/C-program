#include <stdio.h>

int main()
{
    int x, i;

    printf("Enter an integer:\n");
    scanf("%d", &x);

    printf("All the devisor of %d:\n", x);

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}