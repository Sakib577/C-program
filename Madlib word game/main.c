#include <stdio.h>
#include <stdlib.h>

int main()
{

    char adjective[15];
    char noun[20];
    char answers[20];

    printf("Tell how a school feels to an elementary school boy:");
    scanf("%s",adjective);
    printf("Enter a job name:");
    scanf("%s",noun);
    printf("Tell me what a detective finds:");
    scanf("%s",answers);

    printf("School is %s\n",adjective);
    printf("Some studens want to be %s\n",noun);
    printf("Detectives find %s\n",answers);


    return 0;
}
