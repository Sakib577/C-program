#include <stdio.h>

void bubblesort(int a[], int n)
{
    int i, j, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, k, a[], sum = 0;

    scanf("%d %d", &n, &k);
    if (n >= k)
    {
        a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        bubblesort(a, n);
        
    }

    return 0;
}