#include <stdio.h>
// A palindrome is a word, number, phrase, or other sequence of symbols
// that reads the same backwards as forwards, such as madam or racecar
int main()
{
    int num, rev = 0, permnum, rem;

    printf("Enter a number:\n");
    scanf("%d", &num);

    permnum = num;
    for (num; num >= 1; num /= 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    if (rev == permnum)
    {
        printf("%d is a palindrome number as the reverse of the number is same(%d)", permnum, rev);
    }

    return 0;
}