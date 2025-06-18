#include<stdio.h>
// header or prototype
int add(int a, int b){
    return(a+b);
}
int main(){
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Addition is %d", add(a, b));
    return 0;
}