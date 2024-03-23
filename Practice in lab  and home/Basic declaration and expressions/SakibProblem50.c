#include <stdio.h>
#include <stdlib.h>
#define Max 6
#define AL 5
int main()
{
    float N[AL];
    int i;

    printf("Input 5 numbers:\n");

    for (i = 0; i < AL; i++)
    {
        scanf("%f", &N[i]);
    }

    for (i = 0; i < AL; i++)
    {
        if (N[i] < Max)
        {
            printf("Array number[%d] = %f\n", i, N[i]);
        }
    }

    return 0;
}