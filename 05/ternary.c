#include<stdio.h>
int main(){
    int a, b ,c;
    printf("Enter three numbers");
    scanf("%d%d%d", &a, &b, &c);
    b = (a>b) ? a:b;
    b = (c>b) ? c:b;
    printf("%d",b);
}