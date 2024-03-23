#include <stdio.h>

int main(){
    int i, sum, num[5], positives = 0;
    printf("Input first number:\n");
    scanf("%d",&num[0]);
    printf("Input second number:\n");
    scanf("%d",&num[1]);
    printf("Input third number:\n");
    scanf("%d",&num[2]);
    printf("Input fourth number:\n");
    scanf("%d",&num[3]);
    printf("Input fifth  number:\n");
    scanf("%d",&num[4]);

            /*automatic type conversion
            bool -> char -> short int -> int -> 
            unsigned int -> long -> unsigned -> 
            long long -> float -> double -> long double
            */

    for ( i = 0; i < 5; i++)
    {
        if (num[i] > 0)
        {
            sum += num[i];
            positives += 1;
        }
    }
    float avg = (float) sum/positives; //explicit type conversion
    printf("Avg of positive(s) = %.1f\n", avg);


    /*automatic type conversion
            bool -> char -> short int -> int -> 
            unsigned int -> long -> unsigned -> 
            long long -> float -> double -> long double
            */

    int x = 10; // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z);
}