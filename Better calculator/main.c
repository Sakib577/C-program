#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter first number:");
    scanf("%lf", &num1);

    printf("Enter operator:");
    scanf(" %c",&op);  /*we have to put a space before storing any operator*/

    printf("Enter second number:");
    scanf("%lf",&num2);

    if (op == '+')
    {
        printf("%.2f", num1+num2);
    }

    else if (op == '-')
    {
        printf("%.2f",num1-num2);
    }
    
    else if (op == '*')
    {
        printf("%.2f",num1*num2);
    }
    
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Devision by 0 is not allowed.");
        }

        else
        
        printf("%.2f",num1/num2);
        }
    
    else 
    { 
        printf("Invalid operator");
    }

    return 0;
}