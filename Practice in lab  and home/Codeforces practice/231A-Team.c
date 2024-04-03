#include <stdio.h>

int main()
{
    int n, a, b, c, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            sum += 1;
        }
    }

    printf("%d", sum);
    return 0;
}