#include <stdio.h>

int main()
{
    int x[7], p;

    printf("Input the first member of the array:\n");
    scanf("%d", &p);
    for (int i = 0; i < 5; i++)
    {
        x[i] = p;
        p = 3 * p;
    }

    printf("Output:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("n[%d]=%d\n", i, x[i]);
    }

    return 0;
}