#include<stdio.h>
#include "array.h"
int main(){
    int a[100], n, key, i;
    int flag=0;

    printf("Enter n:");
    scanf("%d", &n);

    accept(a, n);

    printf("Enter key:");
    scanf("%d", &key);

    display(a, n);

    if(linearSearchf(a,n,key)){
        printf("\nKey found!!");
    }
    else{
        printf("\nKey not found!!");
    }
}