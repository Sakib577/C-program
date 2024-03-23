#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;

    printf("Enter the value of n which must be less than 100:\n");
    scanf("%d", &n);

    if (n < 100)
    {
        for (int i = 1, j = 1; j <= n; j += i, i++)
        {
            sum += pow(j, 4);
        }
    }
    else
    {
        printf("Wrong input.\n");
    }

    printf("Sum of the series is %f\n", sum);
    return 0;
}