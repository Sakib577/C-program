#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Non-negative even");
    }
    else if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("Positive even.");
        }
        else
        {
            printf("Positive odd.");
        }
    }
    else if (num < 0)
    {
        if (num % 2 == 0)
        {
            printf("Negative even.");
        }
        else
        {
            printf("Negative odd.");
        }
    }

    return 0;
}