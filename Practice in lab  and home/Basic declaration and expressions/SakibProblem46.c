#include <stdio.h>

int main()
{
    float S = 1, i, j = 2;
    for (i = 3; i <= 7; i += 2)
    {
        S += (i / j);
        j = j * 2;
    }
    printf("%.2f", S);
    return 0;
}