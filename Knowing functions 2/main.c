#include <stdio.h>
#include <stdlib.h>

/*function prototype*/
void Greetings(char name[],int age);

int main()
{
    Greetings("Sakib",21);
    Greetings("Tamim",32);
    Greetings("Mushfiq",27);
    return 0;
}

void Greetings(char name[],int age)
{
    printf("Welcome to the world of coding %s.\nYou are %d years old.\n",name,age);
}


