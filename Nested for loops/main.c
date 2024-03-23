#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*two squared brackets will represent basically weidth and hieght.
    and not only we can make 2d arreys but also multi dimensional arreys.*/

    int nums[4][3] = {
        {1,2,3},
        {11,12,13},
        {21,22,23},
        {31,32,33}, };
    /*Nested for loop is a loop which has a loop inside it. */

    int i, j; /*we can declare multiple variable at once using comma.*/

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d,",nums[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}