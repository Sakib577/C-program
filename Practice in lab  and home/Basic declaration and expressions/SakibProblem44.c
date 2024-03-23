#include <stdio.h>

int main()
{
    int marks[100], sum = 0, studnum = 0;
    float avg;
    printf("Enter the mathematics marks of all students:\n");
    printf("To end taking the inputs, Enter 0:\n");
    // There is no explicit condition provided in the loop header. Hence, the loop will continue indefinitely
    // until it is explicitly exited using a break statement.
    for (int i = 0;; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] <= 0)
            break;
        studnum++;
        sum += marks[i];
    }

    avg = (float)sum / (float)studnum;
    printf("Average: %f\n", avg);

    return 0;
}