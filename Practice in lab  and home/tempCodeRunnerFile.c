#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, sum = 1;
    printf("Input a positive number less than 100: ");
    scanf("%d", &n);

    if (n < 100)
    {
        for (int i = 2, j = 2; i <= n; j++)
        {
            sum += pow(i, 4);
            i += j;
        }
    }
    printf("Sum of the series is :%d\n", sum);   
    
    return 0;
}