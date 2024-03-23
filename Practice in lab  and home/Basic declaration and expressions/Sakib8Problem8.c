// day to year, week, month, day conversion
#include <stdio.h>

int main()
{
    int day, week, month, year;
    day = 1329;
    year = day / 365;
    month = (day % 365) / 30;
    week = ((day % 365) % 30) / 7;
    day = ((day % 365) % 30) % 7;

    printf("%d years %d months %dweeks %d days", year, month, week, day);
    return 0;
}