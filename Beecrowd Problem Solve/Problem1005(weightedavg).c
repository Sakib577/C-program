#include <stdio.h>
 
int main() {
    /*A weighted average is a calculation that considers the varying importance of numbers in a
    data set. It's similar to an arithmetic mean, but some data points contribute more than others*/

    double A, B, avg;
    scanf("%lf%lf", &A, &B);
    
    avg= (A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %.5lf\n", avg);
 
    return 0;
}