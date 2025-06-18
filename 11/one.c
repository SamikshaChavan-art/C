#include<stdio.h>
int main(){
    int i, a[10];
    int n=10;


    printf("Enter 10 elements in array:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // display in reverse
    printf("Elements in an array are:");
    // upper bound is 9 while the lower bound is 0 so the iterator starts from 9th till 0th in decrement
    for(i=9;i>=0;i--){
        printf("%5d", a[i]);
    }

    int sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("\nSum is %d", sum);

}