#include <stdio.h>

int main()
{
    int sec, h, m, s;
    printf("Input seconds:");
    scanf("%d", &sec);

    h = sec / 3600;
    sec = sec % 3600;

    m = sec / 60;
    sec = sec % 60;

    s = sec;
    printf("H:M:S - %d:%d:%d", h, m, s);
    return 0;
}