#include <stdio.h>

int main()
{
    long long x, y, z;
    printf("Input x, y, z:\n(These should be in range of -2^31 to 2^31-1)");
    scanf("%lld %lld %lld", &x, &y, &z);
    printf("x + y + z = %lld\n", x+y+z);
    return 0;
}