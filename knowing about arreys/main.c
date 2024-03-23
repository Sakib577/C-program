#include <stdio.h>
#include <stdlib.h>

int main()
{
    int favnums[]={3,5,7,9,11};
    /*this is structure of an arrey and it stores multiple data at once*/
    printf("%d\n",favnums[3]);
    /*here 4 in the above line is not the number we want to print,
    it's the placement of the element in that arrey. it starts from 0,1,2,3...*/
    favnums[2]=18;
    printf("%d\n",favnums[2]);

    /*so if  I assign a value for a certain position,
    that value will override the original value pof the position*/

    int luckynumbers[5];
    /*so if we don't want to give values of an arrey then we have to do
    this and give the number of how many elements can it store*/
    luckynumbers[2]=60;
    luckynumbers[0]=40;
    printf("%d\n",luckynumbers[2]);
    printf("%d\n",luckynumbers[0]);
    printf("%d\n",luckynumbers[3]);
    /*here we didn't have a number asssigned for position[1],
    so the result will be an error*/

    char favwords[]="water";
    printf("%s",favwords);
    /*We learned that it is a character string variable
    but actually it is an arrey of characters*/





    return 0;
}
