#include <stdio.h>
int main()
{
    int Binary;
    for (int number = 2, j = 0; number < 200; number++)
    {
        Binary = 0;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                Binary = 1;
                break;
            }
        }

        if (Binary == 0)
        {
            printf("%3d ", number);
            j++;
            if (j % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}