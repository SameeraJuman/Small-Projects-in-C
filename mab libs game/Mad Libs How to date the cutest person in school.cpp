// Mad Libs Game: How to date the cutest person in school
#include <stdio.h>

int main() {
    
    char noun1 [15]; char bodyPart1 [10]; char pieceofClothing [15]; 
    char bodyPart2 [10]; char noun2 [15]; char aSmell [20]; 
    char familyMember1 [15]; char transportation [15]; char verb [15];
    char phrase [20]; char bodyPart3 [10]; char adjective1 [15];
    char adjective2 [15]; char question [25]; char adjective3 [15];
    char familyMember2 [15]; char dayofWeek [15]; char time1 [15];

    printf("Enter a noun: ");
    scanf("%s", noun1);
    
    printf("Enter a body part: ");
    scanf("%s", bodyPart1);
    
    printf("Enter a piece of clothing: ");
    scanf("%s", pieceofClothing);
    
    printf("Enter a body part: ");
    scanf("%s", bodyPart2);
    
    printf("Enter a noun: ");
    scanf("%s", noun2);
    
    printf("Enter a smell: ");
    scanf("%s", aSmell);
    
    printf("Enter a family member: ");
    scanf("%s", familyMember1);
    
    printf("Enter a transportation: ");
    scanf("%s", transportation);
    
    printf("Enter a verb: ");
    scanf("%s", verb);
    
    printf("Enter a phrase: "); //stding just means standard
    scanf("%s", phrase);
    
    printf("Enter a body part: ");
    scanf("%s", bodyPart3);
    
    printf("\nEnter an adjective: ");
    scanf("%s", adjective1);    
    
    printf("Enter an adjective: ");
    scanf("%s", adjective2);
    
    printf("Enter a question: "); 
    scanf("%s", question);
    
    printf("Enter an adjective: ");
    scanf("%s", adjective3);
    
    printf("Enter a family member: ");
    scanf("%s", familyMember2);
    
    printf("Enter a day of week: ");
    scanf("%s", dayofWeek);
    
    printf("Enter a time: ");
    scanf("%s", time1);
    
    printf("How to date the cutest person in school\n");
    printf("1. In the morning take a %s. Make sure to brush your %s.", noun1, bodyPart1);
    printf("\n2. Wear the %s that shows off %s.",pieceofClothing, bodyPart2  );
    printf("\n3. Spray on a bit of %s that smells like %s.", noun2, aSmell);
    printf("\n4. Arrive to school in your %s's %s.", familyMember1, transportation);
    printf("\n5. Accidently %s into the person and say %s.", verb, phrase);
    printf("\n6. Grab the person's %s, act %s and in a %s voice ask %s?", bodyPart3, adjective1, adjective2, question);
    printf("\n7. Tell him/her you and your %s %s will pick them up on %s at %s for a date!", adjective3, familyMember2, dayofWeek, time1);

    return 0;
}
