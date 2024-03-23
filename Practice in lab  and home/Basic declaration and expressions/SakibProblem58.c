#include <stdio.h>

int main()
{
    double Num[4], MAX, positionMAX, positionMIN, MIN, Diff;

    printf("Input 4 numbers simultaneously:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf", &Num[i]);
    }

    MAX = Num[0];
    positionMAX = 0;

    for (int i = 0; i < 4; i++)
    {
        if (Num[i] > MAX)
        {
            MAX = Num[i];
            positionMAX = i;
        }
    }

    MIN = Num[0];
    positionMIN = 0;
    for (int i = 0; i < 4; i++)
    {
        if (Num[i] < MIN)
        {
            MIN = Num[i];
            positionMIN = i;
        }
    }

    Diff = MAX - MIN;
    printf("Max: %.2lf\npositionMAX:%.0lf\nMin: %.2lf\npositionMIN:%.0lf\n", MAX, positionMAX, MIN, positionMIN);
    printf("Difference: %.2lf", Diff);

    return 0;
}