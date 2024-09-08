#include<stdio.h>

#define TRUE 1              //macros for boolean values
#define FALSE 0

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
//the 1st index is set to 0 to match the index to month numbers; not a must, just makes it easier to access it

char *months[] = 
{
    " ",            //1st element is a space to match the indexing with month numbers; same concept as line 6
    "\n\n\nJanuary",
    "\n\n\nFebruary",
    "\n\n\nMarch",
    "\n\n\nApril",
    "\n\n\nMay",
    "\n\n\nJune",
    "\n\n\nJuly",
    "\n\n\nAugust",
    "\n\n\nSeptember",
    "\n\n\nOctober",
    "\n\n\nNovember",
    "\n\n\nDecember",
};

int inputyear (void){
    int year;
    printf("Please enter a year (example: 1999) : ");
    scanf("%d", &year);
    return year;
}

/* Rules for calculating leap years:
1. If the year is divisible by 400, it is a leap year.
2. If the year is divisible by 100 (but not 400), it is not a leap year.
3. If the year is divisible by 4 (but not 100), it is a leap year.  
Purpose of this function is to determine if a year is a leap year and to adjust the number of days in February accordingly.*/

int determineleapyear (int year){
    if (year % 4 == FALSE && year % 100 != FALSE || year % 400 == FALSE){  
                                           //% is a modulo operator; its basically saying 'year % 4 == 0'
        days_in_month[2] = 29;            //indicates a leap year 
        return TRUE;                     //Returns TRUE if the year is a leap year, FALSE otherwise.
    }
    else{
        days_in_month[2] = 28;
        return FALSE;
    }
}

//determine the day of the week for a given date; Zeller's Congruence algorithm
int determinedaycode (int year){
    int daycode;
    int d1, d2, d3;

    d1 = (year - 1.) / 4.0;
    d2 = (year - 1.) / 100.;
    d3 = (year - 1.) / 400.;
    daycode = (year + d1 - d2 + d3) % 7; 
    return daycode;
//if the return value was 1;A daycode of 1 corresponds to Monday;So, January 1, 2024, falls on a Monday. 
//% 7 ensures that the day code is in the range 0 to 6, corresponding to Sunday to Saturday.
}

//printing calendar
void calendar (int year, int daycode){
    int month, day;

    for (month = 1; month <= 12; month++){
        printf("%s", months[month]);
        printf("\n\nSun  Mon  Tue  Wed  Thur  Fri  Sat\n");

//This loop prints spaces to indent the first day of the month to the correct position under the corresponding day header.
        for (day = 1; day <= 1 + daycode * 5; day++){
            printf(" ");
        }

//prints the dates
        for(day = 1; day <= days_in_month[month]; day++){
//day is initialized to 1, representing the first day of the month.
            printf("%2d", day);                    //prints the current date (e.g., 1, 2, 3, ...) of the month.

//is day before Sat? Else start new line Sun
            if ((day + daycode) % 7 > 0)        //gives a number that represents the position in the week.
                printf("   ");
            else
                printf("\n ");
        }    

//determine the starting day of the week for the next month.
            daycode = (daycode + days_in_month[month]) % 7;
    }
}

int main (void) {
    int year, daycode, leapyear;

    year = inputyear();
    daycode = determinedaycode (year);
    determineleapyear (year);
    calendar (year, daycode);
    printf("\n");
}

