#include <stdio.h>

int main()
{
    int num, rev = 0, rem;

    printf("Input an integer:\n");
    scanf("%d", &num);
    printf("Original: %d\n", num);

    for (num; num >= 1; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }

    printf("Reverse: %d", rev);

    return 0;
}