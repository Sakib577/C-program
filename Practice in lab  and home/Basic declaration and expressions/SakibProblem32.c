#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the integer which you want to devide by:\n");
    scanf("%d", &n);
    for (i = 1; i <= 100; i++)
    {
        if (i % n == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}