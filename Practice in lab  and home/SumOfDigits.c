#include <stdio.h>

int main()
{
    int number, sum = 0, rem;
    printf("Enter an integer:\n");
    scanf("%d", &number);

    for (; number > 0; number /= 10)
    {
        rem = number % 10;
        sum += rem;
    }
    printf("Sum=%d\n", sum);
    return 0;
}