#include <stdio.h>

int main()
{
    float S = 0;
    for (float i = 1; i <= 50; i++)
    {
        S += (1 / i);
    }
    printf("%.2f", S);
    return 0;
}