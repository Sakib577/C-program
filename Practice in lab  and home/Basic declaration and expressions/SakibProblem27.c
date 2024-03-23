#include <stdio.h>

int main()
{
    int num[5], i, positives = 0, negatives = 0;

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
        if (num[i] > 0)
        {
            positives += 1;
        }
        else if (num[i] < 0)
        {
            negatives += 1;
        }
    }

    printf("Number of positive number(s): %d\n", positives);
    printf("Number of negative number(s): %d\n", negatives);

    return 0;
}