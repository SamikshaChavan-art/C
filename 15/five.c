#include<stdio.h>
    float area(float r){
        float PI = 3.14;
        return PI*r*r;
    }
int main(){
    float r;
    printf("Enter radius:");
    scanf("%f", &r);
    printf("Area of circle is %.2f", area(r));

}