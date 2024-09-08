#include <stdio.h>
#include <string.h>

int main(){

char adj1 [20], adj2 [20], adj3[20], adj4[20], adj5[20], adj6 [20];
char nun1[20], nun2 [20];
char pnun1[20], pnun2[20], pnun3 [20];
char advb [20];
char verb [20];

    printf("Welcome to Mad Libs!\n");
    
    printf("Enter an adjective: ");
    scanf("%s", adj1);

    printf("Enter an adjective: ");
    scanf("%s", adj2);

    printf("Enter a noun: ");
    scanf("%s", nun1);

    printf("Enter a noun: ");
    scanf("%s", nun2);

    printf("Enter a plural noun: ");
    scanf("%s", pnun1);

    printf("Enter an adverb: ");
        scanf("%s", advb);

    printf("Enter a verb: ");
        scanf("%s", verb);

    printf("Enter an adjective: ");
    scanf("%s", adj3);

    printf("Enter a plural noun: ");
    scanf("%s", pnun2);

    printf("Enter an adjective: ");
    scanf("%s", adj4);

    printf("Enter an adjective: ");
    scanf("%s", adj5);

    printf("Enter an adjective: ");
    scanf("%s", adj6);

    printf("Enter a plural noun: ");
    scanf("%s", pnun3);

    printf("How to Study!\n");

    printf("%s teachers always give out %s assignments.",adj1, adj2 );
    printf("But as everyone knows, if you want to pass all your classes so you can go to a/an %s and become president of a big international %s and have millions of %s in the bank, you must do your homework and study %s.",nun1, nun2, pnun1, advb);
    printf("If you just sit around and %s, you won't get ahead in life.", verb);
    printf("You must learn to pay attention to every %s thing your teacher says.", adj3);
    printf("Do not interrupt or whisper to other %s during class.", pnun2);
    printf("Be sure to have a nice, %s notebook in which you can write down anything your teacher says that seems %s.\n", adj4, adj5);
    printf("Then go home and memorize all of those %s notes.", adj6);
    printf("When your teacher gives a surprise quiz, you know all of the %s.", pnun3);

}

