#include <stdio.h>

int main()
{
    int x, y;
    short int z;
    printf("Enter two 6 digit numbers:\n");
    scanf("%d%d", &x, &y);

    z = x+y;
    printf("Sum=%d\n", z); 
    //This will be the output and the output might be an unexpected number
    //as short integers range is -128 to 127. and integers range is -32768 to 32767 in 16 bit processors
    //in 32 and 64 bit processors short int range is -32768 to 32767 and int range is -2,147,483,648 to 2,147,483,647
    return 0;
}