#include<stdio.h>
#include<windows.h>
//this is wayy better than digitalclock1
int main() {
    int h, m, s;
    int d = 1000;               //representing the delay in milliseconds for the clock update.
    printf("Set Time: \n");
    printf("Enter hours: ");
    scanf("%d", &h);
    printf("Enter minutes: ");
    scanf("%d", &m);
    printf("Enter seconds: ");
    scanf("%d", &s);
    if(h>24 || m>60 || s>60){
        printf("Error ffff2xxx");
        exit(0);
    }
    while(1){                       //the 1 creates an infinite loop
        s++;
        if(s>59){
            m++;
            s = 0;
        }
        if(m>59){
            h++;
            m = 0;
        }
        if(h>12){   //If the condition h > 12 is true, it means that the clock is using a 12-hour format (AM/PM).
        h = 1;
        }
    printf("Clock: ");
    printf("%02d:%02d:%02d", h,m,s);
    Sleep(d);   //pauses the execution of the program for a specified duration in     milliseconds.this is to control the speed of the clock update.
    system("cls");
    //^ clears the console screen before printing the updated clock time, creating a visual effect of the clock ticking.
    }
    return 0;
}
