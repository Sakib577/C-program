#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] >= 1 && a[i] <= 9 )
        {
            printf("Ekok.\n");
        }
        else if (a[i] / 10 >= 1 && a[i] / 10 <= 9 )
        {
            printf("Dashak.\n");
        }
        else if (a[i] / 100 >= 1 && a[i] / 100 <= 9)
        {
            printf("Shatak.\n");
        }
        else if (a[i] <0)
        {
            printf("Counterfeit.\n");
        }
        
        else
        {
            printf("Counterfeit.\n");
        }
    }

    return 0;
}