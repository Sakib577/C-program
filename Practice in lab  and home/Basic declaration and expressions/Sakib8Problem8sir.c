//day to year, week, month, day conversion 2
#include <stdio.h>

int main()
{
    int day, week, month, year;
    day = 1329;
    year= day/365;
    day = day % 365;
    month= day/30;
    day = day % 30;
    week= day/7;
    day= day % 7;

    printf("%d years %d months %dweeks %d days",year ,month, week, day);
    return 0;
}