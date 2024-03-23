#include <stdio.h>
#include <stdlib.h>

int main()
{


    const int num=6;
    printf("%d\n",num);

    /*num=7;
    printf("%d\n",num);

    these lines of codes won't work because I declared num as a constant and they can't be changed*/
    const char Name[]="Sakib";
    printf("My name is %s.\n",Name);

    /*Now the Name is a constant and I cant't change it.*/


    return 0;
}
