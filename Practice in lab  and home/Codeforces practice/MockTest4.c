#include <stdio.h>
#define PI 3.141592653589793238462
int main()
{
    double volume[1000], radius[1000];
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf", &radius[i]);
        if (radius[i] <= 2000 &&radius[i] >= 1)
        {
            volume[i]= 4/3 * PI * radius[i]*radius[i]*radius[i];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        printf("%.10lf\n", volume[i]);
    }
    
}