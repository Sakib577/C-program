#include <stdio.h>

int main()
{
    char str[] = {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    printf("List of integer equivalents of letters (a-z, A-Z).\n");
    printf("==================================================\n");

    for (int i = 0; i < 53; i++)
    {
        printf("%3d ", str[i]);
        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}