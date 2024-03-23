#include <stdio.h>

int main()
{
    int x, y;
    printf("Input 2 integers:\n");
    scanf("%d%d", &x, &y);

    if (x == y)
    {
        printf("The pair is equal.\n");
    }
    else if (x > y)
    {
        printf("The pair is in descending order.\n");
    }
    else
    {
        printf("The pair is in ascending order.\n");
    }

    return 0;
}