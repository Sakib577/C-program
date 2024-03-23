#include<stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, positives=0, negatives=0;

    printf("Input the number of integers you want to input:\n");
    scanf("%d",&size);
    int num[size];
    printf("Input the numbers:\n");
    printf("Input 0 to terminate:\n");

    for ( i = 0;i < size; i++)
    {
        scanf("%d",&num[i]);

        if (num[i] > 0)
        {
            positives += 1;
        }
        else if (num[i] < 0)
        {
            negatives += 1;
        } else if (num[i]==0)
        {
            break;
        }
    }

    printf("Number of positive number(s): %d\n", positives);
    printf("Number of negative number(s): %d\n", negatives);
    
    return 0;
}