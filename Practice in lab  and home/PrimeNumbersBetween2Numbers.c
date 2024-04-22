#include <stdio.h>

int main()
{
    int max, min, Binary, temp;
    printf("Enter two integers:\n");
    scanf("%d%d", &min ,&max);
    if (min > max)
    {
        temp = max;
        max = min;
        min = temp;
    }

    for (int j=0; min <= max; min++)
    {
        Binary=1;
        for (int i = 2; i < min; i++)
        {
            if (min%i==0)
            {
                Binary = 0;
                break;
            }            
        }

        if (Binary == 1)
            {
                printf("%4d", min);
                j++;
                if (j%10==0)
                {
                    printf("\n");
                }   
            }
        
    }
    

    return 0;
}