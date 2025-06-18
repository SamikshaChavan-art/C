#include<stdio.h>
// Function with a return type and no parameter
int add(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    return a+b;
}
int sub(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    return a-b;
}
int mul(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    return a*b;
}
int div(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    return a/b;
}

int main(){
    printf("\nAddition is %d", add());
    printf("\nSubstraction is %d", sub());
    printf("\nMultiplication is %d", mul());
    printf("\nDivision is %d", div());
}