#include <stdio.h>

int main()
{
    int x[7];

    printf("Input the 5 members of the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] < 0)
        {
            x[i] = 100;
        }
    }

    int d = 1;
    printf("Output:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("n[%d]=%d\n", i, x[i]);
    }
    return 0;
}