#include <stdio.h>

int main()
{
    int i, total = 0, numbers[5];

    printf("Input the first number:\n");
    scanf("%d", &numbers[0]);

    printf("Input the second number:\n");
    scanf("%d", &numbers[1]);

    printf("Input the third number:\n");
    scanf("%d", &numbers[2]);

    printf("Input the fourth number:\n");
    scanf("%d", &numbers[3]);

    printf("Input the fifth number:\n");
    scanf("%d", &numbers[4]);

    for (i = 0; i < 5; i++)
    {
        if ((numbers[i] % 2) != 0)
        {
            total += numbers[i];
        }
    }
    printf("The sum of the odd values is %d", total);
    return 0;
}
