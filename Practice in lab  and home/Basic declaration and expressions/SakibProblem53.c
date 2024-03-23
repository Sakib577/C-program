#include <stdio.h>
#include <stdlib.h>

int main()
{
   int p, r, t, si;

   printf("Input principle, rate of interest, and time simultaneously:\n");
   scanf("%d %d %d", &p, &r, &t);

   si = p * r * t / 100;
   printf("Simple interest= %d", si);
   return 0;
}