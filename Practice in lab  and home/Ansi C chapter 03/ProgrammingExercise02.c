#include <stdio.h>
#define RICE 16.75
#define SUGER 15

int main()
{
    float rice, suger, riceAmount, sugerAmount;

    printf("Enter the amount of rice in kg:\n");
    scanf("%f",&riceAmount);
    printf("Enter the amount of suger in kg:\n");
    scanf("%f",&sugerAmount);

    rice=RICE*riceAmount;
    suger=SUGER*sugerAmount;

    printf("***LIST OF ITEMS***\n");
    printf("Item    Price\n");
    printf("Rice    BDT %.2f\n",rice);
    printf("Suger   BDT %.2f\n",suger);
    return 0;
}