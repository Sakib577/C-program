#include <stdio.h>

int main()
{
    double Num, MAX, MIN, Avg, i, sum = 0;

    printf("Input positive integer numbers simultaneously:\n");
    printf("Enter 0 to stop\n");
    scanf("%lf", &Num);

    MAX = Num;
    MIN = Num;

    for (i = 0;;)
    {
        sum += Num;
        i++;
        MAX = Num > MAX ? Num : MAX;
        MIN = Num < MIN ? Num : MIN;

        printf("Input next positive number integer:\n");
        scanf("%lf", &Num);
        if (Num <= 0)
        {
            break;
        }
    }

    Avg = sum / i;
    printf("Max: %.2lf\nMin: %.2lf\n", MAX, MIN);
    printf("Average: %.2lf", Avg);

    return 0;
}