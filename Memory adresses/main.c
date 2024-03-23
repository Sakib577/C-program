#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=30;
    double gpa=3.5;
    char grade='A';

    printf("%p", &age);
    /*%p stands for pointer. we'll learn more about pointer later.
    and the line above this will print the memory adress of age variable.
    which is a hexadecimal number.*/
    printf("age:%p\ngpa:%p\ngrade:%p", &age, &gpa, &grade);

    return 0;
}


