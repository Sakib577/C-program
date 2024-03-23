#include <stdio.h>

int main()
{
    int amt, total;

    printf("Input the amount:");
    scanf("%d", &amt);

    printf("There are: ");

    total = amt / 1000;

    if (total > 1)
    {
        printf("%d notes of 1000 taka.\n", total);
    }
    else
    {
        printf("%d note of 1000 taka.\n", total);
    }

    total = amt / 500;

    if (total > 1)
    {
        printf("%d notes of 500 taka.\n", total);
    }
    else
    {
        printf("%d note of 500 taka.\n", total);
    }

    total = amt / 100;
    if (total > 1)
    {
        printf("%d notes of 100 taka.\n", total);
    }
    else
    {
        printf("%d note of 100 taka.\n", total);
    }

    total = amt / 50;

    if (total > 1)
    {
        printf("%d notes of 50 taka.\n", total);
    }
    else
    {
        printf("%d note of 50 taka.\n", total);
    }

    total = amt / 20;

    if (total > 1)
    {
        printf("%d notes of 20 taka.\n", total);
    }
    else
    {
        printf("%d note of 20 taka.\n", total);
    }

    total = amt / 10;

    if (total > 1)
    {
        printf("%d notes of 10 taka.\n", total);
    }
    else
    {
        printf("%d note of 10 taka.\n", total);
    }

    total = amt / 5;

    if (total > 1)
    {
        printf("%d notes of 5 taka.\n", total);
    }
    else
    {
        printf("%d note of 5 taka.\n", total);
    }

    total = amt / 2;

    if (total > 1)
    {
        printf("%d notes of 2 taka.\n", total);
    }
    else
    {
        printf("%d note of 2 taka.\n", total);
    }
    return 0;
}