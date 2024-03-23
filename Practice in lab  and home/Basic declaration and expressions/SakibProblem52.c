#include <stdio.h>
int main()
{
    int e, i, Min, position;

    printf("Input length of the array:\n");
    scanf("%d", &e);

    int v[e];

    printf("Input the array elements:\n");
    for (i = 0; i < e; i++)
    {
        scanf("%d", &v[i]);
    }

    Min = v[0];
    position = 0;

    for (i = 0; i < e; i++)
    {
        if (v[i] < Min)
        {
            Min = v[i];
            position = i;
        }
    }

    printf("Smallest Value: %d\n", Min);
    printf("Position of the element: %d\n", position);

    return 0;
}