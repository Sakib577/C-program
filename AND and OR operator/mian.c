#include <stdio.h>
#include<stdlib.h>

    /*(&& is the logical operator for and)*/
    /*(|| is the operator for or)*/
    /*(== is the operator to check if something is equal)*/
    /*(!= is the operatpr to check if something is not equal)*/
    /*(! is negation or not operator
    which will make any thing opposite.
    suppose if something is true it'll show false.
    if something is false it'll show true)*/

int main()
{
    if(4>5||4>3)
        {printf("True\n");}
        
        else{printf("False\n");}

    if (5<3||6<4)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    if (!(5<3))
    {
        printf("True\n");
    }
    else {printf("False");}

    

    return 0;
}