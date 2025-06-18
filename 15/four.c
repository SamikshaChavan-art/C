#include<stdio.h>
// header or prototype
int mul(int a, int b){
    return(a*b);
}
int main(){
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Multiplication is %d", mul(a, b));
    return 0;
}