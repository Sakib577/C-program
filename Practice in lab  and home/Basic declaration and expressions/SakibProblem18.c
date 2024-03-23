#include <stdio.h>

int main()
{
    int ndays, y, m, d;
    printf("Input no. of days:");
    scanf("%d", &ndays);

    y = ndays / 365;
    ndays = ndays % 365;

    m = ndays / 30;
    ndays = ndays % 30;

    d = ndays;
    printf("%d year(s)\n%d month(s)\n%d day(s)", y, m, d);

    return 0;
}