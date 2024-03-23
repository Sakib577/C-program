#include<stdio.h>
#include<stdlib.h>
/*we are making a function
 which will show us the bigger number using if else statement*/

int max(int num1,int num2,int num3)
{
    int result;
    if (num1>=num2 && num1>=num3) /*(&& is the logical operator for and)*/
    /*(|| is the operator for or)*/
    {
        result=num1;

    }else if (num2>=num1 && num2>=num3)
    {
        result=num2;
    }

    else{result=num3;}
    return result;
}
int main()
{
    printf("%d",max(92,42,105));
    return 0;
}