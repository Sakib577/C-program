#include <stdio.h>

int main()
{
    char str1[20], str2[20];
    int i;

    printf("Input a string: \n");
    scanf("%s", str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("Original string: %s\n", str2);
    printf("Number of characters: %d\n", i);

    return 0;
}