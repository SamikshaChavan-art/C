#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n%2==0){
        printf("%d is Even number", n); 
    }
    else{
        printf("%d is Odd number", n); 
    }
}