#include <stdio.h>
/* building basic calculator: the user enters 2 numbers 
and our program will take those 2 numbers and add them 
together
And we will look at getting numbers from the user*/

int main (){
	int num1, num2;
    
   printf("Enter first number: "); // 1st prompt the user 
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);
   
   printf("Sum: %d ", num1+num2);
	
	
	return 0;
}
