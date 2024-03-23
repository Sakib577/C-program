#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretnumber =56;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    int outofguesses=0; //here 0 is used as a boolian 0(false)

    while (guess != secretnumber && outofguesses==0)
    {
        if (guesscount < guesslimit)
        {
        printf("Guess the age of hitler when he died:");
        scanf("%d",&guess);
        guesscount++;
        }

        else
        {
            outofguesses=1; //here 1 is used as a boolian 1(true) and
            //until outofguesses is 1 the code will continue to loop.
        }
    }

    if (outofguesses == 1)
    {
        printf("You're out of guesses.");
    }
    else{
    printf("You win.");
    }

    return 0;
}