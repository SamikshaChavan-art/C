#include<stdio.h>
float area(float side){
    return side*side;
}
int main(){
    float side;
    printf("Enter side:");
    scanf("%f", &side);
    printf("Area of square %.2f", area(side));
}