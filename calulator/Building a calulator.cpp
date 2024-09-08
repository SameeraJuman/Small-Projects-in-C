//calculator that will be able to +, -, * or / any input the user enters. The user can decide which operation they want to do too
#include <stdio.h>

//1. to start off, we want to ask the user to enter a #, then an operator and finally ask them to enter a 2rd #. We then perform the operation n print out the output
int main() {
//2. create variables that can store the numbers and the operators
    double num1;
    double num2;
    char op; //this is storing a +, -, *, /
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op); //put a space before %c otherwise it wudn't work
    printf("Enter the second number: ");
    scanf("%lf", &num2);
//now tht we already hv the info before, we now hv to figure out which operator the user wanted to use
// we can use an else statmt to see what operator is inside the op (operator variable) 

    if (op == '+') {
        printf("%lf", num1 + num2);
    } else if (op == '-'){
        printf("%lf", num1 - num2);
    }else if (op == '/'){
        printf("%lf", num1 / num2);
    }else if (op == '*') {
        printf("%lf", num1 * num2);
    }else{
        printf("Invalid Operator");
    }
// but wut if the user enters an operator tht we dont want. so we're gonna have to tell them in the program; print out a error msg
// the else statemt will be executed if non of the else if stat. is true
    return 0;
}
