#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b){
        b=a;
        printf("%d is maximum", a);
    }
    else if(c>b){
        b=c;
        printf("%d is maximum", c);
    }
    else{
        printf("%d is maximum", b);
    }
}