#include<stdio.h>
int main(){
    int h, m, s;
    printf("Enter Hours:");
    scanf("%d", &h);
    printf("Enter Minutes:");
    scanf("%d", &m);
    printf("Enter Seconds:");
    scanf("%d", &s);
    if(h>=0 && h<24){
        printf("\nHours is valid");
        if(m>=0 && m<60){
            printf("\nMinutes is valid");
            if(s>=0 && s<60){
                printf("\nSeconds is valid");
            }
            else{
                printf("\nSeconds is invalid");
            }
        }
        else{
            printf("\nMinutes is invalid");
        }
    }
    else{
        printf("\nHours is invalid");
    }
}