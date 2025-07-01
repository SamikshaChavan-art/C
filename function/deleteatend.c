#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int length=10;

    a[length+1]=a[length];
    length--;
    for (int i = 0; i < length; i++)
    {
        printf("%5d", a[i]);
    }
    
}