/*C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
Print the ID and salary (with two decimal places) of the employee for a particular month.*/
// I added more functionality to learn and practice more
// I added the functionality which can take the id and decide which post does the person work for and how much he earns in an hour.
#include <stdio.h>

int main()
{
    int ID;
    char Rank[15];
    int hour;
    double salary, value;

    printf("Enter id of the employee:");
    scanf("%d", &ID);

    printf("Enter the number of hours he/she worked:");
    scanf("%d", &hour);

    switch (ID)
    {
    case 1 ... 999:
        Rank, "Manager";
        value = 210;
        break;
    case 1000 ... 1999:
        Rank, "Officer";
        value = 190;
        break;
    case 2000 ... 2999:
        Rank, "Worker";
        value = 150;
        break;
    case 3000 ... 3999:
        Rank, "Gate Keeper";
        value = 120;
        break;
    case 4000 ... 4999:
        Rank, "Dust Man";
        value = 90;
        break;

    default:
        printf("Invalid ID.");
        break;
    }

    salary = value * hour;

    printf("He/She is a %s of this company.\nHis/Her salary of this month is %.2f.\n", Rank, salary);
    return 0;
}