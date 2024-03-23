#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index;

    printf("Enter the index number:");
    scanf("%d",&index);

    do
    {
        printf("%d\n",index);
        index++;
    } while (index<=5);
    
    return 0;
}