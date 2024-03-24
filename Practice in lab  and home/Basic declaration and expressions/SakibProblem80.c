#include <stdio.h>

int main()
{
    int n;
    printf("Enter square size between 1 to 10:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("#  ");
        }

        printf("\n");
    }

    return 0;
}