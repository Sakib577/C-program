#include <stdio.h>

int main()
{
    float n, sum;

    printf("Enter the value of n:\n");
    scanf("%f",&n);

    for (float i = 1; i <= n; i++)
    {
        sum += 1/i;
    }
    
    printf("SUM=%f", sum);
    return 0;
}