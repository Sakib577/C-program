#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Button[1];
    printf("Press A button and then enter:");
    scanf("%s",Button);

    Greetings();
    return 0;
}
/*the next few lines of code will be using as a function.
and the funstions can be few lines of code
which will establish one or more type of specific task.
and another important thing is the functions neeed to be
called in the main function and only then the function will work*/

void Greetings(){
    printf("Welcome to the world of coding.");




}
