#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number, rev = 0, rem, digit, permnum;

    printf("Enter the number:\n");
    scanf("%d", &Number);
    permnum = Number;

    for (Number; Number > 0; Number = Number / 10)
    {
        rem = Number % 10;
        rev = rev * 10 + rem;
    }

    while (permnum > 0)
    {
        digit = rev % 10;
        switch (digit)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        rev = rev / 10;
        permnum = permnum / 10;
    }

    return 0;
}