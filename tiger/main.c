#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CharacterName [] ="Shahed";
    int CharacterAge = 70;
    char Job [] = "Farming";
    char class ='l';
    printf("Once there was a man who had 3 farms.His name was %s.\n", CharacterName);
    printf("One was for chickens,one was for ducks and one was for cows.\n");
    printf("But he wasn't young.%s was %d years old and weak.\n", CharacterName,CharacterAge);

    CharacterAge =32;
    printf("His age and physical abilities were not enough to make his farms bigger.\n");
    printf("In the age of %d it was so hard for him to do those heavy works.\n",CharacterAge);
    printf("Although his main job is %s he also loves to do fishing.\n",Job);
    printf("He is an %c class person in his society.\n",class);
    return 0;
}
