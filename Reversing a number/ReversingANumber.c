#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rev=0, rem;

    printf("Enter the number:\n");
    scanf("%d", &num);

    for (num; num > 0; num= num/10)
    {
        rem= num%10;
        rev= rev*10 +rem;
    }
    
    printf("Reverse : %d", rev);
    return 0;
}