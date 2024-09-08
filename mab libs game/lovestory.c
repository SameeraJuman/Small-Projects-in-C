#include <stdio.h>

int main(){

    char noun1[20];char bodypart1[20];char noun2[20];char animal1[20]; char verb1[20]; char exclamation[40];char emotion1[20];char adj1[20];char verb2[20];char pluralnoun[20];char verb3[20];char location[20];char bodypart2[20];char adj2[20];char emotion2[20]; char adverb[20]; char songtitle[20];char verb4[20];char adj3[20];char animal2[20];char name[20];

    printf("Enter a noun: ");
    scanf("%s", noun1);
    printf("Enter a body part: ");
    scanf("%s", bodypart1);
    printf("Enter a noun: ");
    scanf("%s", noun2);
    printf("Enter an animal: ");
    scanf("%s", animal1);
    printf("Enter a verb: ");
    scanf("%s", verb1);
    printf("Enter an exclamation or catch phrase: ");
    scanf("%s", exclamation);
    printf("Enter an emotion: ");
    scanf("%s", emotion1);
    printf("Enter an adjective: ");
    scanf("%s", adj1);
    printf("Enter a verb: ");
    scanf("%s", verb2);
    printf("Enter a plural noun: ");
    scanf("%s", pluralnoun);
    printf("Enter a verb: ");
    scanf("%s", verb3);
    printf("Enter a location: ");
    scanf("%s", location);
    printf("Enter a body part: ");
    scanf("%s", bodypart2);
    printf("Enter an adjective: ");
    scanf("%s", adj2);
    printf("Enter an emotion: ");
    scanf("%s", emotion2);
    printf("Enter an adverb: ");
    scanf("%s", adverb);
    printf("Enter a song title: ");
    scanf("%s", songtitle);
    printf("Enter a verb: ");
    scanf("%s", verb4);
    printf("Enter an adjective: ");
    scanf("%s", adj3);
    printf("Enter an animal: ");
    scanf("%s", animal2);
    printf("Enter your name: ");
    scanf("%s", name);
printf("\n");
    printf("JARED & JULIE'S LOVE STORY\n");
    printf("When jared met julie, it was %s at first sight.", noun1);
    printf(" He couldn't believe his %s!", bodypart1);
    printf(" She smelled like %s and walked as graceful as a %s.", noun2, animal1);
    printf(" He %s over to say \"%s\" and introduced himself.", verb1, exclamation);
    printf(" She was so %s.", emotion1);
    printf(" She had seen him around and thought he was super %s.", adj1);
    printf(" They %s for a while and then exchanged %s.", verb2, pluralnoun);
    printf(" On their first date, they %s at the %s and he couldn't keep his %s off of her.", verb3, location, bodypart2);
    printf(" After a %s night, he was %s to bring her home.", adj2, emotion2);
    printf(" She %s looked at him and said \"%s\" and he just knew, he had to %s her again.", adverb, songtitle, verb3);
    printf(" Since then, they have been inseparable and he started called her his \"%s\".", adj3, animal2);
    printf("\nStory by: %s", name);
    return 0;
}