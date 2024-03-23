#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, p;
    printf("Enter the number upto which you want to count:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, p = pow(i, 2));
        }
    }

    return 0;
}