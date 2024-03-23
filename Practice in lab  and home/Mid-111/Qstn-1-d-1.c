#include <stdio.h>
#include <stdlib.h>

int main()
{
    // i.
    int x = 100;
    printf("%d/n", 10 + x++); // x++ =x+1   but here first it counts 10+x   then increaments by 1
    // so it prints 110
    printf("%d\n", 10 + ++x); // here from the previous line we get x++=111 and then 10+ ++x
    // here ++x means first it increaments then it prints   so the result is 112.

    // ii.
    int y = 10, z = 10;
    x = 5;
    x = y == z; // here == it is equailty operator(one of the comparison operators). 00
    // it qstns that is y=z?  if true then 1, else 0.
    printf("%d\n", x);

    // iii.
    x = 100, y = 200;
    printf("%d\n", (x > y) ? x : y);

    // iv.

    for (int m = 0; m < 3; m++)
    {
        printf("%d\n", (m % 2 == 0) ? m : m + 2);
    }

    return 0;
}