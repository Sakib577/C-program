#include <stdio.h>

int main()
{
    int i, sum, num[5], positives = 0;

    printf("Input first number:\n");
    scanf("%d", &num[0]);
    printf("Input second number:\n");
    scanf("%d", &num[1]);
    printf("Input third number:\n");
    scanf("%d", &num[2]);
    printf("Input fourth number:\n");
    scanf("%d", &num[3]);
    printf("Input fifth  number:\n");
    scanf("%d", &num[4]);

    for (i = 0; i < 5; i++)
    {
        if (num[i] % 2 != 0)
        {
            sum += num[i];
        }
    }

    printf("Sum of odd(s) = %d\n", sum);
}