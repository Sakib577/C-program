#include <stdio.h>

int main()
{
    int num, rev = 0, rem;

    printf("Input a seven digit number:\n");
    scanf("%d", &num);
    for (num; num >= 1; num /= 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    // printf("%d", rev);

    for (rev; rev >= 1; rev /= 10)
    {
        printf("%d  ", rev % 10);
    }
}