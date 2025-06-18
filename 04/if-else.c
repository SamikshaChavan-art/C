#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    
    if (n>0)
    {
        printf("It is a positive number");
    }
    else{
        printf("It is a negative number");
    }
    
}