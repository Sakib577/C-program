#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;

    printf("Bondhu tumi vul rasta e aso.\nTumi notun rasta choose koro.\n1 BBA\n2 CSE\n3 Cooking\n4 Singing\nEnter your choice:");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("Your new subject is BBA.");
        break;
    case 2:
        printf("Your new subject is CSE.");
        break;
    case 3:
        printf("Your new subject is Cooking.");
        break;
    case 4:
        printf("Your new subject is Singing.");
        break;
    
    default:
        printf("Bondhu tahole tomar rasta akhono vul");
        break;
    }
    return 0;
}