#include<stdio.h>
#include<conio.h>   

int main() {
    int h = 0, m = 0, s = 0, i;
    printf("Please enter a time format in HH:MM:SS\n");
    scanf("%d%d%d", &h, &m, &s);
    start:
    for(h; h<24; h++){
        for(m; m<60; m++){
            for(s; s<60; s++){
                printf("\n\n\n\t\t\t%d:%d:%d", h, m, s);
                if(h<12)
                    printf("AM");
                else
                    printf("PM");
                    for(double i = 0; i<3619999;i++)
                    i++;
                    i--;
                }
                s = 0; //resets the s variable to 0
            }
            m = 0;
        }
        h = 0;
        goto start;
        //goto start; jumps to start to create an infinite loop that prints the time values continously.
        getch();
    }

