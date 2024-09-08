#include<stdio.h>
#include<time.h>

int main(){
    time_t s, val = 1; //Declares a variable s of type time_t, which is used to store the current time.
    struct tm *current_time; //Declares a pointer to a struct tm named current_time

    //struct tm is a structure defined in <time.h> that holds the components of time (like year, month, day, etc.).

    //getting current time
    s = time (NULL); //gets the current time and stores it in 's'

    current_time = localtime(&s); //This line converts the time stored in s to the local time zone and stores the result in the current_time structure.
    //why use &? The localtime() function expects a pointer to a time_t variable as its argument. By using the & operator, you're providing the memory address where the time_t value stored in s is located.

    printf("Current time: %02d: %02d: %02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    //-> dereferences a pointer to a structure or a union and accessing one of its members.
    return 0;
}

//why create a point to a struct? Since localtime() returns a pointer, we need a pointer variable to store its result.
