#include<stdio.h>
#include "array.h"
int main(){
    int a[100], i, n, key;

    printf("Enter N:");
    scanf("%d", &n);
    accept(a, n);

    printf("Enter key:");
    scanf("%d", &key);
    delete(a, n, key);
    n--;
 

    printf("After deletion:");
    display(a, n);

}