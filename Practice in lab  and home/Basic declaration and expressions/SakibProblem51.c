#include <stdio.h>
#define ArL 6
int main()
{
    int Array[ArL], i, temp;

    printf("Input 6 numbers:\n");

    for (i = 0; i < ArL; i++)
    {
        scanf("%d", &Array[i]);
    }

    for (i = 0; i < ArL; i++)
    {
        if (i < (ArL / 2))
        {
            temp = Array[i];
            Array[i] = Array[ArL - (i + 1)];
            Array[ArL - (i + 1)] = temp;
        }
    }
    for (i = 0; i < ArL; i++)
    {
        printf("Array[%d] = %d\n", i, Array[i]);
    }

    return 0;
}