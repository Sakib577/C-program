#include<stdio.h>
#include <stdlib.h>

double cube(double number){
    return number*number*number;
    printf("Hello world");
}
/*So the return statement or keyword will actually break us out of the function
and that's why the printf function is not working after the return keyword.*/
int main ()
{
    printf("Result is:%f",cube(3));
    return 0;
    printf("This will not print for the same reason in the above function printf function didn't work");
}