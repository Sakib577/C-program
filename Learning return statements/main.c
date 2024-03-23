#include<stdio.h>
#include <stdlib.h>

double cube(double number){
    double result= number*number*number ;
    return result;
}
int main ()
{
    printf("Result is:%f",cube(3));
    return 0;
}