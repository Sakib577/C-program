#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckynumbers[]={4, 8, 15, 16, 23, 42, 49};

    int i;
    for ( i = 0; i <= 6; i++)
    {
        printf("%d\n",luckynumbers[i]);
        //we are using i as index number.And if we write 1 or 2 or 0 in the place of i;it would be also use as index numbers but it would write the same indexed number everytime.
        //anything we can do with the for loop, we also can do that with while loop but it'll be longer
        
    }

    return 0;
}