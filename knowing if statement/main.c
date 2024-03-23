#include<stdio.h>
#include<stdlib.h>
/*we are making a function
 which will show us the bigger number using if else statement*/

int max(int num1,int num2)
{
    int result;
    if (num1>num2)
    {
        result=num1;
    }else{result=num2;}
    return result;
}
int main()
{
    printf("%d",max(92,42));
    return 0;
}