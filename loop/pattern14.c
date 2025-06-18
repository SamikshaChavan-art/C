#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        int diff=4;
        int value=i;
        for (int j = 1; j <= i; j++)
        {
        printf("%5d", value);
        value+=diff;
        diff--;
        }
        printf("\n");
    }
    
}