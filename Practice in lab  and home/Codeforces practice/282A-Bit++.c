#include <stdio.h>
#include <string.h>

int n, x;

int main()
{
    char op[4];
    scanf("%d", &n);
    if (n >= 1 && n <= 150)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s", op);

            if (strcmp(op, "++X") == 0)
            {
                ++x;
            }
            else if (strcmp(op, "--X") == 0)
            {
                --x;
            }
            else if (strcmp(op, "X++") == 0)
            {
                x++;
            }
            else if (strcmp(op, "X--") == 0)
            {
                x--;
            }
        }

        printf("%d", x);
    }
    return 0;
}