#include <stdio.h>

int main()
{
    int Nums[5], max;

    printf("Input 5 Integers:\n");
    max = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Nums[i]);

        if (max < Nums[i])
        {
            max = Nums[i];
        }
    }

    printf("Max: %d", max);
    return 0;
}