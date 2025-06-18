//using fmax function - implicitly converts int to float compares two numbers
#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    printf("Max : %f", fmax(a, fmax(b,c)));
}