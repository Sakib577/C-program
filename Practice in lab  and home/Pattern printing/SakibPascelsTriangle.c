#include <stdio.h>

int main()
{
    int coef, row;

printf("Enter the number of row:");
    scanf("%d", &row);

    for (int n = 0; n < row; n++)
    {
        coef =1;
        for (int i = 0; i < row-n; i++)
        {
            printf("  ");
        }
        

        for (int a = 0; a <= n; a++)
        {
            if (a == 0 || n == 0)
            {
                printf("%3d ", coef);
            }
            else
            {
                coef = coef * (n - a + 1) / a;
                printf("%3d ", coef);
            }
        }
        printf("\n");
    }
    return 0;
}