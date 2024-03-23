#include <stdio.h>
int main()
{
    char id[10];
    int hrs;
    double value, salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);
    printf("Input the working hrs: ");
    scanf("%d", &hrs);
    printf("Salary amount/hr: ");
    scanf("%lf", &value);

    salary = hrs * value;
    printf("Employees name:%s\n", id);
    printf("Salary = U$ %.f", salary);
    return 0;
}