#include <stdio.h>
#include <string.h>

int n, x;

int PlusOne(int x)
{
    return ++x;
}

int MinusOne(int x)
{
    return --x;
}

int main()
{
    char op[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", op);

        if (strcmp(op, "++X") == 0)
        {
            x= PlusOne(x);
        }
        else if (strcmp(op, "--X") == 0)
        {
            x= MinusOne(x);
        }
    }

    printf("%d", x);
    return 0;
}