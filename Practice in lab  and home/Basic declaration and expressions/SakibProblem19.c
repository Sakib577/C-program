#include <stdio.h>

int main()
{
    int p, q, r, s;
    printf("Enter 4 integers serially:\n");
    scanf("%d", &p);
    scanf("%d", &q);
    scanf("%d", &r);
    scanf("%d", &s);

    if (q > r && r > 0 && s > 0 && (p % 2) == 0 && s > p && (r + s) > (p + q))
    {
        printf("Correct values.");
    }
    else
    {
        printf("Incorect values");
    }
    return 0;
}