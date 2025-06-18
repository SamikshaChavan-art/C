#include<stdio.h>
#include "array.h"
int main(){
    int a[100], n, i;
    printf("Enter N:");
    scanf("%d", &n);

    accept(a, n);

    printf("Given data is:");
    display(a, n);

    return 0;

}