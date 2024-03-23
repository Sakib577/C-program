#include <stdio.h>
#include <stdlib.h>

void Greetings(char name[],int age)
{
    printf("Welcome to the world of coding %s.\nYou are %d years old.\n",name,age);
}
/*Here we are not function proptotyping here
rather we are creating the function before heading to the main function
and that's why this main function knows what function it is using. */

int main()
{
    Greetings("Sakib",21);
    Greetings("Tamim",32);
    Greetings("Mushfiq",27);
    return 0;
}



