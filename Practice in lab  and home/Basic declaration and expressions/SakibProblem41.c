#include <stdio.h>

int main()
{
    int x, y = 1;
    printf("Enter number of lines: ");
    scanf("%d", &x);
    printf("Output:\n");

    for (int i = 1; i <= x; i++)
    {
        printf("%d %d %d\n", y, y + 1, y + 2);
        y += 3;
    }

    return 0;
}