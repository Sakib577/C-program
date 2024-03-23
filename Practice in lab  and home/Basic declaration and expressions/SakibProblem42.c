#include <stdio.h>
#include <math.h>
int main()
{
    float x, sq, cu;
    printf("Enter number of lines: ");
    scanf("%f", &x);
    printf("Output:\n");

    for (int i = 1; i <= x; i++)
    {
        sq = pow(i, 2);
        cu = pow(i, 3);
        printf("%d %.0f %.0f\n", i, sq, cu);
    }

    // a small issue with the use of the pow() function. The pow() function returns a double value,
    // but you're assigning the result to an int variable (sq and cu). This can lead to precision loss,
    // especially when dealing with large numbers.
    // Though I could do this code simply using integer and not using math library But I did it to learn.

    return 0;
}