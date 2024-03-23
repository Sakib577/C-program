#include <stdio.h>

int main()
{
    int pass, loop = 1;

    // this line is written to do nothihng

    while (loop == 1)
    {
        printf("Enter the password.\n");
        scanf("%d", &pass);
        if (pass == 1234)
        {
            printf("Correct password.\n");
            loop = 0;
        }
        else
        {
            printf("Wrong password.\n");
        }
    }
    return 0;
}