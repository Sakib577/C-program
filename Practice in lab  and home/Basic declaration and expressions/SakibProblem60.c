#include <stdio.h>

int main()
{
    enum week
    {
        sun,
        mon,
        tue,
        wed,
        thu,
        fri,
        sat
    };

    printf("Sun = %d\n", sun);
    printf("Mon = %d\n", mon);
    printf("Tue = %d\n", tue);
    printf("Wed = %d\n", wed);
    printf("Thu = %d\n", thu);
    printf("Fri = %d\n", fri);
    printf("Sat = %d\n", sat);

    return 0;
}