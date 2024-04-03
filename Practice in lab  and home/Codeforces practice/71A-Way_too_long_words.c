#include <stdio.h>
#include <string.h>
#include <ctype.h>

int haveINT(char *str)
{
    while (*str)
    {
        if (isdigit(*str))
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int main()
{
    char word[1000][200] = {};
    int length[1000];

    for (int i = 0; i < 1000; i++)
    {
        scanf("%s", word[i]);
        length[i] = strlen(word[i]);
    }
    for (int i = 0; i < 1000; i++)
    {
        if (haveINT(word[i]))
        {
            continue;
        }

        if (length[i] > 10)
        {
            printf("%c%d%c\n", word[i][0], length[i] - 2, word[i][length[i] - 1]);
        }
        else if (length[i] <= 10)
        {
            printf("%s\n", word[i]);
        }
    }

    return 0;
}