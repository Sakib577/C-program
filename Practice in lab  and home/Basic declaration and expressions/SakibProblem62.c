#include <stdio.h>

int main()
{
    int n, sum = 0, rem;

    printf("Enter an integer less than 500:\n");
    scanf("%d", &n);

    if (n < 500)
    {
        for (n; n >= 1; n /= 10)
        {
            rem = n % 10;
            sum += rem;
        }

        printf("Sum = %d\n", sum);
    }
    else
    {
        printf("Entered value is incorrect.\n");
    }

    return 0;
}