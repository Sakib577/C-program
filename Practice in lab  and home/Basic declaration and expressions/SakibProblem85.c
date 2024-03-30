#include <stdio.h>

int main()
{
    int i, x;

    printf("Decimal   Roman\n");
    printf("Number    Numeral\n");
    printf("---------------------\n");

    for (i = 1; i <= 100; i++)
    {
        x = i;

        printf("%3d        ", i);
        if (x == 100)
        {
            printf("C");
            x -= 100;
        }
        if (x >= 90)
        {
            printf("XC");
            x -= 90;
        }
        if (x >= 50)
        {
            printf("L");
            x -= 50;
        }
        if (x >= 40)
        {
            printf("XL");
            x -= 40;
        }
        while (x >= 10)
        {
            printf("X");
            x -= 10;
        }
        if (x == 9)
        {
            printf("IX");
            x -= 9;
        }

        if (x >= 5)
        {
            printf("V");
            x -= 5;
        }
        if (x == 4)
        {
            printf("IV");
            x -= 4;
        }

        while (x > 0)
        {
            printf("I");
            x--;
        }
        printf("\n");
    }

    return 0;
}