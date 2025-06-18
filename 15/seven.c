#include<stdio.h>
int area(int l, int b){
    return l*b;
}
int main(){
    int l, b;
    printf("Enter length and breath:");
    scanf("%d%d", &l, &b);
    printf("Area of rectangle %d", area(l, b));
}