#include <stdio.h>

int main()
{
    float n, sum = 0;

    printf("Enter  the value of n:\n");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1 / (float)i;
    }

    printf("Sum=%f", sum);
    return 0;
}