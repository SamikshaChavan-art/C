#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int length=sizeof(a)/sizeof(a[0]);
    int *ptr=a;
    int sum=0;

    for (int i = 0; i < length; i++)
    {
        sum+=*(ptr+i);
        printf("%u : %d \n", (ptr+i), *(ptr+i));
    }

    printf("Sum of elements are %d", sum);
    
}