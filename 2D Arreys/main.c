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

    printf("%d",nums [2][1]);
    return 0;
}