#include <stdio.h>

int main()
{
    int i, temp;
    int sum = 0;
    printf("Enter the numbers:\n");
    for (i = 0;; i++)
    {
        scanf("%d", &temp);
        if (temp == 888)
        {
            break;
        }
        sum += temp;
    }
    printf("Average = %.2f", (float)sum / (float)i);
    return 0;
}