#include <stdio.h>

int main()
{
    int num, rem, threes = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    for (num; num >= 1; num /= 10)
    {
        rem = num % 10;
        if (rem == 3)
        {
            threes++;
        }
    }

    printf("The number of threes in the said number is %d", threes);

    return 0;
}