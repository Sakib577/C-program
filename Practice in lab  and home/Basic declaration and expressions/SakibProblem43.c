#include <stdio.h>

int main()
{
    int p, q, x=1;
    printf("Enter the number of lines and number of characters in a line simultaneously\n");
    scanf("%d%d", &p, &q);

    printf("Output:\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }

    return 0;
}