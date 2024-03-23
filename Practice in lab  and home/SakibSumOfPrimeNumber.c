#include <stdio.h>
int main()
{
    int i, Binary, sum= 0;
    for (int number = 2; number <= 200; number++)

    {
        Binary = 0;
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                Binary = 1;
            }
        }

        if (Binary == 0)
        {
            sum = sum + number;
        }
    }
    printf("%d  ", sum);

    return 0;
}